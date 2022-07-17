#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        cout << v[i];
    }
}