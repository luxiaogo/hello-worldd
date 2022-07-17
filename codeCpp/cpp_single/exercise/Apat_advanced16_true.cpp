#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int rate[25];
struct node{
    string name;
    int month,day,hour,minute,status,time;
};
bool cmp(node x,node y){
    return x.name!=y.name?x.name<y.name:x.time<y.time;
}
double billfromzero(node v){
    double total=rate[v.hour]*v.minute+rate[24]*v.day*60;
    for(int i=0;i<v.hour;i++){
        total+=rate[i]*60;
    }
    return total/100.0;
}
int main(){
    for(int i=0;i<24;i++){
        cin >> rate[i];
        rate[24]+=rate[i];
    }
    int n;
    cin >> n;
    string s;
    vector<node>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].name;
        scanf("%d:%d:%d:%d",&v[i].month,&v[i].day,&v[i].hour,&v[i].minute);
        cin >> s;
        v[i].status=(s=="on-line"?1:0);
        v[i].time=v[i].day*24*60+v[i].hour*60+v[i].minute;
    }
    sort(v.begin(),v.end(),cmp);
    map<string,vector<node>>m;
    for(int i=1;i<n;i++){
        if(v[i].status==0&&v[i-1].status==1&&v[i].name==v[i-1].name){
            m[v[i].name].push_back(v[i-1]);
            m[v[i].name].push_back(v[i]);
        }
    }
    for(auto it:m){
        double totalamount=0.0;
        cout << it.first;
        vector<node>temp=it.second;
        printf(" %02d\n",temp[0].month);
        for(int i=0;i<temp.size();i+=2){
            printf("%02d:%02d:%02d ",temp[i].day,temp[i].hour,temp[i].minute);
            printf("%02d:%02d:%02d ",temp[i+1].day,temp[i+1].hour,temp[i+1].minute);
            printf("%d",temp[i+1].day*24*60+temp[i+1].hour*60+temp[i+1].minute-temp[i].day*24*60-temp[i].hour*60-temp[i].minute);
            printf(" $%.2f\n",billfromzero(temp[i+1])-billfromzero(temp[i]));
            totalamount+=billfromzero(temp[i+1])-billfromzero(temp[i]);
        }
        cout << "Total amount: $";
        printf("%.2f\n",totalamount);
    }
}