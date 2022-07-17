#include<iostream>
using namespace std;
int main()
{
    string name,maxname,minname,num,maxnum,minnum;
    int score,maxscore=0,minscore=100,n;
    for(int i=0;i<n;i++){
    cin >> name >> num >> score;
    if(score>maxscore)
    {
        maxscore=score;
        maxname=name;
        maxnum=num;
    }
    if(score<minscore)
    {
        minscore=score;
        minname=name;
        minnum=num;
    }
    }
    cout << maxname << " " << maxnum << endl;
    cout << minname << " " << minnum << endl;
}