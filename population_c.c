#include <stdio.h>

int starting = 0;
int ending = 0;

int start();
int end();

int main(void)
{
    int years = 0;
    starting = start();
    ending = end();

    while (starting < ending)
    {
        int born = starting / 3;
        int pass = starting / 4;
        starting -= pass;
        starting += born;
        years += 1;
    }
    printf("Years: %i", years);
}

int start()
{
    int s = 0;
    while (s < 9)
    {
        printf("Starting population: ");
        scanf("%i", &s);
        if (s < 9)
        {
            printf("Must be higher than 9\n");
        }
        else
        {
            return s;
        }
    }
    
}

int end()
{
    int endp = 0;
    while (endp < starting)
    {
        printf("Ending population: ");
        scanf("%i", &endp);
        if (endp < starting)
        {
            printf("Must be higher than the starting\n");
        }
        else
        {
            return endp;
        }
    }
}