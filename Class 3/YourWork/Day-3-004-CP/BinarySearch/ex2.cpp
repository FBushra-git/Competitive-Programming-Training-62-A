#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long left = 1;
    long long right = n - 1;
    long long answer = 0;

    while(left <= right) {
        long long mid = (left + right) / 2;

        if(mid * mid <= n) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}
   