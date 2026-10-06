#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, target;
    cin >> n >> target;


    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin() , a.end());

    int left = 0;
    int right = n-1 ;
    int index = -1;

     while(left <= right) {
        int middle = (left + right) / 2;

        if(a[middle] == target) {
            index = middle;
            break;
        }
        else if(a[middle] < target) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    if(index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not Found" << endl;

    return 0;


}