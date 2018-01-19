#include <stEnter an integer: ");
    scanf("%d", &number);
>dio.h
    printf("
void main()
{
    int number;

    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
