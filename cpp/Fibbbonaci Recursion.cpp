#include<iostream>
using namespace std;

int Fib(int n){
	if(n<2){
		return 1;
	}
	
	return Fib(n-2)+Fib(n-1);
}

int main()
{
	int x;
	cout<<"enter the index "<<endl;
	cin>>x;
	
	cout<<"the element at index "<<x<<" in the fibbanci sequence "<<Fib(x);
}
