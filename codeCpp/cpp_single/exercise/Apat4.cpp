#include<iostream>
using namespace std;
#include<string>
int main()
{
    int score,number,max=-1,min=101,n,minnum,maxnum;
    string name,maxname,minname;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> name >> number >> score;
        if(score>max)
        {
            max=score;
            maxname=name;
            maxnum=number;
        }
        if(score<min)
        {
            min=score;
            minname=name;
            minnum=number;
        }
    }
    cout << maxname << " " << maxnum << endl;
    cout << minname << " " << minnum << endl;
    
}