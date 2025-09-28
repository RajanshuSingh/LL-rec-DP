
#include <iostream>


using namespace std;

class Node {
public:
  
    int data;   
    
    Node* next;      

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};



int lengthOfLoop(Node* head) {
 
    unordered_map<Node*, int> visitedNodes; 
    
   
    Node* temp = head; 
    
   
    int timer = 0; 

    while (temp != NULL) {
        
        
        if (visitedNodes.find(temp) != visitedNodes.end()) {
           
            int loopLength = timer - visitedNodes[temp];
            
           
            return loopLength; 
        }
       
        visitedNodes[temp] = timer;
        
       
        temp = temp->next;
        
         
        timer++;
    }

  
    return 0;
}



int main() {
  
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
  
    fifth->next = second; 

    int loopLength = lengthOfLoop(head);
    if (loopLength > 0) {
        cout << "Length of the loop: " << loopLength << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}


