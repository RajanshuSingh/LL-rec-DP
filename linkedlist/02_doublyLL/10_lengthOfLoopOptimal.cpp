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


int findLength(Node* slow, Node* fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}


int lengthOfLoop(Node *head) {
    // Write your code here



    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!= NULL ){

        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
           
            return findLength(slow,fast);
            }

    }

    return 0;
}