#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int inf=99999999;
struct node{
    double dis,price;
};
bool cmp(node x,node y){
    return x.dis<y.dis;
}
int main(){
    double cmax,d,davg;
    int n;
    cin >> cmax >> d >> davg >> n;
    vector<node>v(n+1);
    v[0]={1300,0};
    for(int i=1;i<=n;i++){
        cin >> v[i].price >> v[i].dis;
    }
    sort(v.begin(),v.end(),cmp);
    if(v[0].dis!=0){
        cout <<"The maximum travel distance = 0.00";
        return 0;
    }
    double totalprice=0.0,leftdis=0.0;
    double nowprice=v[0].price,nowdis=0.0;
    while(nowdis!=d){
        int flag=0;
        double minprice=inf,minpricedis=inf;
        double maxdis=nowdis+davg*cmax;
        for(int i=1;i<=n && v[i].dis<=maxdis;i++){
            if(v[i].dis<=nowdis)continue;
            if(v[i].price<nowprice){
                totalprice+=nowprice*(v[i].dis-leftdis-nowdis)/davg;
                nowprice=v[i].price;
                leftdis=0.0;
                nowdis=v[i].dis;
                flag=1;
                break;
            }
            if(v[i].price<minprice){
                minprice=v[i].price;
                minpricedis=v[i].dis;
            }
        }
        if(flag==0 && minprice!=inf){
            totalprice+=(davg*cmax-leftdis)*nowprice/davg;
            leftdis=nowdis+cmax*davg-minpricedis;
            nowprice=minprice;
            nowdis=minpricedis;
        }if(flag==0 && minprice==inf){
            nowdis+=cmax*davg;
            printf("The maximum travel distance = %.2f",nowdis);
            return 0;
        }
    }
    printf("%.2f",totalprice);
    return 0;
}