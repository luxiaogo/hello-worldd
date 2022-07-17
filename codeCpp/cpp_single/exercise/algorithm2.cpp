#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int t;
    queue<int>q;
    for(int i=0;i<10;i++){
    cin >> t;
    q.push(t);}
    while(!q.empty()){
    cout << q.front();
    q.pop();
    q.push(q.front());
    q.pop();
    }
}