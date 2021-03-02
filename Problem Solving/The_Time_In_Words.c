#include<stdio.h>
#include<string.h>
void hr1()
{
    printf("one");
}
void hr2()
{
    printf("two");
}
void hr3()
{
    printf("three");
}
void hr4()
{
    printf("four");
}

    void hr5(){

    printf("five");
}
void hr6()
{
    printf("six");
}
void hr7()
{
    printf("seven");
}
void hr8()
{
    printf("eight");
}
void hr9()
{
    printf("nine");
}
void hr10()
{
    printf("ten");
}
void hr11()
{
    printf("eleven");
}
void hr12()
{
    printf("twelve");
}
void hr(int h)
{

    switch(h)
         {
             case 1:hr1();
                break;
             case 2: hr2();
                    break;
             case 3: hr3();
             break;
             case 4: hr4();
             break;
             case 5: hr5();
             break;
             case 6: hr6();
             break;
             case 7: hr7();
             break;
             case 8: hr8();
             break;
             case 9: hr9();
             break;
             case 10: hr10();
             break;
             case 11: hr11();
             break;
             case 12: hr12();
             break;
         }
}
int main()
{
    int h,m;

    scanf("%d",&h);
     scanf("%d",&m);

     switch(m)
     {
     case 00:
         hr(h);
         printf(" o' clock");
         break;
     case 15:
          printf("quarter past ");
         hr(h);
        break;
     case 01:
         printf("one minute past ");
         hr(h);
        break;
     case 02:
         printf("two minute past ");
         hr(h);
        break;
        case 03:
         printf("three minute past ");
         hr(h);
        break;
         case 04:
         printf("four minute past ");
         hr(h);
        break;
                 case 05:
         printf("five minute past ");
         hr(h);
        break;
                 case 06:
         printf("six minute past ");
         hr(h);
        break;
                 case 07:
         printf("seven minute past ");
         hr(h);
        break;
                 case 8:
         printf("eight minute past ");
         hr(h);
        break;
                 case 9:
         printf("nine minute past ");
         hr(h);
        break;
         case 10:
         printf("ten minutes past ");
         hr(h);
        break;
 case 11:
         printf("eleven minutes past ");
         hr(h);
        break;
         case 12:
         printf("twelve minutes past ");
         hr(h);
        break;
         case 13:
         printf("thirteen minutes past ");
         hr(h);
        break;
         case 14:
         printf("fourteen minutes past ");
         hr(h);
        break;
         case 16:
         printf("sixteen minutes past ");
         hr(h);
        break;
         case 17:
         printf("seventeen minutes past ");
         hr(h);
        break;
         case 18:
         printf("eighteen minutes past ");
         hr(h);
        break;
         case 19:
         printf("nighteen minutes past ");
         hr(h);
        break;
         case 20:
         printf("twenty minutes past ");
         hr(h);
        break;
        case 21:
         printf("twenty one minutes past ");
         hr(h);
        break;
        case 22:
         printf("twenty two minutes past ");
         hr(h);
        break;
        case 23:
         printf("twenty three minutes past ");
         hr(h);
        break;
        case 24:
         printf("twenty four minutes past ");
         hr(h);
        break;
        case 25:
         printf("twenty five minutes past ");
         hr(h);
        break;
         case 26:
         printf("twenty six minutes past ");
         hr(h);
        break;
         case 27:
         printf("twenty seven minutes past ");
         hr(h);
        break;
         case 28:
         printf("twenty eight minutes past ");
         hr(h);
        break;
         case 29:
         printf("twenty nine minutes past ");
         hr(h);
        break;
         case 30:
            printf("half past ");
            hr(h);
            break;
         case 31:
            printf("twenty nine minutes to ");
            hr(h+1);
            break;
                     case 32:
            printf("twenty eight minutes to ");
            hr(h+1);
            break;
            case 33:
            printf("twenty seven minutes to ");
            hr(h+1);
            break;
            case 34:
            printf("twenty six minutes to ");
            hr(h+1);
            break;
            case 35:
            printf("twenty five minutes to ");
            hr(h+1);
            break;
            case 36:
            printf("twenty four minutes to ");
            hr(h+1);
            break;
            case 37:
            printf("twenty three minutes to ");
            hr(h+1);
            break;
            case 38:
            printf("twenty two minutes to ");
            hr(h+1);
            break;
            case 39:
            printf("twenty one minutes to ");
            hr(h+1);
            break;
            case 40:
            printf("twenty minutes to ");
            hr(h+1);
            break;
            case 41:
                printf("nighteen minutes to " );
                hr(h+1);
                break;
                case 42:
                printf("eighteen minutes to " );
                hr(h+1);
                break;
                case 43:
                printf("seventeen minutes to " );
                hr(h+1);
                break;
                case 44:
                printf("sixteen minutes to " );
                hr(h+1);
                break;
                case 45:
                printf("quarter to " );
                hr(h+1);
                break;
                case 46:
                printf("fourteen minutes to " );
                hr(h+1);
                break;
                case 47:
                printf("thirteen minutes to " );
                hr(h+1);
                break;
                case 48:
                printf("twelve minutes to " );
                hr(h+1);
                break;
                case 49:
                printf("eleven minutes to " );
                hr(h+1);
                break;
                case 50:
                printf("ten minutes to " );
                hr(h+1);
                break;
                case 51:
                printf("nine minutes to " );
                hr(h+1);
                break;
                case 52:
                printf("eight minutes to " );
                hr(h+1);
                break;

                case 53:
                printf("seven minutes to " );
                hr(h+1);
break;
                case 54:
                printf("six minutes to " );
                hr(h+1);
                break;

                case 55:
                printf("five minutes to " );
                hr(h+1);
                break;

                case 56:
                printf("four minutes to " );
                hr(h+1);
                break;

                case 57:
                printf("three minutes to " );
                hr(h+1);
                break;

                case 58:
                printf("two minutes to " );
                hr(h+1);
                break;

                case 59:
                printf("one minutes to " );
                hr(h+1);
                break;



     }


    return 0;
}
