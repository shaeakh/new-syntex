#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file = fopen("fileDemo.txt", "r");
    char name[50];
    int age,m;
    //scanf("%s", &name);
    //scanf("%d", &age);

    fscanf(file, "%s\n ", &name);
    fscanf(file, "%d", &age);
    scanf("%d",&m);

    printf("%s\n", name);
    printf("%d m= %d\n", age,m);

    fclose(file);
    return 0;

}
