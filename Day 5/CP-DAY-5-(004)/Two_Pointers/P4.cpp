#include <bits/stdc++.h>
using namespace std;


void solve (){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int slow = 0;

    for (int fast = 1 ; fast < n; fast++){
        if(a[fast] != a[slow]){
            slow++;
            a[slow] = a[fast];
        }
    }

    cout << "Unique elements: "; 
    for(int i = 0; i <= slow && n > 0; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    solve();
}