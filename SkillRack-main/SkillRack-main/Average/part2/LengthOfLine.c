#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv){
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    double dis=sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    printf("%0.2f",dis);
}