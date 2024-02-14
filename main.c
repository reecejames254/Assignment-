#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0;
    while(a <= 100)
    {
        printf("%f kilometers KM = %f miles M C\n",
               a, (a - 0.0) * 5.0 / 8.0);
            a = a + 1;
    }
    return 0;
}
