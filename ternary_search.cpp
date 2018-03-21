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

ll fun(ll x)
{
	return 2*x*x-12*x+7;
}

int alreadyinmst[12345];
vpll g[12345];

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("ternary_search_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	re(i,n)
	{
		s(l);
		s(r);
		ll m1,m2;
		
		// re(i,40){
		while(1){
			if(r-l<0.00001)
				break;	
			m1=(2*l+r)/3;
			m2=(l+2*r)/3;
			if(fun(m1)>fun(m2))
				l=m1;
			else
				r=m2;		
		}

		if(fun(l)<fun(l+1))
			cout<<fun(l)<<"\n";
		else
			cout<<fun(l+1)<<"\n";
	}

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}