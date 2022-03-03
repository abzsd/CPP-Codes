
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
unordered_map <char,int> m;
unordered_map <char,int> :: iterator it;
for(i=0;i<n;i++)
    m[str[i]]++;

//Check:

for(it = m.begin();it != m.end();it++)
{
    if(it->second % 2 == 1)
        number_of_odd_letters++;
    
    if(number_of_odd_letters > 1)
    {
        can_be_palindrome = false;
        break;
    }
}
}