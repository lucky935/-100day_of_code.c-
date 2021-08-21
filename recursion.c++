#include<bits/stdc++.h>
using namespace std;

void getcounting(int n){
    //Base condition
    if(n<=0)
    return;
    getcounting(n-1);

    cout<<n<<endl;
    
}



int main(){
    int n;
    cout<<"enter the number:";

    cin>>n;
    cout<<"counting:"<<endl;
    getcounting(n);


    
    return 0;
}
