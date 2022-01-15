#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[100000];
    for(int i = 0; i < 100000; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < n + m; i++){
        int a;
        scanf("%d",&a);
        arr[a]++;
    }

    int count = 0;
    for(int i = 0; i < 100000; i++){
        if(arr[i] == 1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}