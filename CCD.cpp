#include <stdio.h>
 #include <time.h>
 #include<string.h>

int main()
{
    int b[10],e[10],r,choice;
    char name;
     char a[20],sak[20]="nitya";
    time_t t;
     time(&t);

    printf("                              WELCOME TO CAFE COFFEE DAY\n                               %s\n\n  " ,ctime(&t) );
    printf("Hello MAM/SIR,\n\n  please select your FAVORITE BEVERAGES \n\n\n  ");
    printf("HOT COFFEE\n  SELECTION\n\n  ");
    printf("1:Expresso                              115Rs.\n  2:Classic Filter Coffee                 126Rs.\n  3:Cappuccino[Reg/king]                  126/144Rs.\n  ");
    printf("4:Cafe latte[Reg./King]                 134/150Rs.\n  5:Macchaito                             137Rs.\n  6:Cafe Americano                        137Rs.\n  7:Coconut Milk Latte[Reg./king]         149/178RS.\n  ");
    printf("8:Toffee Cappuccino[Reg./King]          149/178Rs.\n  9:Vanilla Cappuccino[Reg./King]         149/178Rs.\n  10:Cafe mocha                           155Rs.\n  ");
    printf("11:Inverted Cappuccino                  155Rs.\n  12:Flat White                           155Rs.\n  13:Vanilla Latte[Reg./King]             161/183Rs.\n  14:Toffee Latte[Reg./King]              161/183Rs.\n\n  ");
    printf("please give your order ...enter number which is written before your choice\n\n  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Expresso......  1\n  amount=115Rs.\n  GST=17Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Expresso......  1\n  amount=115Rs.\n  GST=17Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=132.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
        case 2:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Classic Filter Coffee.....  1\n  amount=126Rs.\n  GST=19Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Classic Filter Coffee......  1\n  amount=126Rs.\n  GST=19Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=155.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
break;
       case 3:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Cappuccino[Reg/king]......  1\n  amount=126Rs.\n  GST=18Rs.\n\n  discount=100%%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Cappuccino[Reg/king]......  1\n  amount=126.\n  GST=18Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=144.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 4:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Cafe latte[Reg./King] ......  1\n  amount=134Rs.\n  GST=21Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Cafe latte[Reg./King] ......  1\n  amount=134Rs.\n  GST=21Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=155.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
break;
        case 5:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Macchaito ......  1\n  amount=137Rs.\n  GST=22Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Macchaito ......  1\n  amount=137.\n  GST=22Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=159.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 6:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Cafe Americano ......  1\n  amount=137Rs.\n  GST=22Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Cafe Americano ......  1\n  amount=137.\n  GST=22Rs.\n\n  discount=0%%   ___________________TOTAL amount to pay=159.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
        case 7:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Coconut Milk Latte[Reg./king] ......  1\n  amount=149Rs.\n  GST=24Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Coconut Milk Latte[Reg./king] ......  1\n  amount=149.\n  GST=24Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=173.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 8:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Toffee Cappuccino[Reg./King] ......  1\n  amount=149Rs.\n  GST=24Rs.\n\n  discount=100%%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Toffee Cappuccino[Reg./King]......  1\n  amount=149.\n  GST=24Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=173.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
break;
       case 9:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Vanilla Cappuccino[Reg./King] ......  1\n  amount=149Rs.\n  GST=24Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Vanilla Cappuccino[Reg./King] ......  1\n  amount=149.\n  GST=24Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=173.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 10:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Cafe mocha ......  1\n  amount=149Rs.\n  GST=24Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Cafe mocha ......  1\n  amount=149.\n  GST=24Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=173.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
break;
       case 11:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Inverted Cappuccino ......  1\n  amount=155Rs.\n  GST=27Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Inverted Cappuccino ......  1\n  amount=155.\n  GST=27Rs.\n\n  discount=0 %% ___________________TOTAL amount to pay=182.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 12:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Flat White......  1\n  amount=155Rs.\n  GST=27Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Flat White ......  1\n  amount=155.\n  GST=27Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=182.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
        case 13:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Vanilla Latte[Reg./King] ......  1\n  amount=161Rs.\n  GST=31Rs.\n\n  discount=100 %%  ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Vanilla Latte[Reg./King]  ......  1\n  amount=161.\n  GST=31Rs.\n\n  discount=0 %% ___________________TOTAL amount to pay=192.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;
       case 14:
        printf("  please enter your good name ");
       scanf("%s",&a);
       if(strcmp(a,sak)==0)
       {printf("\n  MAM it's our pleasure to serve you     \n  ALL THE BEVERAGES ARE EXCLUSIVELY FREE FOR YOU, Just in any exchage of a sweet smile.\n\n  Please take your bill\n\n  CAFE COFFEE DAY             %s\n\n " ,ctime(&t)  );
        printf(" Toffee Latte[Reg./King]  ......  1\n  amount=161Rs.\n  GST=31Rs.\n\n  discount=100 %% ___________________TOTAL amount to pay=0.00RS.\n\n  THANKING YOU.........!\n\n  ");
       }
        else
       {printf("\n  pay the amount written on your bill\n  Please take your bill:......\n  enjoy you beverage.....HAVE A NICE DAY\n\n  ");
       printf("CAFE COFFEE DAY             %s\n\n  " ,ctime(&t));
               printf("Toffee Latte[Reg./King]   ......  1\n  amount=161.\n  GST=31Rs.\n\n  discount=0 %%  ___________________TOTAL amount to pay=192.00RS.\n\n  THANKING YOU.........!\n\n  ");

       }
       break;







    }
    printf("                                     In HONOUR of yours\n                                                         -Suruchi Srivastava:)");
   // getch();
}
