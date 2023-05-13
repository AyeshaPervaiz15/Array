#include <stdio.h>
#include <stdlib.h>
void input(float [],int);
int main()
{
   int i;
   float marks[10];
   input (marks,10);
   for(i=0;i<=10;i++)
   {
       printf("%f\n",marks[i]);
   }
}
void input(float n[], int size)
{
    int i;
    for (i=0;i<=10;i++)
    {
        printf("Enter marks[%d]",i);
        scanf ("%f",&n[i]);
    }
}//end of input()
