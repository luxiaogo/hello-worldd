#include<iostream>
using namespace std;
int main()
{
    int a,cnt;
    string name,birth,maxname,minname,maxbirth="1814/09/06",minbirth="2014/09/06";     //可以直接用题给的最大最小数值来替代你需要的max和min
    cin >> a; 
    for(int i=0;i<a;i++)                  //字符串可以直接比大小
    {
        cin >> name >> birth;
        if(birth>"1814/09/06" && birth<"2014/09/06")
        {
            cnt++;
            if(birth>maxbirth)
            minname=name;
            maxbirth=birth;
            if(birth<minbirth)
            maxname=name;
            minbirth=birth;
        }

    }
    cout << cnt << " " << maxname << " " << minname;
}