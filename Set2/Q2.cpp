#include <bits/stdc++.h>
using namespace std;    

string frequencySort(string s) {
    unordered_map<char, int> mpp;
    for(char c : s)
        mpp[c]++;

    vector<pair<int, char>> v;
    for(auto p : mpp)
        v.emplace_back({p.second, p.first});

    sort(v.rbegin(), v.rend());

    string result = "";
    for(auto p : v)
        result += string(p.first, p.second);

    return result;
}

int main() {
    string s = "tree";
    string str = frequencySort(s);
    cout << "Sorted string by frequency: " << str;
    return 0;
}