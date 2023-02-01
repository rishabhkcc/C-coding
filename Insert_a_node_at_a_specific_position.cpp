SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    int count = 1;
    SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    while(count < position){
        temp = temp ->next;
        count++;
    }
    n -> next = temp ->next;
    temp -> next = n;
return llist;
}
