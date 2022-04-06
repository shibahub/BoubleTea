#include <stdio.h>
#define h 100
#define f 50
#define tw 20
#define t 10
#define fi 5
int main ()
{
    int base, flavors, number, size, tea, toppy=0, sum=0,p,sum1=0;
     int hun,fif,twen,ten,five,show,change=0,j,k;
    char pay;
    int medium[6]={30,30,30,45,40,35};
    int large[6]={40,40,40,55,50,45};
    int toppings[4]={5,15,10,10};
    int taste[4]={0,5,5,10};
    int stock[4]={2,5,1,4},ts=0;
    int s,x=1,i=0;
    int M=0,l=1,z=0,mac[5]={5,5,5,5,5};
    for (i=0;i<50;i++)
    {
        printf ("-");
    }
    printf("\n . .\n");
    printf(" | |\n");
    printf(":-----:\n");
    printf("|=====|\n");
    printf("|oo8oo|\n");
    printf("|oo8oo|         welcome to \n");
    printf("'-----'         Bubble tea Cafe :)\n");
    for (i=0;i<50;i++)
    {
        printf ("-");
    }
    // menu
    printf ("\n\n%-30s %20c %10c\n\n","MENU",'M','L');
    printf ("%-30s %20d %10d\n","0 : Black tea",30,40);
    printf ("%-30s %20d %10d\n","1 : Green tea",30,40);
    printf ("%-30s %20d %10d\n","2 : Thai tea",30,40);
    printf ("%-30s %20d %10d\n","3 : Passin fruit green tea",45,55);
    printf ("%-30s %20d %10d\n","4 : taro smoothie tea",40,50);
    printf ("%-30s %20d %10d\n\n","5 : Peach tea",35,45);
    // flavors
    printf ("%-30s\n\n","Flavors");
    printf ("%-30s %20c %d\n","0 : Nomal",'+',0);
    printf ("%-30s %20c %d\n","1 : Milk",'+',5);
    printf ("%-30s %20c %d\n","2 : Honey",'+',5);
    printf ("%-30s %20c %d\n\n","3 : Brown sugar",'+',10);
    //Toppings
    printf ("%-30s\n\n","Toppings");
    printf ("%-30s %20c %2d (%d unit left)\n","0 : Boba",'+',05,toppings[0]);
    printf ("%-30s %20c %2d (%d unit left)\n","1 : Popping boba",'+',15,toppings[1]);
    printf ("%-30s %20c %2d (%d unit left)\n","2 : Jelly",'+',10,toppings[2]);
    printf ("%-30s %20c %2d (%d unit left)\n\n","3 : Pudding",'+',10,toppings[3]);
for (i=0;i<50;i++)
    {
        printf ("-");
    }
    printf("\nPlease select your base tea (enter 'q' to exit): ");
    scanf ("%d", &base);
    
    if (base<0 || base>5)
    {
        printf("Sorry, the selected item is not available.");
        do {
            printf("\nPlease select your base tea (enter 'q' to exit): ");
            scanf("%d", &base);
            if (base<0 || base>5)
            {
                printf("Sorry, the selected item is not available.");
            }
        }
        while (base<0 || base>5);
    }
    //printf("Please select the size medium (1) or large (2)?: ");
    do
    {
        printf("please select your size (medium=1 : large=2) : ");
        scanf("%d",&size);
        if(size<1 || size>2)
        {
            printf("sorry, the select item is not available.\n");
        }
    }
    while(size<=0 || size>=3);
    if (size==1)
    {
        tea = medium[base];
     //   printf("%d",medium[base]);
    }
    else if (size==2)
    {
        tea = large[base];
       // printf("%d",large[base]);
    }
    do
    {
        printf("Please select your flavors (enter 'q' to exit): ");
        scanf("%d", &flavors);
        if(flavors<0 || flavors>3)
        {
            printf("sorry, the select item is not available.\n");
        }
    }
    while(flavors<0 || flavors>3);
            taste[flavors];
           // printf ("%d",taste[flavors]);    
             do{
    printf("How many toppings do you like (maximum 2) (enter 'q' to exit): ");
    scanf ("%d", &number);
    if (number<0||number>2)
    printf ("Sorry , ");
    }while (number<0||number>2);
    if (number==0)
    {
        int s=0;
        s=ts;
    }
    if (number==1)
    {
        do
        {
            printf ("Please select your first topping : ");
            scanf ("%d",&number);
            if (stock[number]<=0)
            {
                printf("Sorry, the topping you chose is out of stock,");   
            }
        if (number<0||number>3)
        printf("Sorry,");
        //printf("%d ",stock[number]);
        }while (number<0||number>3||stock[number]<=0);
        toppings[number];
        ts+=toppings[number];
    }
    if (number==2)
    {
        do
        {
            printf ("Please select your first topping : ");
            scanf ("%d",&number);
            if (stock[number]<=0)
            {
                printf("Sorry, the topping you chose is out of stock,");   
            }
        if (number<0||number>3)
        printf("Sorry,");
        //printf("%d ",stock[number]);
        }while (number<0||number>3||stock[number]<=0);
        //printf("%d ",toppings[number]);
        ts+=toppings[number];
        do
        {
            printf ("Please select your secound topping : ");
            scanf ("%d",&number);
            if (stock[number]<=0)
            {
                printf("Sorry, the topping you chose is out of stock,");   
            }
        if (number<0||number>3)
        printf("Sorry,");
        //printf("%d ",stock[number]);
        }while (number<0||number>3||stock[number]<=0);
        //printf("%d ",toppings[number]);
        ts+=toppings[number];
       // printf("%d",t);
    }
sum=sum+tea+taste[flavors]+ts;
    printf ("Total price: %d $",sum);
    printf ("\nAre you ready to pay (y=1/n=2)?: ");
    scanf(" %c", &pay);
    //end ask
    if (pay=='y')
    {
          //int sum=0,i=0,hun,fif,twen,ten,five,price=60,show,change,j,k;
          int i=0,price;
    printf ("Machine cash : (100=%d, 50=%d, 20=%d, 10=%d, 5=%d)\n",mac[0],mac[1],mac[2],mac[3],mac[4]);
    //printf ("%d",sum);
    while (i==0)
    {
        printf ("Please insert cash (enter 'q' to exit) : \n");
        printf ("100 : ");
        scanf ("%d",&hun);
         printf ("50 : ");
        scanf ("%d",&fif);
         printf ("20 : ");
        scanf ("%d",&twen);
         printf ("10 : ");
        scanf ("%d",&ten);
         printf ("5 : ");
        scanf ("%d",&five);
        price = (hun*h)+(fif*f)+(tw*twen)+(ten*t)+(fi*five);
        printf("You insert : %d $\n",price);
        if (price>=sum)
        {
        i=i+1;
        }
        else 
        {
            show =sum-price;
            i=0;
            printf ("Not enough! insert %d more\n",show);
        }
    }
    for (j=1;j<=hun;j++)
    {
        mac[0]=mac[0]+1;
    }
    for (j=1;j<=fif;j++)
    {
        mac[1]=mac[1]+1;
    }
    for (j=1;j<=twen;j++)
    {
        mac[2]=mac[2]+1;
    }
    for (j=1;j<=ten;j++)
    {
        mac[3]=mac[3]+1;
    }
    for (j=1;j<=five;j++)
    {
        mac[4]=mac[4]+1;
    }
    change=price-sum;
    printf ("Machine cash : (100=%d, 50=%d, 20=%d, 10=%d, 5=%d)",mac[0],mac[1],mac[2],mac[3],mac[4]);
   // printf ("\nChange : %d ",change);
    //change
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    for(i=0;i<mac[0];i++)
    {
        if (change>=100)
        {
            change=change-100;
            c1+=1;
        }
    }
        for(i=0;i<mac[1];i++)
    {
        if (change>=50)
        {
            change=change-50;
            c2+=1;
        }
    }
        for(i=0;i<mac[2];i++)
    {
        if (change>=20)
        {
            change=change-20;
            c3+=1;
        }
    }
        for(i=0;i<mac[3];i++)
    {
        if (change>=10)
        {
            change=change-10;
            c4+=1;
        }
    }
        for(i=0;i<mac[4];i++)
    {
        if (change>=5)
        {
            change=change-5;
            c5+=1;
        }
    }
    printf("\nThis is your change :  ");
    printf ("\n100 : %d \n",c1);
    printf ("50  : %d \n",c2);
    printf ("20  : %d \n",c3);
    printf ("10  : %d \n",c4);
    printf ("5   : %d \n",c5);
    int tungton=0;
    tungton=tungton+(c1*100)+(c2*50)+(c3*20)+(c4*10)+(c5*5);
    printf ("This is your tungton : %d $",tungton);
    printf ("\nThank you!!");
    }

        
}