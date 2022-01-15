#include<stdio.h>
#include<stdlib.h>

int GetMin(char s[]){
    int min = 0;
    int h = 0,m = 0;
    for(int i  = 0; i < strlen(s); i++){
        if(s[i] == ':'&& !min){
            h = h * 10 + (s[i] - '0');
            min = 1;
        }else{
            m = m * 10 + (s[i] - '0');
        }
    }
    return h * 60 + m;
}

int main(int argc, char** argv)
{   
    int n,m;
    scanf("%d%d",&n,&m);
    char s[100];
    scanf("%s",s);
    int required = GetMin(s);
    int count = 0;
    for(int i = 0; i < n; i++){
        char a[100];
        scanf("%s",a);
        if(required >= GetMin(a)){
            count++;
        }
    }
    if(count >= m){
       printf("No\n"); 
    }else{
        printf("Yes\n");
    }
    return 0;
}