#include <stdio.h>
int main()
{
int marks,grade;
printf("enter the marks:");
scanf("%d",&marks);
grade=marks/10;
switch(grade){
    case 10:
    printf("the grade of the student is A");
    break;

    case 9:
    printf("the grade of the student is B");
    break;

    case 8:
    printf("the grade of the student is C");
    break;

    case 7:
    printf("the grade of the studentis D");
    break;

    case 6:
    printf("the grade of the student is F");
    break;

}
return 0;


    }
   
        
   