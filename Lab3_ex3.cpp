//Given an array of integers A and integer B.
//Find the total number of subarrays having bitwise XOR of all elements equals 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cout<<"Enter number of elements in array: ";
    cin>>n;

    vector <int> arr(n,0);

    cout<<"Enter Array:"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter target: ";
    cin>>m;

    int ans = 0;
    vector <int> xorArr(n,0);
    unordered_map <int,int> mp;

    xorArr[0] = arr[0];
    for(i=1;i<n;i++)
        xorArr[i] = xorArr[i - 1] ^ arr[i];

    int temp;

    for(i=0;i<n;i++)
    {
        temp = m^xorArr[i];

        ans += mp[temp];

        if(xorArr[i] == m)
            ans++;

        mp[xorArr[i]]++;
    }
    cout<<ans<<endl;
}