#include <iostream>
using namespace std;

int coinexchange(int coin[],int maxx,int n)
{
    int dp[n+1][maxx+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=maxx;j++)
        {
            if(j==0)
            dp[i][j]=1;
            else if(i==0)
            {
                dp[i][j]=0;
            }

            else if(j<coin[i-1])
            {
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-coin[i-1]];
            }

        }
    }

cout<<"---------matrix:-------"<<endl;
  for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=maxx;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"-----------------------"<<endl;
    return dp[n][maxx];
}
int main()
{
    int coin[]={1,2,5,8};
    int maxx=8;

    int ans=coinexchange(coin,maxx,3);
    cout<<"total ways to of making change is:"<<ans;
}