#include <stdio.h>
#include <stdlib.h>

struct Student {
    int studentNumber;
    char name[50];
    int age;
};

struct Node {
    struct Student studentData;
    struct Node* next;
};

typedef struct Node Node;

void addStudent(Node** head, int studentNumber, const char* name, int age) {
    
	Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->studentData.studentNumber = studentNumber;
    strcpy(newNode->studentData.name, name);
    newNode->studentData.age = age;
    newNode->next = *head;
    *head=newNode;
}

void printStudents(Node* head) {
    int count = 0;
    Node* current = head;
    
    while (current != NULL) {
        count++;
        printf("%d- %s %d %d\n ", current->studentData.studentNumber, current->studentData.name, current->studentData.age, count);
        current = current->next ;
    }
    
    if (count == 0) {
    	
        printf("List is empty\n");
    }
}



int main() {
    
	Node *studentList = NULL;

    
    addStudent(&studentList, 1, "Saliha", 27);

    
    printf("Student Information:\n");
    printStudents(studentList);

    

    return 0;
}

