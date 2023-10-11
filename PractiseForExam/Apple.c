
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // If list is empty, point to itself
    } else {
        newNode->next = (*head)->next;
        (*head)->next = newNode;
    }
    *head = newNode; // Update the head to the new node
}

void display(struct Node* head) {
    struct Node* current = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Circular Linked List: ");
    display(head);

    return 0;
}
