#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
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
#define E1 10
#define E2 100
#define E3 1000
#define E4 10000
#define E5 100000
#define E6 1000000
#define E7 10000000
#define E8 100000000
#define E9 1000000000
#define E10 10000000000
#define E11 100000000000
#define E12 1000000000000
#define E13 10000000000000
#define E14 100000000000000
#define E15 1000000000000000
#define E16 10000000000000000
#define E17 100000000000000000
#define E18 1000000000000000000


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("test.txt","w",stdout);

	#endif

//--------------------------------------------------------------------------------------


	// ll no_of_testcases = rand()%E2;
	ll no_of_testcases = 100;
	cout<<no_of_testcases<<" 100\n";

	// re(i,no_of_testcases)
		re(j,no_of_testcases)
				re(k,no_of_testcases)
						cout<<2*j+1<<" "<<2*(k+1)<<endl;
			// cout<<100<<" ";
			// cout<<endl;
		
		// ll m=(rand()%100)+1;
		// ll n=(rand()%10000)+1;
		// cout<<rand()%E6<<"\n";
		// <<rand()%E18<<"\n";
		// cout<<m<<" "<<n<<endl;
		// cout<<m<<endl;
		// re(i,m){	
			// ll mm=(rand()%10)+1;
			// cout<<mm<<endl;
			// re(j,mm)

		// cout<<m<<" "<<n<<endl;
				// cout<<(rand()%10)+1<<" "<<(rand()%10)+1<<endl;
			// 	<<(rand()%m)+1<<" "<<(rand()%100)+1<<endl;
			// // cout<<endl;
		// }
		// 
		// cout<<"\n";
	// }



//--------------------------------------------------------------------------------------
	
	return 0;
}