bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head->next;
    while(fast != NULL && fast != slow){
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    
    if(fast == slow) return true;
    return false;
}
