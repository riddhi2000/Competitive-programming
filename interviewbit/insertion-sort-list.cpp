#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
ListNode* insertionSortList(ListNode* A) {
    
    if(A==NULL || A->next==NULL)
        return A;
        
    ListNode *dummy=new ListNode(0);
    dummy->next=A;
  
    ListNode *cur=dummy->next->next;
    ListNode *lastSorted=dummy->next;
    lastSorted->next=NULL;
    
    while(cur != NULL){
        
        if(cur->val < lastSorted->val){
            ListNode *temp=dummy->next,*p=dummy;
            
            while(temp && temp->val < cur->val){
                p=temp;
                temp=temp->next;
            }
        
            ListNode *t=cur->next;
            cur->next=p->next;
            p->next=cur;
            cur=t;
            
        }
        else{
            lastSorted->next=cur;
            cur=cur->next;
            lastSorted=lastSorted->next;
            lastSorted->next=NULL;
        }
    }
    
    return dummy->next;
  
}

void print(ListNode *t){
    int i=0;
    while(t && i<50){
        cout << t->val << " ";
        t=t->next;
        i++;
    }
    cout << endl;
}

int main(){

    ListNode *A=new ListNode(1);
    A->next=new ListNode(0);
    A->next->next=new ListNode(1);


    ListNode *c=insertionSortList(A);
    
    print(c);

    return 0;
}
