#include<bits/stdc++.h>
using namespace std;

#define int long long
bool check(vector <int> &arr,int d,int x)
{
    int n = arr.size();
    for(int i=0;i<n-x+1;i++)
    {
        if(abs(arr[i+x-1]- arr[i])<d)
        return false;
    }
    return true;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)
            cin >> arr[i];
        
        sort(arr.begin(),arr.end());
        int l=0,r = 1e18;
        while(l < r){
            int m = (l + r)/2;
            if(check(arr,d,m))
                r=m;
            else
                l=m+1;
        }
    }
    return 0;
}