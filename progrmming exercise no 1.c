#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("Enter the temerature in degrees F\n");
    scanf("%f", &F);

    {
        printf("%f degres F  = %F degrees C\n",
               C =(F - 32.0) * 5.0 / 9.0);
            F = F + 10;
    }
    return 0;
}
