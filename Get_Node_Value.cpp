int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* temp = llist;
    int value, count = 1, length = 1;
    while(temp->next != NULL){
        temp = temp ->next;
        length++;
    }
    SinglyLinkedListNode* temp1 = llist;
    
    while(count < (length - positionFromTail)){
        temp1 = temp1 ->next;
        count++;
    }
    value = temp1 ->data;
    
return value;
}
