
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** headRef, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}

void insertAtEnd(struct Node** headRef, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
    } else {
        struct Node* current = *headRef;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deleteNode(struct Node** headRef, int key) {
    if (*headRef == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = *headRef;
    struct Node* prev = NULL;

    if (current != NULL && current->data == key) {
        *headRef = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Key not found.\n");
        return;
    }

    prev->next = current->next;
    free(current);
}

void addAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void removeAfter(struct Node* prevNode) {
    if (prevNode == NULL || prevNode->next == NULL)  {
        printf("No node to remove.\n");
        return;
    }

    struct Node* nodeToRemove = prevNode->next;
    prevNode->next = nodeToRemove->next;
    free(nodeToRemove);
}
void removeAny()
int n;
struct node*ptrthis;
printf("\nEnter a number to be removed.");
  scanf("%d",n);
  for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next){
if (p strthis=)
}

void display(struct Node* head) {
    struct Node* current = head; while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeList(struct Node** headRef) {
    struct Node* current = *headRef;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    *headRef = NULL;
}

int main() {
    struct Node* head = NULL;
    int choice, data, key;

    while (1) {
        printf("\nSingly Linked List Operations:\n");
        printf("1. Add node\n");
        printf("2. Remove node\n");
        printf("3. Display list\n");
        printf("4. Add node after\n");
        printf("5. Remove node after\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to add: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 2:
                printf("Enter data to remove: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Enter data to add: ");
                scanf("%d", &data);
                printf("Enter key value: ");
                scanf("%d", &key);
                addAfter(head, data, key);
                break;
            case 5:
                printf("Enter key value: ");
                scanf("%d", &key);
                removeAfter(head, key);
                break;
            case 6:
                freeList(&head);
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
