#include <stdio.h>

int main(void) 
{
    char arr[10];
    char *target = nullptr;
    char *find = nullptr;

    for (target = arr; target < arr + 10; target++)
        scanf("%c", target);


    char maxChar  = '\0';
    int  maxCount = 0;

    for (target = arr; target < arr + 10; target++) {
        int cnt = 0;

        for (find = arr; find < arr + 10; find++) {
            if (*target == *find)
                cnt++;
        }

        if (cnt > maxCount) {
            maxCount = cnt;
            maxChar  = *target;
        }
    }

    printf("%c %d\n", maxChar, maxCount);
    return 0;
}
