#include <stdio.h>

int main(void) 
{
    int a[20], b[20];
    int N=0;
    int *front = nullptr;
    int *back  = nullptr;

    scanf("%d", &N);

    for (front = a; front < a + N; front++)
        scanf("%d", front);

    for (back = b; back < b + N; back++)
        scanf("%d", back);

    front = a;
    back  = b + N - 1;

    while (front < a + N) {
        printf(" %d", *front + *back);
        front++;
        back--;
    }

    return 0;
}
