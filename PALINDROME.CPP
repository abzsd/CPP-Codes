#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    bool can_be_palindrome = true;      // Initially assume it can be a palindrome
    cout<<"Enter string:"<<endl;
    cin>>str;
 
    int i,n;
    n = str.length();
 
    vector <int> freq(256,0);           // Frequency Array, can also be done with 26 letters: freq(26,0)
 
    for(i=0;i<n;i++)
        freq[str[i]]++;                 // If using freq of size 26, do : freq[str[i] - 'A']++  (Subtracting ASCII of 'A')
    
    int number_of_odd_letters = 0;  
 
    for(i=0;i<256;i++)
    {
        if(freq[i] % 2 == 1)
            number_of_odd_letters++;
    
        if(number_of_odd_letters > 1)   // If more than one letter occurs odd number of times, it can't be made into a palindrome 
        {
            can_be_palindrome = false;
            break;
        }
    }
 
    if(can_be_palindrome)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
 
    /* Alternate: Keep a hash map for characters:
 
    unordered_map <char,int> m;
    unordered_map <char,int> :: iterator it;
 
    for(i=0;i<n;i++)
        m[str[i]]++;
 
    Check: 