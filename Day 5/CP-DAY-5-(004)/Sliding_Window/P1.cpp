#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

   vector <int> a(n);

   for(int i = 0 ; i < n ; i++){
    cin >> a[i];
   }
   if(k > n || k <= 0){
    cout << "Invalid window " ;
    return;
   }

   int sum = 0;
    for(int i = 0; i < k; i++) {
        sum += a[i];
    }
   int mx = sum;
   for(int i = k; i < n; i++){
    sum += a[i] - a[i - k];
    mx = max(mx, sum);
   }

   cout << mx << endl;
}

int main(){
    solve();
}