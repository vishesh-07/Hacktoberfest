#include<stdio.h>

long sum(long a)
{
    long sum1=0,i;
    for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum1=sum1+i;
            }
        }
        return sum1;
}

int main()
{
    long i,j,x,n,m;
    printf("Enter the range\n");
    scanf("%ld%ld",&n,&m);
    for(i=n;i<=m;i++)
    {
        x=sum(i);
        for(j=n;j<i;j++)
        {
            if(x==j && sum(j)==i && i!=j)
                printf("%ld and %ld are amicable numbers\n",i,j);
        }
    }
}
