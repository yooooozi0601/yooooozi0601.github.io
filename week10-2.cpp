///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("請輸入1個數字");
    int n;
    scanf("%d",&n);
    printf("你輸入了 %d\n",n);
    ///printf("它的個位數 %d\n",n%10);
    ///printf("它的十位數 %d\n",n/10%10);
    ///printf("它的百位數 %d\n",n/10/10%10);
    while(n>0){
        printf("現在把%d 剝皮  %d\n",n,n%10);
        n=n/10;
    }

}
