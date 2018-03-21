

// ------------------------ primes and prime factorization ---

vll primes;
vll primefac[10000001];

void sieve(ll n)
{
	rep(i,2,n+1)
	{
		if(primefac[i].empty())
		{	
			primes.pb(i);
			for(ll j=i;j<=n;j+=i)
				primefac[j].pb(i);
		}
	}
}


// ----------------------- disjoint set union (dsu) & union-find ---

ll p[100001];
ll size[100001];

// intially p[x]=x and size[x]=1;
re(i,n){
	p[i]=i;
	size[i]=1;
}


ll find(ll a)
{
	if(p[a]==a)
		return a;
	return p[a]=find(p[a]);
}

void Union(ll a,ll b)
{
	a=find(a);
	b=find(b);
	if(a!=b){
		if(size[a]>size[b])
			swap(a,b);
		p[a]=b;
		size[b]+=size[a];
	}
}


// -------------------------------- lower bound binary search ---

//uper bound on (x) is same as lower bound on (x+1)
//lower bound on (x) is same as upper bound on (x-1)


ll fun(ll x)
{
	return x;
}

ll l,r,mid,temp;

//start of range
l=0;
//ll a[n] so (end of range) + 1 = n
r=n;

while(l<r)
{
    mid=(l+r)>>1;
	//calc value which you want to compare with key and store in temp;
    temp=fun(mid);

    if(key<=temp)
        r=mid;
    else
        l=mid+1;
}

// return l;
// both l and r value will be same
return r;


// -------------------------------- upper bound binary search ---



ll fun(ll x)
{
	return x;
}

ll l,r,mid,temp;

//start of range
l=0;
//ll a[n] so (end of range) + 1 = n
r=n;

while(l<r)
{
    mid=(l+r)>>1;
	//calc value which you want to compare with key and store in temp;
    temp=fun(mid);

    if(key<temp)
        r=mid;
    else
        l=mid+1;
}

// return l;
// both l and r value will be same
return r;


// -------------------------------- exact binary search ---


ll a[n];

ll l,r,mid;

//start of range
l=0;
//end of range
r=n-1;


while(l<=r)
{
	mid=(l+r)>>1;

	//calc value which you want to compare with key and store in temp;
    temp=fun(mid);

	if(key==temp)
		return mid;
	if(key<temp)
		r=mid-1;
	else
		l=mid+1;
}

// if not found return -1
return -1;


