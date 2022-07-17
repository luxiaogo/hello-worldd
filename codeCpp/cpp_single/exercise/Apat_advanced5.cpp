#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int latetime=0,earlytime=9999999,tintime,touttime;    //后面的数字可能会很大，设置inf的时候尽量设的大一点
    string str,intime,outtime,earlyname,latename;
    for(int i=0;i<n;i++)
    {
        cin >> str >> intime >> outtime;
        tintime=60*60*(10*intime[0]+intime[1])+60*(10*intime[3]+intime[4])+(10*intime[6]+intime[7]);
        touttime=60*60*(10*outtime[0]+outtime[1])+60*(10*outtime[3]+outtime[4])+(10*outtime[6]+outtime[7]);
        if(tintime<earlytime){earlyname=str;earlytime=tintime;}
        if(touttime>latetime){latename=str;latetime=touttime;}
    }
    cout << earlyname << " " << latename << endl;
    cout << intime[0];
    cout << intime[0]*10;
}