//week10-2.cpp
#include <stdio.h>
int main()
{
    printf("��J�Ʀr");
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    //printf("�Ӧ�%d\n",n%10);
    //printf("�Q��%d\n",n/10%10);
    //printf("�ʦ�%d\n",n/10/10%10);
    while (n>0){
        printf("�� %d ��� %d\n",n,n%10);
        n /= 10;
    }
}
