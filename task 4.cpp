#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Type the number of elements you want to enter ";
	cin>>n;
	int a[n];
	cout<<"\nEnter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nYou entered : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
