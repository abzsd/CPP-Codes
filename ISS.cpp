#include<bits/stdc++.h>
using namespace std;
#define vec vector
#define TIE cin.tie(NULL);
const int mod= 1e9+7;
#define pb(x) push_back(x)
#define p(x) push(x)
#define IOS ios_base::sync_with_stdio(false);
#define gcd(a,b) __gcd(a,b)

void solve(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int sum = 0;
        for(int i=1;i<=2*k;i++){
            sum += gcd(k+(i*i),k+((i+1)*(i+1)));
        }
        cout << sum << endl;
    }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        solve();
    return 0;
}