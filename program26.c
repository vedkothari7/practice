#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello GTU");

    fclose(fp);

    return 0;
}