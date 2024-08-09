#include<iostream>
using namespace std;

string prime(int n){
	int i=2,flag=1;
	if(n==2){
		return "true";
	}
	while(i<n){
		if(n%i==0){
			flag=2;
			break;
		}
		i++;
	}
	if(flag==2){
		return "false";
    } 
	else{
        return "true";
    }
}
int main() {
	// Write your code here
	int n;
	cin>>n;
	cout<<prime(n);
	return 0;	
}
