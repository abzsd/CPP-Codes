#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    while(t--){
        long long int xa,ab,Xa,Xb,count;
        count = 0;
        cin >> xa >> xb >> Xa >> Xb;
        count = ((Xa/xa) + (Xb/xb)); 
        cout << count;       
    }
    return 0;
}