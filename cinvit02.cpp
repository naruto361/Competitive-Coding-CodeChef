#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
#define pb push_back
#define mod 1000000007
#define nl cout<<"\n";
#define ff first
#define ss second
#define loop1(m) for(int i=0;i<m;i++) 
#define vl vector<ll> 
#define vi vector<int>
#define mii map<int,int>
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
bool ifodd(ll n)
{
    return (n&1);
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
bool isprime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    ll ans=0;
    int a[100001][2]={0};
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]++;
    }
    for(int i=1;i<100001;i++)
    {
        if(a[i][0]>a[i][1]) ans-=a[i][0]*i;
        else ans+=a[i][1]*i;
    }
    cout<<ans;
}
