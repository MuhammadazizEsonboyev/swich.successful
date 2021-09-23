#include <stdio.h>
#include <stdlib.h>

int main(){


   int grade;
   printf(" 1996 dan 2003 gacha bolgan tug'ulgan  yilingizni kiriting: ");
        scanf("%d ", &grade);
   switch(grade) {
      case 1996 :
         printf("1996 demak siz 25 yoshdasiz " );
         break;
      case 1997 :
         printf("1997 demak siz 24 yoshdasiz" );
         break;
      case 1998 :
         printf("1998 demak siz 23 yoshdasiz" );
         break;
      case 1999 :
         printf("1999 demak siz 22 yoshdasiz" );
         break;
      case 2000 :
         printf("2000 demak siz 21 yoshda ekansiz" );
         break;
      case 2001 :
         printf("2001 demak siz 20 yoshda ekansiz" );
         break;
      case 2002 :
         printf("2002 demak siz 19 yoshda ekansiz" );
         break;
      default :
         printf("Notog'ri raqam kiritilgan Error!" );
   }
   
   return 0;
}
