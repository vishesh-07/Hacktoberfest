#include<bits/stdc++.h>
using namespace std;

int main()
{
   int base,pow,i,power=1;
   cout<<"Enter base of a number :: ";
   cin>>base;
   cout<<"\nEnter power to a base [ "<<base<<" ] :: ";
   cin>>pow;

   for(i=pow;i>0;i--)
   {
        power=power*base;
   }
   cout<<"\nPower of a Number [ "<<base<<" ^ "<<pow<<" ] :: "<<power<<"\n";

  return 0;
  }
