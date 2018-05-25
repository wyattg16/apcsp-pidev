#include <stdio.h>

int main()
{
        for (int i = 0; i < 100; i++)
        {
            if (i > 100)
                break;

            else if (i % 2 == 0)
                printf("%d is even\n", i);
               
            else
                printf("%d is odd\n", i);
              
        }
}
