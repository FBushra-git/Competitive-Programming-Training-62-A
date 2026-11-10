#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , target;
    cin >> n >> target;


    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int l = 0, r = n - 1;
    bool found = false;

    while( l < r ){
        if ( a[l] + a[r] == target){
            cout << a[l] << " " << a[r] << endl;
            found = true;
            break ; 
        }
        else if ( a[l] + a[r] < target ){
            l ++;
        }
        else {
            r --;
        }
    }
    if(!found){
        cout <<"Not Found" << endl;
    }

}


int main (){
   solve();
}