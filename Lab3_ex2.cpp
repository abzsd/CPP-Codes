//Two Sum
//Given an array of integers nums and an integer target,
//Return indices of the two numbers such that they add up to target.
//Assumption: Every array has exactly one solution, and same element can not be repeated.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector <int> nums(n,0);
    vector <int> ans(2,-1);

    cout<<"Enter Array: ";
    for(i=0;i<n;i++)
        cin>>nums[i];
    
    int target;
    cout<<"Enter target: ";
    cin>>target;

    unordered_map <int,int> m;
    unordered_map <int,int> :: iterator it;

    for(i=0;i<n;i++)
        m.insert({nums[i],i});
    
    for(i=0;i<n;i++)
    {
        it = m.find(target - nums[i]);

        if(it != m.end())
        {
            if(it->second != i)
            {
                ans[0] = i;
                ans[1] = it->second;
                break;
            }
        }

    }

    if(ans[0] == -1 && ans[1] == -1)
        
}

left = 0
right = n-1

while()
{
    if(sum > target)
        right--;
    else if()
        ans
    else
        left++;
}