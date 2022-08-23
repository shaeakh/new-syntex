#include <stdio.h>

struct Player
{
  char name[50];
  int score;
};

int main()
{
  // char name[50];
  int marks, i, num;

  struct Player raihan = {"raihan", 60};
  struct Player partha = {"Partha", 40};
  struct Player arr[2];

  //    printf("Enter number of students: ");
  //    scanf("%d", &num);

  FILE *fptr;
  fptr = fopen("student.bin", "wb");
  if (fptr == NULL)
  {
    printf("Error!");
    // exit(1);
  }

  // writing one structure at a time in a file

  fwrite(&raihan, sizeof(struct Player), 1, fptr);
  fwrite(&partha, sizeof(struct Player), 1, fptr);

  fclose(fptr);
  return 0;
}
