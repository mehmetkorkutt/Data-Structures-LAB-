struct Node* IsimArama(struct Node* head, char *name) {
    
	while (head!= NULL) {
        if ( strcmp(head->studentName,name) ==0) {
            
			return head;
        }
        head =head->next;
    }
    return NULL ;
}

