#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    int l = v.size();
    for(int i=0; i<l-1; i++){
        int min_idx = i;
        for(int j=i+1; j<l; j++){
            if(v[j] < v[min_idx])
                min_idx = j;
        }
        swap(v[i], v[min_idx]);
    }
}

int main(){
    vector<int> v = {2,3,4,1,5,3};
    selectionSort(v);
    cout<< "Sorted array : ";
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}