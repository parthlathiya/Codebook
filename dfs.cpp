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


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

vll g[123456];
int doneat[123456];


struct Node
{
	int val;
	struct Node *next;
};


Node *head[123456];

void dfs(int i)
{
	doneat[i]=1;
	
	Node *temp=head[i];
	while(temp!=NULL)
	{
		if(!doneat[temp->val])
			dfs(temp->val);
		temp=temp->next;
	}
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("dfs_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	s(m);
	ll a,b;

	for(int i=0;i<=n;i++)
		head[i]=NULL;
	
	re(i,m){
		cin>>a>>b;
		
		Node *newnode=new Node;
		newnode->val=b;
		newnode->next=head[a];
		head[a]=newnode;
		Node *newnode1=new Node;
		newnode1->val=a;
		newnode1->next=head[b];
		head[b]=newnode1;
		
	}

	// re(i,n+1)
	// {
	// 	Node *temp=head[i+1];
	// 	while(temp!=NULL)
	// 	{
	// 		cout<<temp->val<<" ";
	// 		temp=temp->next;
	// 	}
	// 	cout<<endl;
	// }
	
	s(x);
	dfs(x);

	ll ans=0;
	re(i,n)
		if(!doneat[i+1])ans++;

	cout<<ans;

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}