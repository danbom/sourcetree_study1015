#include <stdio.h>

// git study를 위해 소스코드 변경하기

int main(){
    int A,B,C,s;

    scanf("%d %d %d", &A, &B, &C);
    if (B >= C)
    {
        printf("-1");
        return 0;
    }
    // 변경 sold(손익분기점) -> s
    s = A/(C-B)+1;

    if (s<=0) printf("-1");
    else printf("%d",s);
}