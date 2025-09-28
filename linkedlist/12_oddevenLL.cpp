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
    Node* oddEvenList(Node* head) {

        if (!head || !head->next) return head;

    Node* odd= head;
    Node* even=head->next;
    Node* evenHead=head->next;

    while(even !=NULL && even->next != NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;


    }

    odd->next=evenHead;

    return head;

        
        
    }
};
