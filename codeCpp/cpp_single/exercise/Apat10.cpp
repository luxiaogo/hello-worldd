#include<iostream>
using namespace std;
struct num
{
    long long int x,y,z;
};
int main()
{
    int n;
    cin >> n;
    num h[n];
    for(int i=0;i<n;i++)
    cin >> h[i].x >> h[i].y >>h[i].z;
    for(int i=0;i<n;i++)
    printf("Case #%d: %s\n", i+1,h[i].x+h[i].y>h[i].z?"True":"False");
}