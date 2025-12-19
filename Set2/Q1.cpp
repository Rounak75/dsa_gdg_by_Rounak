#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size() != t.size())
        return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
int main(){
    string s = "mat";
    string t = "rat";
    if(isAnagram(s, t))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;
    return 0;
}   