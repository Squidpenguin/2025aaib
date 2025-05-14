//week13-3.cpp
//輾轉相除法找最大公因數
#include <stdio.h>
int gcd(int a,int b)
{
    printf("老大a: %d，老二b: %d\n",a,b);
    if (a==0) return b;//遇到0，另一邊是答案
    if (b==0) return a;
    return gcd(b, a%b);
    //老大變老二，老三變老二
}

int main()
{
    printf("請輸入2數");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = gcd(a,b);
    printf("他最大公因數是:%d\n",ans);
}
