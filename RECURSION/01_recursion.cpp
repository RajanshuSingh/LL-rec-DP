#include<iostream>
using namespace std;
 int cnt;

void f()
{
if(cnt==0 ){
    return;
}
cout<<cnt<< endl;
cnt--;

f();

}


int main(){

cin >> cnt;
f();
}


