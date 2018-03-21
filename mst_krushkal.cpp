#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1e9+7
#define maxlong 1e18+5


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

ll id[12345];

ll findid(ll a)
{
	return (a==id[a])?a:id[a]=findid(id[a]);
}

void unionn(ll a,ll b)
{
	id[findid(a)]=findid(b);
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("mst_krushkal_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	s(m);
	priority_queue <ppll , vppll, greater<ppll>> pq;
	ll a,b,w;
	re(i,m){
		cin>>a>>b>>w;
		pq.push({w,{a,b}});
	}

	re(i,n)
		id[i+1]=i+1;

	ll cost=0;

	while(!pq.empty())
	{
		ppll cur=pq.top();
		pq.pop();
		if(findid(cur.ss.ff) == findid(cur.ss.ss))
			continue;
		cost+=cur.ff;
		// edge  cur.ss.ff - cur.ss.ss selected
	 	unionn(cur.ss.ff,cur.ss.ss);
	}	

	cout<<cost;


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}