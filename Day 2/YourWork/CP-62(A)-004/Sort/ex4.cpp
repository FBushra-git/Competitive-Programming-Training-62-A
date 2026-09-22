#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 7, 9, 3, 5, 6, 12};
    sort(v.begin(),v.end());
     for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}