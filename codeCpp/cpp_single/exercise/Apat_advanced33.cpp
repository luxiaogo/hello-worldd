#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct station{
    double price,dis;
};
bool cmp(station a,station b){
    return a.dis<b.dis;
}
const int inf=99999999;
int main(){
    int n;
    double cmax,d,davg;
    cin >> cmax >> d >> davg >> n;
    //station sta[n+1];
    vector<station>sta(n+1);
    sta[0]={0.0,d};
    for(int i=1;i<=n;i++)
    {
        cin >> sta[i].price >> sta[i].dis;
    }
    sort(sta.begin(),sta.end(),cmp);
    cout << sta[0].price;
    double nowdis=0.0,totalprice=0.0,nowprice=0.0;
    if(sta[0].dis!=0){
        printf("The maximum travel distance=0.00");
        return 0;
    }else{
        nowprice=sta[0].price;
    }
    int leftdis;
    while(nowdis!=d)
    {
        double maxdis=nowdis+cmax*davg;
        int flag=0;
        double minpricedis=inf,minprice=inf;
        for(int i=1;i<=n && sta[i].dis<=maxdis;i++){
            if(sta[i].dis<=nowdis){continue;}
            if(sta[i].price<nowprice){
                totalprice+=(sta[i].dis-nowdis-leftdis)/davg*nowprice;
                leftdis=0.0;
                nowprice=sta[i].price;
                nowdis=sta[i].dis;
                cout << nowprice << endl;
                cout << nowdis << endl;
                flag=1;
                break;
            }
            if(sta[i].price<minprice){
                minprice=sta[i].price;
                minpricedis=sta[i].dis;
            }
        }
        if(flag==0&&minprice!=inf){
            totalprice+=nowprice*(cmax*davg-leftdis)/davg;
            leftdis=nowdis+cmax*davg-minpricedis;
            nowdis=minpricedis;
            cout << nowdis << endl;
            nowprice=minprice;
            cout << nowprice << endl;
        }
        if(flag==0&&minprice==inf){
            printf("The maximum travel distance = %.2f",nowdis);
            return 0;
        }
    }
    printf("%.2f",totalprice);
    return 0;
}