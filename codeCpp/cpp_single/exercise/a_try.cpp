#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int add(int a){
    a+=10;
    return a;
}
int main(){
    int x=10;
    int y=add(x);
    cout << x;
    cout << y;
}