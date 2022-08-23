#include <stdio.h>

struct Player
{
    char name[50];
    int score;
};

int main()
{
    struct Player arr[2];

    FILE *fptr;
    fptr = fopen("student.bin", "rb");
    if (fptr == NULL)
    {
        printf("Error!");
        // exit(1);
    }

    // read from file - all structure at once in an array
    fread(&arr, sizeof(struct Player), 2, fptr);

    printf("%s\n", arr[0].name);
    printf("%d\n", arr[0].score);

    printf("%s\n", arr[1].name);
    printf("%d\n", arr[1].score);

    fclose(fptr);
    return 0;
}
