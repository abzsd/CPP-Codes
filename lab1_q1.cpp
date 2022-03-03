#include<bits/stdc++.h>
using namespace std;
 
int merge(int arr[], int low, int mid, int high){
    int l1 = mid - low + 1;
    int l2 = high - mid;
 
    int count = 0;
 
    int a[l1], b[l2];
    for(int i=0; i<l1; i++)
        a[i] = arr[low+i];
    for(int i=0; i<l2; i++)
        b[i] = arr[mid+1+i];
 
    int i=0, j=0, k = low;
    while(i<l1 && j<l2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] =  b[j];
            count += (l1-i);
            j++;
        }
        k++;
    }
 
    while(i<l1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<l2){
        arr[k] = b[j];
        j++;
        k++;
    }
    return count;
}
 
int mergeSort(int arr[], int low, int high){
    int count = 0;
    if(low<high){
        int mid = (low+high)/2;
        count+=mergeSort(arr, low, mid);
        count+=mergeSort(arr, mid+1, high);
 
        count+=merge(arr, low, mid, high);
    }
    return count;
}
 
int main(){
    int n;
    cin>>n;
 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int count = mergeSort(arr, 0, n-1);
 
    cout<<count<<endl;
 
}