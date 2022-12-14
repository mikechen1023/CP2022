/* Pseudo code */

void LockFreeQueue::push(Node *newHead){
    for(;;){

        // Load shared variable to local
        Node *oldHead = m_Head;

        // Do speculative operation
        newHead->next = oldHead;

        // _CAS (shared, exchange, compare)
        if (_CAS(&m_Head, newHead, oldHead) == oldHead)
            return;
    }
}