#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
 int x,z;
 char a,y,n;
 int p=0,r=0,q=0;
void main()

{
     printf("\n\n\n\n\n");
printf("\t\t//////////////////     KAUN BANEGA CROREPATI       /////////////////////////\n");
char str[10];
FILE *fp;
fp=fopen("C:\\Users\\Dell\\Desktop\\test.txt","r");
if(fp==NULL)
{
    printf("Error");
}
while(fgets(str,9,fp)!=NULL)
{
    printf("%s",str);
}
fclose(fp);


printf("\n\n\n\n");
printf("\t\t                              PLAY                                \n");
a=getch();
system("cls");
if(a=='p')
{


while(1)
{printf("\n\n\n                                      LEVEL 1");
    printf("\n\n\nQ1 : What is the capital of Australia\n");
    printf("\n\n1) Melbourne\t2) Sydney\n\n3) Canberra\t4) Perth");
   while(p==0)
  {
    printf("\n\nDo you want to use life line ? (Y,N)\n");
    a=getch();

    if(a=='y'||a=='Y')
    {   printf("\nQ1 : What is the capital of Australia\n");
        printf("\n\n\t\t2) Sydney\n\n3) Canberra");
        p++;
    }

    break;
  }

   if(a=='N'||a=='n'||p<2)
{
    printf("\n\nYour answer \n");
    scanf("\n%d",&x);
    system("cls");
}
    if(x==3)
    {
        printf("\n\n\n\tRight answer!!!!!\n\t\t                                                               Won = 1,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer !!! Won Nothing");
        break;

    }

    printf("\n\nQ2 : In Which year Pakistan won the World Cup??");
    printf("\n\n1) 1990\t2) 1992\n\n3) 1991\t4) 1993");
   while(p==0)
   {
    printf("\n\nDo you want to use life line ? (Y,N)\n");
    a=getch();

     if(a=='y'||a=='Y')
     {
       printf("\nQ2 : In Which year Pakistan won the World Cup ?");
       printf("\n\n1) 1990\t2) 1992");

       p++;
      }
     break;
     }
      if(a=='n'||a=='N'||p<2)
       printf("\n\nYour answer\n");
       scanf("%d",&x);
       system("cls");

    if(x==2)
    {
        printf("\n\n\n\tRight answer!!!!!\n\t\t                                                                 Won 5,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer !!! Won Nothing");
    break;
    }


    printf("\n\nQ3 : How many seats are there in National Assembly Of Pakistan");
    printf("\n\n1) 342\t2) 352\n\n3) 362\t4) 372");
    while(p==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
        if(a=='y'||a=='Y')
    {
        printf("\n\nQ3 : How many seats are there in National Assembly Of Pakistan");
        printf("\n\n1) 342\t2) 352\n");
        p++;
    }
    break;
    }
    if(a=='n'||a=='N'||p<2)
    {
    printf("\n\nYour Answer\n");
    scanf("\n%d",&x);
    system("cls");
    if(x==1)
    {
        printf("\n\n\n\tRight answer \n\t\t                                                               Won = 10,000");
    }
    else
    {
        printf("\n\n\n\tWrong Answer                                                                      Won only = 1000");
        break;
    }
    printf("\n\nQ4 : The total area of Pakistan is ?");
    printf("\n\n1) 196,061\t2) 196,091\n\n3) 196,996\t4) 196,096");
    while(p==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
        if(a=='y'||a=='Y')
        {
        printf("\n\nQ4 : The total area of Pakistan is ????");
        printf("\n\n1) 196,061\n\n\t\t4) 196,096");
        p++;
        }
        break;
    }
    if(a=='n'||a=='N'||p<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==4)
    {
        printf("\n\n\n\tRight answer \t\t                                                                 Won = 20,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer                                                                      Won only 1000");
    break;
    }
    printf("\n\nQ5: Who was the first double century maker in ODI cricket \n");
    printf("\n\n1) Javed Miandad\t2) Zaheer Abbas\n\n3) Virender sehwag\t4) Sachin Tendulker");
    while(p==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
        if(a=='y'||a=='Y')
        {
            printf("\n\nQ5: Who was the first double century maker in ODI cricket \n");
            printf("\n\n1) Javed Miandad\n\n\t4) Sachin Tendulker");
            p++;
        }
        break;
    }
    if(a=='n'||a=='N'||p<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==4)
    {
        printf("\n\n\n\tRight answer \t\t\                                                                  Won = 40,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer                                                                      Won only 1000");
        break;
    }
    printf("\n\n\n                                    LEVEL   2");
    printf("\n\n\nQ6 : What is the chemical formula of Baking Soda ?");
    printf("\n\n1) Na2CO3\t2) NaHCO3\n\n3) NaCL2\t4) CaOCL2");
    while(q==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
            if(a=='y'||a=='Y')
            {
                printf("\nYou can give 2 answer of this question\n");
                printf("\nYour Answer\n");
                scanf("\n%d",&z);
                q++;
            }
            break;
    }
    if(a=='n'||a=='N'||q<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==2||z==2)
    {
        printf("\n\n\n\tRight answer \t\t                                                                 Won = 80,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer                                                                    Won 5,000");
        break;
    }
    printf("\n\nQ7 : How many times Nawaz Sharif is elected as a PRIME MINISTER OF PAKISTAN ?");
    printf("\n\n1) 2 times\t2) 3 times\n\n3) 4 times\t4) 5 times");
    while(q==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
     if(a=='y'||a=='Y')
     {
         printf("\nYou can give 2 answers\n");
         scanf("\n%d",&z);
        q++;
     }
     break;
    }
    if(a=='N'||a=='n'||q<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==2||z==2)
    {
        printf("\n\n\n\tRight answer \t\t                                                              Won = 160,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer                                                                 Won 5,000");
        break;
    }
    printf("\n\nQ8 : Lahore is situated near which river");
    printf("\n\n1) River Bias\t2) River Ravi\n\n3) River Indus\t4)River Sutluj");
    while(q==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
        if(a=='y'||a=='Y')
        {
            printf("\nYou can give 2 answers\n");
            printf("\nYour answer\n");
            scanf("\n%d",&z);
            q++;
        }
        break;
    }
    if(a=='n'||a=='N'||q<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==2||z==2)
    {
        printf("\n\n\n\tRight answer \t \t                                                             Won = 320,000");
    }
    else
    {
        printf("\n\n\n\tWrong answer                                                                 Won only = 5,000");
        break;
    }
    printf("\n\nQ9 : Largest Tea producing country is ?");
    printf("\n\n1) Nepal\t2) Afghanistan\n\n3) South Africa\t4) Brazil");
    while(q==0)
    {
        printf("\n\nDo u want to use life line(Y,N)\n");
        a=getch();
        if(a=='y'||a=='Y')
        {
            printf("\nYou can give 2 answers\n");
            scanf("\n%d",&z);
            q++;
        }
        break;
    }
    if(a=='n'||a=='N'||q<2)
    {
    printf("\nYour answer\n");
    scanf("\n%d",&x);
    }
    system("cls");
    if(x==4||z==4)
    {
        printf("\n\n\n\tRight answer \t\t                                                           Won = 640,000");
      }  else
        {
            printf("\n\n\n\tWrong answer \n                                                         Won only = 5,000");
            break;
        }
        printf("\nQ10 : Atomic experiment by Pakistan made at which location ?");
        printf("\n\n1) Chaklala\t2) Chagi\n\n3) Thar \t4) Chakwal");
        while(q==0)
        {
            printf("\n\nDo u want to use life line(Y,N)\n");
            a=getch();
            if(a=='y'||a=='Y')
            {
                printf("\nYou can give 2 answers\n");
                scanf("\n%d",&z);
                q++;
                if(x==2)
                {
                    printf("\n\n\n\tRight answer                                                    Won = 12,50,000");
                }
                else
                {
                    printf("\n\n\n\tWrong answer \n \t\t                                            Won only = 3,20,000");
                }
            }
            break;
        }
        if(a=='n'||a=='N'||q<2)
        {
        printf("\nYour answer\n");
        scanf("\n%d",&x);
        }
        system("cls");
        if(x==2||z==2)
        {
            printf("\n\n\n\tRight answer                                                            Won = 12,50,000");
        }
        else
        {
            printf("\n\n\n\tWrong answer                                                            Won only = 320,000");
            break;
        }
        printf("\n\n\n                          LEVEL   3");
        printf("\n\n\nQ11 : Football of FIFA World cup 2014 made by which country");
        printf("\n\n1) England\t2) Italy\n\n3) India\t4) Pakistan");
        while(r==0)
        {
            printf("\n\nDo u want to use life line(Y,N)\n");
            a=getch();
            if(a=='y'||a=='Y')
            {
                system("cls");
                printf("\n\nQ11 : Which is the noisiest city in the world?");
                printf("\n\n1) Scotland\t2) Argentine\n\n3) France\t4) Hong Kong");
                r++;
            }
            break;
        }
        if(a=='n'||a=='N'||r<2)
        {
        printf("\nYour answer\n");
        scanf("\n%d",&x);
        }
        system("cls");
        if(x==4)
        {
            printf("\n\n\n\tRight answer \t\t                                                           Won = 25,00000");
        }
        else
        {
            printf("\n\n\n\tWrong answer \t\t                                                           Won only 320,000");
            break;
        }
        printf("\n\nQ12 : Who is the current CHIEF JUSTICE OF PAKISTAN");
        printf("\n\n1) Justice Iftikhar Choudhry\t2) Justice Azmat Saeed Sheikh\n\n3) Justice Saqib Nisar\t4) Justice Asif Saeed Khosa");
        while(r==0)
        {
            printf("\n\nDo you want to use life line(Y,N)\n");
            a=getch();
            if(a=='y'||a=='Y')
            {
                system("cls");
                printf("\nWhich is the largest species of tigers");
                printf("\n\n1) Caspian Tiger\t2) Bengal Tiger\n\n3) Siberian Tiger\t4) Malayan Tiger");
                r++;
            }
            break;
        }
        if(a=='n'||a=='N'||r<2)
        {
        printf("\nYour answer\n");
        scanf("\n%d",&x);
        }
        system("cls");
        if(x==3)
        {
            printf("\n\n\n\tRight answer \t\t                                                              Won = 50,00000");
        }
        else
        {
            printf("\n\n\n\tWrong answer \t\t                                                              Won only = 320,000");
            break;
        }
        printf("\n\n\n                                  LEVEL   4");
        printf("\n\n\nQ13 : Famous Quranic Aayat 'QULLO NAFSIN ZAIQAT UL MAOUT' present in which Surah");
        printf("\n\n1) Surah AAL E IMRAN\t2) Surah BAKARA\n\n3) Surah ANKABOOT\t4) Surah Taoubah");
        printf("\nYour answer\n");
        scanf("\n%d",&x);
        system("cls");
        if(x==1)
        {   printf("\n\n\n////////////////////////////////        CONGRATULATIONS         ///////////////////////////////////////// ");
            printf("\n\n\n\tRight answer !!!!!! \t\t                                         Won = 1,00,00000");
        }
        else
        {
            printf("\n\n\n\tWrong answer                                                       Won only 320,000");
            break;
        }




break;
    }

}
}
}
