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
    Node* removeNthFromEnd(Node* head, int n) {
        
        Node* fast= head;
        Node* slow= head;

        for(int i=0;i<n;i++){

            fast=fast->next;
        }
        if(fast==NULL){
             return head->next;
        delete(head);
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

       Node* delNode= slow->next;
        slow->next=slow->next->next;
        delete(delNode);

        return head;


    }
};