//week13-3.cpp
//����۰��k��̤j���]��
#include <stdio.h>
int gcd(int a,int b)
{
    printf("�Ѥja: %d�A�ѤGb: %d\n",a,b);
    if (a==0) return b;//�J��0�A�t�@��O����
    if (b==0) return a;
    return gcd(b, a%b);
    //�Ѥj�ܦѤG�A�ѤT�ܦѤG
}

int main()
{
    printf("�п�J2��");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = gcd(a,b);
    printf("�L�̤j���]�ƬO:%d\n",ans);
}
