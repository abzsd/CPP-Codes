#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
	int n,k;
	cin>>n>>k;
	
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
 
	vector<int> ans;
	deque<int> q;
	
	int i;
	for (i = 0; i < k; i++)
	{
		// Remove all elements less than current element
		while(!q.empty() and v[q.back()]<v[i]){
			q.pop_back();
		}
 
		// Add current element to the back of the queue
		q.push_back(i);
	}
	
	// The element at the front is the max of previous window
	ans.push_back(v[q.front()]);
 
 
	for(; i<n; i++){
		
		// Remove the 1st element if it is not in this window
		while(!q.empty() and q.front()<i-k+1){
			q.pop_front();
		}
 
		// Remove all elements less than current element 
		while(!q.empty() and v[q.back()]<v[i]){
			q.pop_back();
		}
 
		// Add current element to the back of the queue
		q.push_back(i);
 
		// The element at the front is the max of previous window
		ans.push_back(v[q.front()]);
	
	}
	
	// Print the answer	
	for(i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
 
	return 0;
}