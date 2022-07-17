#include <stdio.h>
void he(int n,char one,char two,char three)
{  
    void move(char x,char y);
    if(n==1)
    move(one,three);
    else
    he(n-1,one,three,two);
    move(one,three);
    he(n-1,two,one,three);
}
int main()
{   
    void he(int n,char one,char two,char three);
    int i;
    printf("please input the number of the dishes\n");
    scanf("%d",&i);
    he(i,'A','B','C');
}
    void move(char x,char y) 
    {
    printf("%c-->%c\n",x,y);
    }