
#include <iostream>
using namespace std;
int Factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*Factorial(n-1);  
}

int main()
{
    int x;
    cout<<"Enter the number whose factorial needs to be calculated"<<endl;
    cin>>x;
    
    cout<<"the factorial of "<<x<<" is "<<Factorial(x);
}
