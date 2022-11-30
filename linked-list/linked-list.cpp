#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}

};
int main(){
    ListNode *n = new ListNode(100);
    ListNode *n1 = new ListNode(50);
    ListNode *n2 = new ListNode(10);
    n->next = n1;
    n1->next = n2;
    
    // add node in front 
    ListNode *nn = new ListNode(12);
    nn->next = n;
    n = nn;
    ListNode *temp = n;
    while (temp != NULL)
    {   
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
     
    return 0;
}