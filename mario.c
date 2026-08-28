#include <stdio.h>

int main(void)
{
    // For each row
    for (int i = 0; i < 3; i++)
    {
        // For each column
        for (int j = 0; j < 3; j++)
        {
            // Print one brick
            printf("#");
        }
        
        // Print newline after finishing 1 row of bricks
        printf("\n");
    }
}