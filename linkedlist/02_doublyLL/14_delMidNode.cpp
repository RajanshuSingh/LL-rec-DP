#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;
        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
class Solution {
public:
    Node* deleteMiddle(Node* head) {

        if(head==NULL || head->next==NULL) {return NULL;}



Node* slow=head;
Node* fast= head;

fast=head->next->next;
while(fast!=NULL && fast->next!= NULL){

slow=slow->next;
fast=fast->next->next;

}

Node *MidNode=slow->next;
slow->next=MidNode->next;


delete(MidNode);
return head;
        
    }
};