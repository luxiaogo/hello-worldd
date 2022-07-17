#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int poptime,pushtime,time;
};
struct node2{
    int arrivingtime,processingtime;
};
vector<node>window(100);
int main(){
    int n,k,addall;
    cin >> n >> k;
    vector<node2>order;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        scanf("%d:%d:%d",&a,&b,&c);
        cin >> d;
        int temptime=a*60*60+b*60+c;
        node2 NODE;
        NODE.arrivingtime=temptime;
        NODE.processingtime=d;
        order.push_back(NODE);
    }
    sort(order.begin(),order.end());
    for(int )
}