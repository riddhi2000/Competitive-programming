#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
 
 ListNode* add(ListNode* A,ListNode *B,int c){
    ListNode *x;
    x=new ListNode(0);
    ListNode *cur=x;
    int sum;
    
    while(A!=NULL || B!=NULL || c!=0){

        if(A==NULL && B==NULL){
        	cout << "null" << endl;
            sum = c%10;
            c/=10;
        }
        else if(A == NULL){
        	cout << "a is null" << endl;
           sum = (B->val+c);
           c=sum/10;
           sum%=10;
           B=B->next;
        }
        else if(B == NULL){
        	cout << "b is null" << endl;
           sum = (A->val+c);
           c=sum/10;
           sum%=10;
           A=A->next;
        }
        else{
        	cout << "no null" << endl;
           sum = (A->val+B->val+c);
           c=sum/10;
           sum%=10;
           B=B->next;
           A=A->next;
        }
        cur->next=new ListNode(sum);
        cout << sum << endl;
        cur=cur->next;
    }
    
   
   return x->next;
 }
 
ListNode* addTwoNumbers(ListNode* A, ListNode* B) {   
    return add(A,B,0);
}

void print(ListNode *t){
	while(t){
		cout << t->val << " ";
		t=t->next;
	}
	cout << endl;
}

int main(){

	ListNode *A=new ListNode(1);
	A->next=new ListNode(0);
	A->next->next=new ListNode(1);

	ListNode *B=new ListNode(0);

	ListNode *c=addTwoNumbers(B,A);
	
	print(c);

	return 0;
}