#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;
#define cp                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                    \
    cout<<fixed;
#define test\
    int text_cases;        \
    cin >> text_cases;              \
    while (text_cases--)
#define _GLIBCXX_DEBUG 1
#define _GLIBCXX_DEBUG_PEDANTIC 1
#define _FORTIFY_SOURCE 2
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define popb pop_back
#define ll long long int
#define pairii pair<int,int>
#define vecint vector<int>
#define veclong vector<ll>
#define pairll pair<ll,ll>
#define INF 1000001
#define MOD 998244353
#define fr(i,a,n) for(int i=a;i<n;i++)
#define sz(x) (ll)(x).size();
#define lCase(a) transform(a.begin(),a.end(),a.begin(),: :tolower)
#define uCase(a) transform(a.begin(),a.end(),a.begin(),: :toupper)

int BSTFunc(vecint &v,ll i, int min, int max)
{
   
    if(i>=v.size())
        return 1;
    if (v[i]==-9999999){
        return 1;
    }   
    if (v[i] < min || v[i] > max)
        return 0;
    
    return
        BSTFunc(v,2*i+1, min, v[i]-1) &&
        BSTFunc(v,2*i+2, v[i]+1, max); 
}



ll sum(vecint &v,ll i,ll &m,vecint &check){
    if(v[i]==-9999999)
        return 0;
    ll val = v[i];
    if(2*i+1<v.size()){
        val+=sum(v,2*i+1,m,check);
    }
    if(2*i+2<v.size()){
        val+=sum(v,2*i+2,m,check);
    }
    if(check[i]==1)
        m = max(m,val);
    return val;
}
 
void answer(){
    ll n;
    cin>>n;
    vecint arr(n);
    for(auto &i : arr){
        cin>>i;
    }
    ll res = LLONG_MIN;
    vecint check(n,0);
    for(int i=0;i<n;i++)
        check[i] = BSTFunc(arr,i,INT_MIN,INT_MAX);
    sum(arr,0,res,check);
    cout<<res<<endl;
}
 
int main()
{
    cp
   answer();
   return 0;
}