SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    n ->next = temp;

return n;
}
