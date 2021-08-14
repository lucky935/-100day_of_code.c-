#include<iostream>
using namespace std;
void checkevenornot(int num)
{
    if(num%2==0){
        goto even;
    }
    else{
        goto odd;

    }

even:
    cout<<num<<"is even";
    return;


odd:
    cout<<num<<"is odd";




}



int main(){
    int num = 34;
    checkevenornot(num);
    
    
    return 0;
}
