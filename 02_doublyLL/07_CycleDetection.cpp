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



bool detectCycle(Node *head)
{
	//	Write your code here

    Node* temp=head;
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){

        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            return true;
        }



    }

    return false;
}