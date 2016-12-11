#include<stdio.h>
int main()
{
    int a,b,i,count=0,c,j;
    scanf("%d",&c);
    for(j=1; j<=c; j++){
        scanf("%d%d",&a,&b);
        for(i = a; i <=b; i++){
            if(i % 2 != 0){
                count = count + i;
            }
        }

    printf("Case %d: %d\n",j,count);
    count = 0;
    }

    return 0;
}
