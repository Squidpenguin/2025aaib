//week11-2.cpp
//�禡�ŧi�A�w�q�A�I�s
#include <stdio.h>

int addnum(int a,int b)//�ŧi�ѼƧΪ��W�r
{
    printf("addnum()�禡,a:%d b:%d\n",a,b);
    int x;
    x = a+b;
    printf("��Ƭۥ[,%d return�^��\n",x);
    return x;
}

int main()
{
    int ans = addnum(10,30);
    printf("%d",ans);
}
