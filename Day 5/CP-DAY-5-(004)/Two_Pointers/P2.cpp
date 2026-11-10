#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s ;
    cin >> s;

    int l = 0 , r = s.length()-1;
    bool isPalindrome = true;

    while ( l < r){
        if(s[l] != s[r]){
         isPalindrome = false;
         break;

        }
        l ++;
        r --;
    }
     if(isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

}

int main (){
  solve();
}