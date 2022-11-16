#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    s.push_back('a');
    s.push_back('b');
    s.pop_back();
    cout << s;
}