/* reverse an array 
*/
// #include <iostream>
// using namespace std;


// void f(int i, int a[],int n){
//     if(i>=n/2){
//         return;
//     }

//     swap(a[i],a[n-i-1]);
//     f(i+1,a,n);

// }


// int main(){  
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//         f(0,a,n);

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
        
//     } 
//     }
    




// cout<<"enter elements of array"<<endl;





/* check if a string is palindrome*/

#include <iostream>
using namespace std;

bool f(int i,string &s){
if( i>= s.size()/2) return  true;
if(s[i]!=s[s.size()-i-1]) return false;
return f(i+1,s);

}

int main()
{
string s="mam";
cout<<f(0,s);
return 0;

}