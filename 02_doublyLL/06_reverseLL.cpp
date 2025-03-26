#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;


class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Node* reverse(Node* head) {  if(head==NULL || head->next==NULL){
            return head;
        }

        Node* newHead=reverse(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;

        return newHead;
        
    }

