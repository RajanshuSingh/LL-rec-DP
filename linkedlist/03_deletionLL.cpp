#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;

using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    public:

    Node(int data1, Node *next1){
        data=data1;
        next= next1;

    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){

    Node *head= new Node(arr[0]);
    Node *mover=head;
    for(int i=1;i<arr.size(); i++){
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
return head;
}

int lengthOfLL(Node *head){

    int cnt=0;
    Node *temp=head;

   while(temp)
   {
   temp=temp->next;
   cnt++;
   }

return cnt;
}
int checkIfExist(Node* head, int val){
    Node *temp=head;

   while(temp)
   {
    if(temp->data==val) return 1;
   temp=temp->next;

   }
return 0;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;
}

//deletion of head logic



Node* removeHead(Node *head){
    if(head==NULL)return head;

    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

//deletion of tail

Node* deleteTail(Node* head){
    Node* temp=head;
    if(head==NULL || head->next==NULL) return NULL;
    while(temp->next->next !=NULL ) //so that it stops at 2nd last elements

    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;

}

//deletion of elements in the kth position

Node* deletek(Node* head, int k)
{
    if(head==NULL) return head;

    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0;
    Node* prev=NULL;
     Node* temp= head;

     while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next= prev->next->next;
            delete temp;
            break;

        }
prev=temp;
temp=temp->next;
     }
     return head;
}

//remove element using its value

Node* removeE(Node* head, int el)
{
    if(head==NULL) return head;

    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0;
    Node* prev=NULL;
     Node* temp= head;

     while(temp!=NULL){
    
        if(temp->data==el){
            prev->next= prev->next->next;
            delete temp;
            break;

        }
prev=temp;
temp=temp->next;
     }
     return head;
}


int main(){
  
   vector<int> arr={2,51,8,7};
   Node *head =convertArr2LL(arr);
//    Node *temp=head;

//    while(temp)

//    {cout<<temp->data<<" "; //code for traversal of the linked list 
//    temp=temp->next;
//    }

//    cout<<"Length of linked list is: " << lengthOfLL(head);

// cout<<checkIfExist(head,51);

// head = removeHead(head);
// head= deleteTail(head);
//  head= deletek(head, 5);

head=removeE(head,51);
print(head);


}