#include<iostream>                    //理解错题意了（吐了）
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
struct node
{
    queue<int>q;
    int poptime,endtime;
}
int main()
{
    int n,m,k,q,index=1;
    cin >> n >> m >> k >> q;
    vector<node>window(n+1);
    vector<int>time(k+1),result(k+1);
    vector<bool>sorry(k+1,false);
    for(int i=1;i<=k;i++)
    {
        cin >> time[i];
    }
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        if(index<=k)
        {
            if(window[j].endtime>=540)//endtime没有初始化
            sorry[index]=true;
            window[j].endtime+=time[index];
            window[j].q.push(time[index]);
            result[index]=window[j].endtime;
            if(i==1)
            {
                window[j].poptime=time[index]; //
            }
            index++;
        }
    }
    while(index<=k)
    {
        int tempmin=window[1].poptime,tempwindow=1;
        for(int i=2;i<=n;i++)
        {
            if(window[i].poptime<tempmin)
            {
                tempmin=window[i].poptime;
                tempwindow=i;
            }
        }
        window[tempwindow].q.pop();
        window[tempwindow].q.push(time[index]);
        window[tempwindow].poptime=window[tempwindow].q.front();
        if(window[tempwindow].endtime>540)sorry[index]=true;
        window[tempwindow].endtime+=time[index];
        result[tempwindow]=window[tempwindow].endtime;
        index++;
    }
    for(int i=1;i<=q;i++)
    {
        int query;
        cin >> query;
        if(sorry[query]==true)
        printf("%0d:%0d\n",8+result[query]/60,result[query]%60);
        else printf("Sorry\n");
    }
}