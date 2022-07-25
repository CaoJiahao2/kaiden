#include <stdio.h>
#include <stdbool.h>
#include "string.h"
#define maxsize 1005
bool arr[maxsize];
int main() {
    int k,n,i=1,j,temp,count=0;
    printf("input n:\n");
    scanf("%d",&n);
    printf("input k:\n");
    scanf("%d",&k);
    memset(arr,false,(n+5)*sizeof (bool));
    while (i<=k){
        temp=(int)n/i;
        for(j=1;j<=temp;j++)
            arr[j*i]=!arr[j*i];
        i++;
    }
    bool flag;
    for(i=1;i<=n;i++){
        if(arr[i]){
            count++;
            printf("%4d",i);
            flag=true;
        }
        if(count%30==0&&flag){
            printf("\n");
            flag=false;
        }

    }
    return 0;
}
