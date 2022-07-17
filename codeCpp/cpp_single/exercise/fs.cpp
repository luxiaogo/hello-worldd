#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int inf=99999999;
struct node{
double dis,price;
};
bool cmp(node a,node b){
    return a.dis<b.dis;
}
using namespace std;
int main()
{
    double cmax,d,davg;
    int n;
    cin >> cmax >> d >> davg >> n;
    vector<node>v(n+1);
    v[0]={1300,0};
    for(int i=1;i<n+1;i++){
        cin >> v[i].price;
        cin >> v[i].dis;
    }
    sort(v.begin(),v.end(),cmp);
    double nowprice=0.0,nowdis=0.0,leftdis=0.0,totalprice=0.00;
    if(v[0].dis!=0)printf("The maximum travel distance = 0.00");
    else nowprice=v[0].price;
    while(nowdis!=d){
        double maxdis=nowdis+davg*cmax;
        double minprice=inf,minpricedis=inf;
        int flag=0;
        for(int i=1;i<=n&&v[i].dis<=maxdis;i++){
            if(v[i].dis<=nowdis)continue;
            if(v[i].price<nowprice){
                totalprice+=(v[i].dis-leftdis-nowdis)*nowprice/davg;
                leftdis=0.0;
                nowprice=v[i].price;
                nowdis=v[i].dis;
                flag=1;                //要跳出两层循环
                break;
            }
            if(v[i].price<minprice){
                minprice=v[i].price;
                minpricedis=v[i].dis;
            }
        }
        if(flag==0 && minprice!=inf){
            totalprice+=(cmax*davg-leftdis)*nowprice/davg;
            leftdis=davg*cmax+nowdis-minpricedis;
            nowprice=minprice;
            nowdis=minpricedis;
        }
        if(flag==0 && minprice==inf){
            nowdis+=cmax*davg;
            printf("The maximum travel distance = %.2f",nowdis);
            return 0;
        }
    }
    printf("%.2f",totalprice);
}