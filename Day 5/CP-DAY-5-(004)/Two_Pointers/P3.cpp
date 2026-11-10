#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m ;
    cin >> n >> m;
    
    vector<int> a(n), b(m), c;

    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    int i = 0 , j = 0 ;

    while ( i < n && j < m){
        if(a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        }

        else {
            c.push_back(b[j]);
            j++;
        }
    }
     while(i < n) {
        c.push_back(a[i]);
        i++;
    }

    while(j < m) {
        c.push_back(b[j]);
        j++;
    }

    for(int x : c) {
        cout << x << " ";
    }



}
int main(){
    solve();
}