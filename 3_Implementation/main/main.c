#include<stdio.h>
#include<stdlib.h>
int option,name,opp,s=0,toss,ts,d,score1,comp1,p1;                                             
void bat()
{
    int i=0;
 printf("\n\n ----GAME STARTS----");          
    while(i==0)
 {
  printf("\n\n enter the number :");
  scanf("%d",&name);
  opp=1 + (rand() % 6);
        printf("\n opponent : %d \n You   : %d",opp,name);
        if(opp!=name)
        {
   s=s+name;
   printf("\n\n Score : %d",s);
        }
        else
        {
            printf("\n\n YOU ARE OUT");
            printf("\n\n Score : %d",s);
            i=1;
  }
 }
}


void bowl()
{
 int j=0;
 printf("\n\n _________GAME BEGINS_________");           
    while(j==0)
 {
  printf("\n\n enter the number :");
  scanf("%d",&p1);
  comp1=1 + (rand() % 6);
        printf("\n opponent : %d \n You   : %d",comp1,p1);
        if(comp1!=p1)
        {
   score1=score1+comp1;
   printf("\n\n Score : %d",score1);
        }
        else
        {
            printf("\n\n Out ! ");
            printf("\n\n  score  : %d",score1);
            j=1;
  }
 }
}        

 

int main()                                                       
{
                               
        char name[20];
        printf("\n\n * * * * WELCOME TO HAND CRICKET ONLINE * * * *");
        printf("\n\n enter your nickname : ");
        scanf("%s",name);
        printf("\n welcome %s",name);
        printf("\n\n *MENU*");
        printf("\n 1 - Play Now  \n 2 - How To Play \n 3 - About  \n ");
        printf("\n Enter your choice : ");
        scanf("%d",&option);
        switch(option)                                                     
        {
         case 1:
             
           printf("\n\n TOSS ");
              printf("\n\n HEADS/TAILS \n\n ENTER 1 FOR HEADS \n\n ENTER 2 FOR TAILS \n\nYOUR CHOICE : ");
              scanf("%d",&toss);
              ts=1 + (rand() % 2);
        if(ts==toss)
        {
         printf("\n\n  YOU ARE LUCKY, YOU WON THE TOSS!!!! ");
         printf("\n\n enter your choice \n\n  3 for BATTING \n\n  4 for BOWLING ");
         scanf("%d",&d);
     }
     else
     {
      printf("\n\n YOU HAVE LOST THE TOSS \n\n opponent has elected to BAT First ");
      d=4;
     }
     if(d==3)
     {
                         bat();
                            bowl();
                            if(score1<s)
                            {
                                printf(" \n\n  CONGO!! YOU WIN!! ");
       }
       else if(score1==s)
       {
        printf("\n\n  MATCH TIED ");
       }
       else
       {
        printf("\n\n  YOU HAVE LOST THE MATCH. BETTER LUCK NEXT TIME!");
       }   
                    }
                    else
                    {
                            bowl();
                            bat();
                            if(score1<s)
                            {
                                printf(" \n\n CONGO!! YOU WIN!! ");
       }
       else if(score1==s)
       {
        printf("\n\n  MATCH TIED");
       }
       else
       {
        printf("\n\n  YOU HAVE LOST THE MATCH. BETTER LUCK NEXT TIME!");
       }
     } 
       
                 break;
                  
         case 2:                                                                   
                 printf("\n\n  *********************How to Play********************* ");
                 printf("\n Enter any number inbetween 1 to 6  \n\n If the number entered by you matches the opponents number, then you are out \n\n If you are not out, then that number will be added to the score \n\n ALL THE BEST \n \n_______________ENJOY YOUR GAME______________ ");
                 break;
                 
         case 3:                                                                       
                 printf("\n\n *About*");
                 printf("\n HCO - hand cricket online ");
                 printf("\n this is a fun game based on hand cricket ");
                 break;
                 
         default:
               printf("enter an option");
        }
}
