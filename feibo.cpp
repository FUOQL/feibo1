#include<iostream>
using namespace std;
int fb(int n){
 if(n==1||n==2)return 1;
 return fb(n-2)+fb(n-1);
} 
int main(){
	int n;
	cout<<"yigeshu:";
	cin>>n;
	for(int i=1;i<=n;i++) 
	{ 
	cout<<fb(i)<<" ";
	} 
	return 0;
}
