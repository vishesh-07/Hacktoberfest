#include<iostream>
#include<string>
using namespace std;

void Reverse(string str, int s)
{
	if(s == 0)
	{
		cout<<str[s];
		return;
	}
	Reverse(str, s-1);
	cout<<str[s];
	
}


int main()
{	
	string str = "Ashu";
	int s = str.length();
	
//	for(int i=str.length()-1;i>=0;i--)
//	{
//		cout<<str[i];
//	}
	
	Reverse(str, s);
	
	
	
	
}
