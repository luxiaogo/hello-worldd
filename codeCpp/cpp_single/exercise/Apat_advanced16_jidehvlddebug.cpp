#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
struct node
{
    string name;
    int month,day,hour,minute,status,time;
};
bool cmp(node a,node b)
{return a.name!=b.name?a.name<b.name:a.time<b.time;}//    这种返回方式很棒
double billfromzero(node call,int *rate)               //    这里硬要int rate干嘛，不能直接定义一个全局变量吗？
{
    double total = call.minute*rate[call.hour]+call.day*rate[24]*60;
    for(int i=0;i<call.hour;i++)
    total+=60*rate[call.hour];
    total /= 100.0;
    return total; 
}
int main()
{
    int rate[25];
    for(int i=0;i<24;i++)
    {
        cin >> rate[i];
        rate[24]+=rate[i];
    }
    int n;
    cin >> n;
    vector<node>data(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        data[i].name=s;
        scanf("%d:%d:%d:%d",&data[i].month,&data[i].day,&data[i].hour,&data[i].minute);
        string temp;
        cin >> temp;
        data[i].status=(temp=="on-line")?1:0;
        data[i].time=data[i].minute+data[i].hour*60+data[i].day*60*24;
    }
    sort(data.begin(),data.end(),cmp);
    map<string,vector<node>>custom;
    for(int i=1;i<n;i++)
    {
        if(data[i].status==0&&data[i-1].status==1&&data[i].name==data[i].name){
        custom[data[i-1].name].push_back(data[i-1]);
        custom[data[i].name].push_back(data[i]);}
    }
    for(auto it:custom)
    {
        cout << it.first;
        vector<node>temp=it.second;
        printf(" %02d\n",temp[0].month);
        double total=0.0;
        for(int i=1;i<temp.size();i+=2)
        {
            double t=billfromzero(temp[i],rate)-billfromzero(temp[i-1],rate);
            total+=t;
            printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",temp[i-1].day,temp[i-1].hour,temp[i-1].minute,temp[i].day,temp[i].hour,temp[i].minute,temp[i].time-temp[i-1].time,t);
        }
        cout << "Total amount:$" << total << endl;
    }
}