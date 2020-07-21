#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age\n";
	cin>>age;
	if (age<18)
	{
	  cout<<"You are not eligible for voting\n";
	  cout<<"Don't worry!!! Come back after "<<18-age<<" year(s) to be eligible for voting";
    }   
    else
    {
    	cout<<"You are eligible for voting \n";
	}
	return 0;	
}
