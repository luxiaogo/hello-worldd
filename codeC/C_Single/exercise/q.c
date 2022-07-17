#include <stdio.h>
int main()
{
    void copy(char * from,char * to);
    char * a="I am a teacher";
    char * b="I am a fucker";
    printf("string a=%s\nstring b=%s",a,b);
    copy(a,b);
    printf("Copy string a to string b");
    printf("string a=%s\nstring b=%s",a,b);
}
void copy(char * from,char * to)
{
    int i;
    for(i=0;from[i]!='\0';i++)
    to[i]=from[i];
    to[i]='\0';
}