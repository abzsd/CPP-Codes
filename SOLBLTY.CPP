#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main(){
    ll T,x,a,b;
    cin >> T;
    while(T--){
        cin >> x >> a >> b;
        cout << (a+((100-x)*b))*10 << endl;    
    }
    return 0;
}
