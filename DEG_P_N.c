#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int* DEG_P_N(int n,int *C)
{
    int *res;
    res=(int*)malloc(2*sizeof(int));
    res[0]=(C+(n-1)*2+0);
    res[1]=(C+(n-1)*2+1);
    return *res;
}
int main(void)
{
    int*C;
    int *res;
    int m,i;
    m=4;
    C=(int*)malloc(m*2*sizeof(int));
    res=(int*)malloc(2*sizeof(int));
    for(i=0;i<m;i++)
    {
        printf("Enter %d number\n",i+1);
        scanf("%d",(C+i*2+0));
        scanf("%d",(C+i*2+1));
    }//----------------------------------------------
    res=DEG_P_N(m,C);
    printf("%d\n%d",*(res+0),*(res+1));
    free(C);
    free(res);
}
//я тут был

// Передаю привет всем, кто тут был (͡° ͜ʖ ͡°)
