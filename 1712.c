#include <stdio.h>

// git study�� ���� �ҽ��ڵ� �����ϱ�

int main(){
    int A,B,C,s;

    scanf("%d %d %d", &A, &B, &C);
    if (B >= C)
    {
        printf("-1");
        return 0;
    }
    // ���� sold(���ͺб���) -> s
    s = A/(C-B)+1;

    if (s<=0) printf("-1");
    else printf("%d",s);
}