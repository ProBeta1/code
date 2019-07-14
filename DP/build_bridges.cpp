			
	#include<bits/stdc++.h>
	using namespace std;
	/*  satyameva jayate */
	typedef long long ll;
	#define MOD 1000000007
	#define ff first
	#define ss second
	#define pb push_back
	#define pf push_front
	#define eb emplace_back
	#define emp emplace
	#define ins insert
	#define mp make_pair
	#define mt make_tuple
	#define siz(s) (int)s.size()
	#define forp(i,a,b) for( int i=a;i<=b;i++)
	#define rep(i,n)    for( int i=0;i<n;i++)
	#define ren(i,n)    for( int i=n-1;i>=0;i--)
	#define forn(i,a,b) for( int i=a;i>=b;i--)
	#define w(t) while(t)
	#define on cout<<"\n"
	#define os cout <<" "
	#define o2(a,b) cout<<a<<" "<<b
	#define o(a) cout << a
	#define ppr(a) cout << a.first << " " << a.second
	#define bitcount __builtin_popcount
	#define gcd __gcd
	#define all(v) v.begin(),v.end()
	#define mem(n,m) memset(n,m,sizeof(n))
	#define pii pair<int,int>
	#define tiii tuple<int, int, int>
	#define pll pair<long long,long long>
	#define sii set<int>
	#define sll set<long long>
	#define vii vector<int>
	#define vll vector<long long>
	#define mii map<int,int>
	#define mll map<long long, long long>
	#define lob lower_bound
	#define upb upper_bound
	#define ret return
	#define present(s,x) (s.find(x) != s.end())
	#define cpresent(s,x) (find(all(s),x) != s.end())
	#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
	#define fors(container, it, a, b) for(auto it = a; it != b; it++)
	#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#define MODU 998244353
	#define EPSILON 1e-9
	#define PI acos(-1)
	#define inf 1e18
	#define sz 100005
	#define SZ 1000005
	#define SIZE 200005
	
	bool comp(pair<int,int>p,pair<int,int>q)
	{
		if(p.second == q.second)
			return p.first < q.second;
		return p.second<q.second;
	}

	int main()
	{
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		#endif
		boost
		int t=1;
		//cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int nor[n+1],sot[n+1],i,j;
			for(i=0;i<n;i++)
					cin>>nor[i];
			for(i=0;i<n;i++)
				cin>>sot[i];
			std::vector<pair<int,int>> v;
			for(i=0;i<n;i++)
			{
				v.push_back(make_pair(nor[i],sot[i]));
			}
			sort(v.begin(),v.end(),comp);
			for(i=0;i<n;i++)
			{
				cout<<v[i].first<<" "<<v[i].second<<endl;
			}
			int ans=0,lis[n+1]={1};
			i=0;
			for(i=1;i<n;i++)
			{
				lis[i] =1;
				for(j=0;j<i;j++)
				{
					if(v[j].first < v[i].first && lis[i]<lis[j]+1)
						lis[i] = lis[j]+1;
				}
				ans=max(ans,lis[i]);
			}
			cout<<ans;
		}
		
		return 0;
	}
