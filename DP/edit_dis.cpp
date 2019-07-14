#include<iostream>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        //int n=a.size(),m=b.size();
        int dp[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(a[i-1]==b[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                    
            }
        }
        cout << dp[n][m]<<endl;
        
    }
    
    return 0;
}
