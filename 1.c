#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_STUDENTS 100
struct student{
  int id;
  char name[20];
  int roll;
  int class;
};
void removeStudent()
{
  int id,i,j;
  printf("Enter the id to be removed");
  scanf("%d",&id);
  for (i=0;i<counter;i++)
  {
    if(list[i].id==id)
    {
      for (j=i-1;j<counter;j++)
        {
        list[j-1]=lis[j];
      }
      counter--;
      printf("The student has been removed.")
      return;
    }
  }
  printf("the student with that id doesn't exists");
}
void menu()
{
  printf("Options for the edit.");
  printf("1. Add new student");
  printf("2. remove new student");
  printf("3. alter the student id");
  printf("4. display student record");
  printf("5. exit.");
  printf("Enter the options from 1 to 5.");
}
void main()
{
  int choice;
  menu();
  while (1) {
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
      registerStudent();
      break;
      case 2:
      removeStudent();
      break;
      case 3:
      alterStudent();
      break;
      case 4:
      displayStudent();
      break;
      case 5:
      exit();
      break;
      default:
      printf("Invalid entry.");
      break;
    }
  }
  return 0;
}
