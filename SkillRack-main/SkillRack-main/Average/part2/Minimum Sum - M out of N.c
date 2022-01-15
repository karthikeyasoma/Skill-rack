#include<stdio.h>
#include<stdlib.h>

int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}


int main(int argc, char** argv)
{
    int size,k;
    scanf("%d%d",&size,&k);
    int answer[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&answer[i]);        
    }
    qsort(answer,size,sizeof(int),comparator);
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += answer[i];
    }
    printf("%d",sum);
}