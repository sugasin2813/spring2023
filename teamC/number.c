#include <stdio.h>
 
int main(void)
{
    int h,t;
    scanf("%d%d",&h,&t);
    for(int i = h; i<=t;i++){
        if(i==t)printf("%d",i);
        else printf("%d,",i);
    }
    return 0;
}
