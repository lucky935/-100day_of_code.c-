#include<iostream>
using namespace std;
void searchelement(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"element found at position:"<<i+1;
			break;

		}
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = 4;
	int key = 4;
	searchelement(arr,n,key);
	
	return 0;
}
