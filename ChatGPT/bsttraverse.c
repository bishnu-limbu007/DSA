
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int key) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    } else {
        if (root->val > key) {
            root->right = insert(root->right, key);
        } else {
            root->left = insert(root->left, key);
        }
    }
    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        printf("%d ", root->val);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct TreeNode* root) {
    if (root) {
        printf("%d ", root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct TreeNode* root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->val);
    }
}

int main() {
    int keys[] = {4, 2, 6, 1, 3, 5, 7};
    int numKeys = sizeof(keys) / sizeof(keys[0]);
    
    struct TreeNode* root = NULL;
    for (int i = 0; i < numKeys; i++) {
        root = insert(root, keys[i]);
    }
    
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");
    
    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");
    
    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");
    
    return 0;
}
