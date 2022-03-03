#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int min_num(vector <int> &arr)
{
    int temp = arr[0];
    int s =arr.size();
    for(int i=0;i<s;i++){
        if((temp >= arr[i]) && (arr[i] != 0))
            temp = arr[i];}
    return temp;
}

vector <int> del_int(int t,vector <int> &arr)
{
    int n = arr.size();
    for(int i=0;i<=n;i++)
    {
        arr[i] = arr[i] - t;
    }
    return arr;
}
        
void print(vector <int> &arr)
{
    int s =arr.size();
    for(int i=0;i<s;i++)
    {
        cout << arr[i] << " ";
    }
}

int summ(vector <int> &arr)
{
    int sumn=0;
    int s =arr.size();
    for(int i=0;i<s;i++)
    {
        sumn = sumn + arr[i];
    }
    return sumn;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin.tie(NULL);
    int n,C,y;
    cin >> n >> C >> y;    
    vector <int> Arr(n,0);
    for(int i=0;i<=n;i++)
        cin >> Arr[i];
    int t;
    for(int i=1;i<=C;i++){
        t = min_num(Arr);
        Arr = del_int(t,Arr);        
    }
    //print(Arr);
    sort(Arr.begin(),Arr.end());
    print(Arr);

    int s =Arr.size();
    for(int p=0;p<=s;p++)
    {
        del_int(p,Arr);
        if(summ(Arr)<y)
        {
            cout <<'\n'<< p-1 <<" ";
            cout << summ(Arr) + p*s ;
            
            break;
        }
        
        
    }

    return 0;
}