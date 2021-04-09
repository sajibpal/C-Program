#include <stdio.h>
#include <stdlib.h>

int main()
{int index, marks;
printf("enter the value of number");
scanf("%d", &marks);
index=marks/10;
switch(index){
case 10:
case 9:
case 8:
printf("first division");
break;
case 7:
printf("second division");
break;
case 6:
printf("third division");
break;
defoult:
printf("faill division");
break;

}

    return 0;
}
