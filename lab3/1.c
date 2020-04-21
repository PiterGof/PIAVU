#include <stdio.h>
#include <malloc.h>

int main()
{
    FILE *input, *output;
    int n, count = 0, i = 0;
    int *array = NULL;

    input = fopen("input.txt", "r");

    while (fscanf(input, "%i", &n) != EOF)
    {
        array = (int*)realloc(array, (i + 2) * sizeof(int));
        array[i++] = n;
    }

    for (int j = 0; j < i; j++)
    {
        if (array[j] == 0)
        {
            count++;
        }
    }
    
    array[i] = count;
    
    output = fopen("output.txt", "w");
    for (int j = 0; j<i+1; j++)
    {
        fprintf(output, "%i ", array[j]);
    }

    fclose(input);
    fclose(output);
    return 0;
}