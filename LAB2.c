#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node *createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertSorted(Node** head, int value) {
    Node* newNode = createNode(value);
    
    if (*head == NULL || value > (*head)->data) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL && value <= current->next->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void printList(Node* head) {
    
	Node* current = head;
    while (current != NULL) {
        
		printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
   
    Node* head = NULL;
    int sayisayisi
	int value;
    
    printf("Kac sayi girilecek:\n");
    scanf("%d", &sayisayisi);
    
    printf("Sayilari girin:\n");

    for (int i = 0; i <  sayisayisi; i++) {
        scanf("%d", &value);
        insertSorted(&head, value);
    }

    printf("Sayilar buyukten kucuge: ");
    printList(head);

    
    return 0;
}
