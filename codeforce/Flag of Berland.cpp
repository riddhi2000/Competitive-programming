node* addSameSize(Node* head1, Node* head2, int* carry){
    if (head1 == NULL)
        return NULL;
    int sum;
    Node* result = (Node *)malloc(sizeof(Node));
    result->next = addSameSize(head1->next, head2->next, carry);

    sum = head1->data + head2->data + *carry;
    *carry = sum / 10;
    sum = sum % 10;

    result->data = sum;
    return result;
}

void addCarryToRemaining(Node* head1, Node* cur, int* carry, Node** result){
    int sum;
    if (head1 != cur){
        addCarryToRemaining(head1->next, cur, carry, result);
 
        sum = head1->data + *carry;
        *carry = sum/10;
        sum %= 10;
        
        push(result, sum);
    }
}

void addList(Node* head1, Node* head2, Node** result){
    Node *cur;
    if (head1 == NULL){
        *result = head2;
        return;
    }
    else if (head2 == NULL){
        *result = head1;
        return;
    }
 
    int size1 = getSize(head1);
    int size2 = getSize(head2) ;
 
    int carry = 0;

    if (size1 == size2)
        *result = addSameSize(head1, head2, &carry);
    else{
        int diff = abs(size1 - size2);
        if (size1 < size2)
            swapPointer(&head1, &head2);
 
        for (cur = head1; diff--; cur = cur->next);
        *result = addSameSize(cur, head2, &carry);
        addCarryToRemaining(head1, cur, &carry, result);
    }
    if (carry)
        push(result, carry);
}