#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define int long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector < int >
#define pb push_back
#define gint(a,n) for(int i=0;i<n;i++) cin>>a[i];
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------- 
vector<int> ans;
 
int partition(vector<int> &arr, int lo, int hi, int k){
	int pivotIndex = lo + (k % (hi - lo + 1));
	int pivot = arr[pivotIndex];
	ans.pb(pivot);
  
	vi temp(hi - lo + 1);
	for(int i=0;i<(hi - lo + 1);i++){
		temp[i] = arr[i+lo];
	}
 
	int p1 = lo;
 
	for(int i=0;i<temp.size();i++){
		if(temp[i] < pivot){
			arr[p1] = temp[i];
			p1++;
		}
	}
 
	int partitionedAt = p1;
	arr[p1] = pivot;
	p1++;
 
	for(int i=0;i<temp.size();i++){
		if(temp[i] > pivot){
			arr[p1] = temp[i];
			p1++;
		}
	}
  
	return partitionedAt;
}
 
void quickSort(vector<int> &arr, int lo, int hi, int k){
	if(lo < hi){
		int part = partition(arr, lo, hi, k);
		
		quickSort(arr, lo, part - 1, k);
		quickSort(arr, part + 1, hi, k);
	}
}
 
int32_t main(){fast;
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
 
	int n, k;
	cin >> n >> k;
	vi arr(n);
	gint(arr, n);

	quickSort(arr, 0, n-1, k);
}