// Parameterised Recursion


// #include<iostream>
// using namespace std;

// int i,sum,z;

// void f(int i,int sum,int z){
//     if(i<z){
//         cout<<sum;
//         return;
//     }
//     f(i-1,sum+i,z);


// }

// int main(){
    
// cin >> i;
// cin>>sum;
// cin>>z;


// f(i,sum,z);

// }


/* Functional Recusrion*/

//FACTORIAL PROGRAM

#include <iostream>
using namespace std;

int n;
int f(int n){
    if(n==0) return 1;

    return n*f(n-1) ;

    
}

int main(){
    cin>>n;

 cout<< f(n);
      

}

