#include <bits/stdc++.h>
using namespace std;
int main (){
    string a = "Bushradkswbdcfwfsdcsdbsbvfcsaasfbaf";
    int count = 0;

    for(int i = 0;i<a.size();i++){
        if(a[i] == 'a'){
            count ++;
        }
     cout << count << endl;
    }

}