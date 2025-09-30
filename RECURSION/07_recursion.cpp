//sum of subsequences print.

// #include <iostream>
// #include<stdio.h>
// #include<vector>
// using namespace std;


// void f(int ind,vector <int> &ds, int arr[],int n,int s,int sum){
//     if(ind==n){
       
//          if(s==sum){
//              for(auto it: ds) cout<<it<<" ";
//             //  cout<<endl;
    
// }
//            cout<<endl; 
//             return;
   
//     }

//     //take the particular index into the subsequence
//     ds.push_back(arr[ind]);
//     s+=arr[ind];
//    f(ind+1,ds,arr,n,s,sum);


//     ds.pop_back();
//     s-=arr[ind];

//     //not pick or not take condition

//      f(ind+1,ds,arr,n,s,sum);


// }



// int main(){

//     int arr[3]= {1,2,1};
//     int n=3;
//     int sum=3;
//     int s;
//     vector<int>ds;
//    f(0,ds ,arr,n,0,sum);

// }



/* Print only 1 subsequence which satisfies the subsequences*/

// #include <iostream>
// #include<stdio.h>
// #include<vector>
// using namespace std;


// bool f(int ind,vector <int> &ds, int arr[],int n,int s,int sum){
//     if(ind==n){
       
//          if(s==sum){
//              for(auto it: ds) cout<<it<<" ";
//     return true;
// }
//            cout<<endl; 
//             return false;
   
//     }

//     //take the particular index into the subsequence
//     ds.push_back(arr[ind]);
//     s+=arr[ind];
//   if (f(ind+1,ds,arr,n,s,sum)== true) return true;


//     ds.pop_back();
//     s-=arr[ind];

//     //not pick or not take condition

//     if (f(ind+1,ds,arr,n,s,sum)==true) return true;

//     return false;


// }



// int main(){

//     int arr[3]= {1,2,1};
//     int n=3;
//     int sum=3;
//     int s;
//     vector<int>ds;
//    f(0,ds ,arr,n,0,sum);

// }


/* count the no. of subsequences whcih satisfies the subsequences */

#include <iostream>
using namespace std;

int f(int ind, int arr[], int n, int s, int sum){
    if(ind==n){
        //condition satisfiedn
        if(s==sum)  return 1;
    //condition not satisfied
       else return 0;
        
    }
//pick
    s+=arr[ind];
int l= f(ind+1,arr,n,s,sum);

s-=arr[ind];

//not pick
int r=f(ind+1,arr,n,s,sum);


 return l+r;
}

int main(){
     int arr[3]={1,2,1};
     int n=3;
     int sum=2;
     int s;
     int ind;
    //  vector <int> ds;
    cout<< f(0,arr,n,0,sum);
return 0;
}