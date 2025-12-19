#include<bits/stdc++.h>
using namespace std;

void helpfulMaths(string st){
    int l = st.size();
    list<char> ls;
    sort(st.begin(), st.end());
    for (int i=0; i<l; i++){
        if(st[i]!= '+')
            ls.emplace_back(st[i]);
    }
    for (auto x : ls){
        if (!ls.empty() && x != *ls.begin()){
            cout<< "+";
        }
        cout<< x;
    }
}

int main(){
    string st = "1+3+2+2";
    helpfulMaths(st);
    return 0;
}