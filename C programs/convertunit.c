#include<stdio.h>
int main()
{
    int c;
    printf("enter the choice for unit to convert :\n 1 for currency\n 2 for temperature\n 3 for weight\n 4 for length\n 5 for time\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("enter your choice \n 1 for Rupee to dollar \n 2 for dollar to rupee\n");
        int m;
        double amt,camt=1.0;
        scanf("%d",&m);
        switch (m)
        {
        case 1:
            printf("enter value to change to dollar:");
            scanf("%lf",&amt);
            camt=amt/70;
            printf("The converted amount is : $ %lf \n",camt);
            break;
        case 2:
            printf("enter amount to change into to Rupee:");
            scanf("%lf",&amt);
            camt=amt*70;
        printf("The converted amount is : %lf Ruppee \n",camt);
            break;
        default:
            printf("The choice entered is wrong\n");
            break;
        }
        
        break;
    case 2:
        printf("enter your choice \n 1 for celsius to farhrenheit \n 2 for farhrenheit to celsius\n");
        int t;
        double val;
        scanf("%d",&t);
        switch (t)
        {
        case 1:
            printf("enter value to change to farhrenheit:");
            scanf("%lf",&val);
            val=(val*9/5)+32;
            printf("The converted value is :%.2f \n",val);
            break;
        case 2:
            printf("enter value to change to celsius:");
            scanf("%lf",&val);
            val=(val-32)*5/9;
            printf("The converted value is :%.2f \n",val);
            break;
        default:
            printf("The choice entered is wrong\n");
            break;
        }
        break;
    case 3:
        printf("enter your choice \n 1 for Kilo Gram to Gram \n 2 for Gram to Mili gram\n 3 for Kilo gram to mili gram \n");
        printf(" 4 for gram to kilo gram\n 5 for mili gram to kilo gram \n 6 for mili gram to gram\n");
        int w;
        double value;
        scanf("%d",&w);
        switch (w)
        {
        case 1:
            printf("enter value to change kg to Gram :");
            scanf("%lf",&value);
            value = value*1000;
            printf("The converted value is :%.4f g\n",value);
            break;
        case 2:
            printf("enter value to change gram to mili gram :");
            scanf("%lf",&value);
            value=value*1000;
            printf("The converted value is :%.4f mg\n",value);
            break;
        case 3:
            printf("enter value to change to kg to miligram");
            scanf("%lf",&value);
            value=value*1000*1000;
            printf("the converted value is :%.4f mg\n",value);
            break;
        case 4:
            printf("enter value to change Gram to kg :");
            scanf("%lf",&value);
            value = value/1000;
            printf("The converted value is :%.4f kg\n",value);
            break;
        case 5:
            printf("enter value to change mili gram to gram :");
            scanf("%lf",&value);
            value=value/1000;
            printf("The converted value is :%.4f g\n",value);
            break;
        case 6:
            printf("enter value to change to miligram to kg :");
            scanf("%lf",&value);
            value=(value/1000)/1000;
            printf("the converted value is :%.4f kg\n",value);
            break;
        default:
            printf("The choice entered is wrong\n");
            break;
        }
        break;
    case 4:
        printf("enter your choice \n 1 for Kilo meter to meter \n 2 for meter to Mili meter\n 3 for Kilo meter to mili meter \n");
        printf(" 4 for meter to kilo meter\n 5 for mili meter to kilo meter \n 6 for mili meter to meter\n");
        int l;
        double length;
        scanf("%d",&l);
        switch (l)
        {
        case 1:
            printf("enter length to change km to meter :");
            scanf("%lf",&length);
            length = length*1000;
            printf("The converted length is :%.4f m\n",length);
            break;
        case 2:
            printf("enter length to change meter to mili meter :");
            scanf("%lf",&length);
            length=length*1000;
            printf("The converted length is :%.4f mm\n",length);
            break;
        case 3:
            printf("enter length to change to km to milimeter");
            scanf("%lf",&length);
            length=length*1000*1000;
            printf("the converted length is :%.4f mm\n",length);
            break;
        case 4:
            printf("enter length to change meter to km :");
            scanf("%lf",&length);
            length = length/1000;
            printf("The converted length is :%.4f km\n",length);
            break;
        case 5:
            printf("enter length to change mili meter to meter :");
            scanf("%lf",&length);
            length=length/1000;
            printf("The converted length is :%.4f m\n",length);
            break;
        case 6:
            printf("enter length to change to milimeter to km :");
            scanf("%lf",&length);
            length=(length/1000)/1000;
            printf("the converted length is :%.4f km\n",length);
            break;
        default:
            printf("The choice entered is wrong\n");
            break;
        }
        break;
    case 5:
        printf("enter your choice \n 1 for Hours to minutes \n 2 for hours to Seconds\n 3 for minutes to seconds \n");
        printf(" 4 for Seconds to minutes\n 5 for minutes to hours \n 6 for seconds to hours\n");
        int ti;
        double time;
        scanf("%d",&ti);
        switch (ti)
        {
        case 1:
            printf("enter time to change hours to minutes :");
            scanf("%lf",&time);
            time = time*60;
            printf("The converted time is :%.2f min\n",time);
            break;
        case 2:
            printf("enter time to change hours to seconds :");
            scanf("%lf",&time);
            time=time*60*60;
            printf("The converted time is :%.2f sec\n",time);
            break;
        case 3:
            printf("enter time to change to min to sec :");
            scanf("%lf",&time);
            time=time*60;
            printf("the converted time is :%.2f sec\n",time);
            break;
        case 4:
            printf("enter time to change seconds to minutes :");
            scanf("%lf",&time);
            time = time/60;
            printf("The converted time is :%.2f min\n",time);
            break;
        case 5:
            printf("enter time to change mili min to hours :");
            scanf("%lf",&time);
            time=time/60;
            printf("The converted time is :%.2f hours\n",time);
            break;
        case 6:
            printf("enter time to change to sec to hours :");
            scanf("%lf",&time);
            time=(time/60)/60;
            printf("the converted time is :%.2f hours\n",time);
            break;
        default:
            printf("The choice entered is wrong\n");
            break;
        }
        break;
        break;
    default:
        printf("The choice entered is not defined in converter\n");
        break;
    }
    return 0;
}