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

Node* deleteHead(Node* head){     //deletion of node at head
    if ( head==NULL || head->next== NULL) {
        return NULL ;
    }

    Node* prev=head;
    head=head->next;
    head->back= nullptr;
    prev->next=nullptr;
    delete prev; 

    return head;
}

//deletion of node at tail position;

Node* deleteTail(Node* head){

if ( head==NULL || head->next== NULL) return NULL;

    Node* tail=head;

    while(tail->next !=NULL){
        tail=tail->next;

    }
    Node* prev= tail->back;

    tail->back=nullptr;
    prev->next=nullptr;
    delete tail;

    return head;

}

Node* deleteK(Node* head,int k
){
    if(head==NULL){
        return NULL;
    }
    Node* temp= head;
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;

        temp=temp->next;
    }
    Node* prev= temp->back;
    Node* front= temp->next;

if(prev==NULL && front==NULL){
    delete temp;
    return NULL;
}
else if(prev==NULL){
  return  deleteHead(head);
    

}

else if(front==NULL){
  return  deleteTail(head);
  

}

else{
    prev->next=front;
    front->back=prev;

    temp->next= nullptr;
    temp->back= nullptr;
}
return head;
}
//when element to be deleted is given 

Node* deleteElement(Node *head, int el){

}

void deleteNode(Node* temp){
    Node* prev= temp->back;
    Node* front= temp->next;

    if(front==NULL){
        prev->next= nullptr;
        temp->back= nullptr;
        delete temp;
        return;

    }

    prev->next=front;
    front->back=prev;

temp->next= temp->back=nullptr;

  delete temp;




}
int main(){

     vector<int> arr = {2,21,4,5};
     Node* head= convertArr2DLL(arr);
     

    //   head= deleteHead(head);
    // head= deleteTail(head);

    // head= deleteK(head,1);

deleteNode(head->next->next);
    print(head);
     
    // return 0;
}


