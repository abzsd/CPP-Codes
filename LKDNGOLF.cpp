#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll N,x,k;
        cin >> N >> x >> k;
        int r = (N+1)%k;
        if((x%k == 0) || (x%k == r))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}