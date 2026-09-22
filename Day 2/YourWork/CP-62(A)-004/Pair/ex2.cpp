#include <bits/stdc++.h>
using namespace std;

int main(){
    //("Asif",(17,3.85))

    pair<string,pair<int, double>> p;

    p = {"Asif",{17,3.85}};

    cout<< "Name: "<<p.first<<endl;
    cout<< "Age: "<<p.second.first<<endl;
    cout<< "CG: "<<p.second.second<<endl;

    return 0;
}