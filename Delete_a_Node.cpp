SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* n;
    int count = 1;
    if(position == 0){
        SinglyLinkedListNode* t = llist;
        llist = llist ->next;
        delete t;
        return llist;
        
    }

        while(count < position){
            temp = temp -> next;
            count++;
        }
    n = temp ->next;
    temp ->next = n ->next;
    delete n;
return llist;
}
