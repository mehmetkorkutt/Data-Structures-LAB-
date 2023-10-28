Node *enuzunisim(Node* head) {
    
	Node *current = head;
    Node *enuzunisim = NULL;
    int maxNameLength = 0;

    while (current != NULL) {
        
		int currentNameLength = strlen(current->studentData.name);
        if (currentNameLength > maxNameLength) {
            
			maxNameLength = currentNameLength;
            longestNameNode = current;
        }
        current = current->next;
    }

    return longestNameNode;
}
