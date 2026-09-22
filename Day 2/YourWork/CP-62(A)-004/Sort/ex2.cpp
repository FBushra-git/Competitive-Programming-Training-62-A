#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {5, 2, 8, 1};

    sort(a, a+4 );

    for(int i = 3; i >= 0; i--){
        cout<<a[i]<<" "<<endl;
    }
}