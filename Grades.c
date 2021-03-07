//program to generate grade in accordance with marks entered
#include<stdio.h>
int main()
{
  float marks;
  char grade;
  printf("Enter Your Marks :");
  scanf("%f",&marks);
  if (marks>84 && marks<101)
  {
    grade='A';
    printf("\nGrade Obtained :%c",grade);
  }
  else if (marks>69 && marks<85)
  {
    grade='B';
    printf("\nGrade Obtained :%c",grade);
  }
  else if (marks>54 && marks<70)
  {
    grade='C';
    printf("\nGrade Obtained :%c",grade);
  }
  else if (marks>39 && marks<55)
  {
    grade='D';
    printf("\nGrade Obtained :%c",grade);
  }
  else if (marks>-1 && marks<40)
  {
    grade='E';
    printf("\nGrade Obtained :%c",grade);
  }
  else 
  {
    printf("Invalid Marks Entered");
  }
  return 0;
}
