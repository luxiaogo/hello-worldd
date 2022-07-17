#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct node
{
    int endtime,poptime;
    queue<int>q;
};
int main()
{
    int n,m,k,q,index=1;
    cin >> n >> m >> k >> q;
    vector<node>window(m+1);
    vector<bool>sorry(k+1,false);
    int time[k+1],result[k+1];
    for(int i=1;i<=n;i++)
    {
        cin >> time[i];
    }
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        if(index<=k)
        {
            window[j].q.push(time[index]);   //window数是j不是i哦
            if(window[j].endtime>=540)
            sorry[index]=true;
            window[j].endtime+=time[index];
            if(i==1)
            window[j].poptime=time[index];
            result[index]=window[j].endtime;
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
        window[tempwindow].q.push(time[index]);
        window[tempwindow].q.pop();
        window[tempwindow].poptime += window[tempwindow].q.front();
        if(window[tempwindow].endtime>540)
        sorry[index]=true;
        window[tempwindow].endtime+=time[index];
        result[index]=window[tempwindow].endtime;
        index++;
    }                                                               //输出可以用一边cin一边cout?print!
    for(int i=0;i<q;i++)
    {
        int query;
        scanf("%d",&query);
        if(sorry[query]==true)
        {
            cout << "Sorry" << endl;
        }
        else
        {
            printf("%02d:%02d\n",8+result[query]/60,result[query]%60);
        }
    }
}
