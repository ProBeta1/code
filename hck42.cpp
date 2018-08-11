#include<bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i,n) for(i=0;i<n;i++)
typedef long long ll;
#define mod 1000000007
#define __builtin_popcountll bitc
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	boost
	int x,y,s,t,i,j,c=0;
	cin>>x>>y>>s>>t;
	for(i=x;i<=x+s;i++)
	{
		for(j=y;j<=y+s;j++)
		{
			if(i+j<=t)
				c++;
		}
	}
	cout<<c;
}