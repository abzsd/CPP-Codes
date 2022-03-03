#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t-->0)
    {
        ll m,n;
        cin>>n>>m;
        ll counter=0;
        vector<ll> me(n+1,1);
        for(ll i=2;i<=n;i++){
            ll x=m%i;
            counter+=me[x];
            for(ll j=x;j<=n;j+=i)
            {
                me[j]++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}