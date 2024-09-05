/*# include<stdio.h>
int main(){
   int age;
   printf(" This is a voting system \n ");
   printf("I will tell you , you are eligible for voting or not.\n ");
   printf("Enter your age:\n");
   scanf("%d",&age);
   if (age>=18)
   {
    printf("You are elible for vote ");
   }
   else
   {
    printf("You are not elible for vote \n");
   }
   
   

    return 0;
}*/

# include<stdio.h>
int main(){
    int age ;
    printf("Enter your age:");
    scanf("%d",&age);
    age>=18 ? printf("you are eligible for vote") : printf("Note eligible for vote");
    return 0;
}



