#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int l = v.size();
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-i-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(v);
    cout << "Sorted array : ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}