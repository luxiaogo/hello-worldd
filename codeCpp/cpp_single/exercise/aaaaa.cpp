#include<iostream>
using namespace std;
int main(){
    string s="abcde";
    s.erase(1,2);
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }
}