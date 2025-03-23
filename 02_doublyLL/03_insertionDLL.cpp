#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;


class Node {
public:
    int data;       
    Node* next;     
    Node* back;     

    
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1; 
        back = back1; 
    }

    
    Node(int data1) {
        data = data1;
        next = nullptr; 
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
Node* head= new Node(arr[0]);
Node* prev=head;

for(int i=1;i<=arr.size()-1;i++)
{
Node* temp= new Node(arr[i],nullptr, prev);
prev->next= temp;
prev=prev->next;
}

return head;
}

void print(Node* head){
while(head !=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}
//insertion before Head position
Node* insertionB4Head(Node*head, int val ){
Node* newHead= new Node(val,head,nullptr);
head->back=newHead;
newHead->next=head;
newHead->back=nullptr;

return newHead;
}

//insertion before  tail of the linked list
Node* insertionB4Tail(Node*head, int val ){


Node* temp=head;

while(temp->next!=NULL){
    temp=temp->next;
}


Node* prev=temp->back;
Node* List= new Node(val,temp,prev);
temp->back=List;
prev->next=List;





return head;
}
int main(){

     vector<int> arr = {12,4,5,67,8};
     int val;
     Node* head= convertArr2DLL(arr);

    //  head= insertionB4Head(head, 10);
     head= insertionB4Tail(head, 10);
     print(head);
     
    return 0;

}
