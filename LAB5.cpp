void deleteNextNode(Node* prevNode) {
    
	if (prevNode == NULL || prevNode->next ==NULL) {
        
		return; 
    }

    Node *temp = prevNode->next;
    prevNode->next=prevNode->next->next ;
    free(temp); 
}
