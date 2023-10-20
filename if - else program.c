#include<stdio.h>

int main(){
    char ch;
    printf("enter any charater");
    scanf("%c, &ch");

    if(( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
    {
        printf("charatern is an alphabet");
    }
    
    else((ch <= 'a' && ch >= 'z') || (ch <= 'A' && ch <= 'Z'));
    {
         printf("charater is not alphabet");
    }
    return 0;
}