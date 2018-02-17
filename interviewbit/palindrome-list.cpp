#include <iostream>
#include <stdlib.h>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

int lPalin(ListNode* A) {
    ListNode *slow = A;
    ListNode *fast = A;
    
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    //cout << "Mid-Point: " << slow->val << endl;

    ListNode *prev=NULL,*cur=slow,*next=NULL;
    
    while( cur != NULL ){
        
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        
    }

    cout << "A List: " << endl;
    ListNode* temp= A;

    while(temp != NULL){
    	cout << temp->val << "	";
    	temp = temp->next;
    }
    cout << endl;

    cout << "last List: " << endl;
    temp= prev;

    while(temp != NULL){
    	cout << temp->val << "	";
    	temp = temp->next;
    }
    cout << endl;

    cout << "compare: " << endl;
    
    while(prev != NULL){
    	cout << prev->val << "	" << A->val  << endl;
        if(A->val != prev->val)
            return 0;
        A = A->next;
        prev = prev->next;
    }
    
    return 1;
    
}

void append(struct ListNode** head_ref, int new_data)
{
    /* 1. allocate node */
    struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode));
 
    struct ListNode *last = *head_ref;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->val  = new_data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}


int main(){

	struct ListNode* head = NULL;
 
  	// Insert 6.  So linked list becomes 6->NULL
  	append(&head, 1);
  	append(&head, 2);
  	append(&head, 3);
  	append(&head, 4);
  	append(&head, 5);

  	cout << lPalin(head) << endl;

	return 0;
}