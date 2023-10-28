#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

struct node {
    int data;           // Bu elemanýn içinde saklanan veriyi temsil eder (int türünde).
    struct node *next;  // Bir sonraki elemana iþaret eden bir iþaretçidir (struct node türünde).
};

// Inserting a node in front of the list 

struct node *addfront(struct node *head,int x){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
	return head;
}

// Inserting a node at the end of the list 

struct node *addlast(struct node *head, int x){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else{
		struct node *last=head;
		while(last->next!=NULL)
				last=last->next;
		last->next=temp;
		}
	return head;
}

// Printing the elements of a list 

void prinlist(struct node *head){
	if(head==NULL)
		printf("List is empty.");
	else{
		while(head!=NULL){
			printf("%3d",head->data);
			head=head->next;
		}
	}	
}	

int main(){
	
	int value;
	struct node *head=NULL;
	
	printf("Enter numbers (-1 to quit):\n");
    
    while (1) {
        scanf("%d", &value);
        
        if (value == -1) {
        	prinlist(head);
            break;
        }
        
        if (value% 2 == 0) {
            head=addlast(head, value);
        } else {
            head=addfront(head, value);
        }
    }
	
	
	return 0;
	
}

