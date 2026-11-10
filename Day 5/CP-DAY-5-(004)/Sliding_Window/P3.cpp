#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s;
    cin >> n >> s;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, mn = INT_MAX;
    int sum = 0;

    for(int r = 0; r<n ; r++){
        sum += a[r];
        
        while(sum >= s){
            mn = min(mn, r - l + 1);
            sum -= a[l];
            l++ ;
        }

        
    }
     if(mn == INT_MAX)
        cout << "No subarray found";
    else
        cout << mn;
}
int main() {
    solve();
}