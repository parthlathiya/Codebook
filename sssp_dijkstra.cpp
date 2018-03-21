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

int visited[12345];
vpll g[12345];
ll dist[12345];

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("sssp_dijkstra_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	s(m);
	ll a,b,w;

	re(i,n)
		g[i+1].clear();

	re(i,m){
		cin>>a>>b>>w;
		g[a].pb({b,w});
	}


	re(i,n){
		dist[i+1]=1000000000;
		visited[i+1]=0;
	}

	priority_queue <pll , vpll, greater<pll>> pq;

	pq.push({0,1});

	while(!pq.empty()){

		pll cur=pq.top();
		pq.pop();

		if(visited[cur.ss])
			continue;
		
		visited[cur.ss]=1;
		dist[cur.ss]=cur.ff;

		for(auto a:g[cur.ss])
			if(!visited[a.ff] && a.ss+cur.ff<dist[a.ff]){
				dist[a.ff]=a.ss+cur.ff;
				pq.push({dist[a.ff],a.ff});
			}

	}

	re(i,n-1)
		cout<<dist[i+2]<<" ";

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}