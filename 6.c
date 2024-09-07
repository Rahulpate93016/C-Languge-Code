/*# include<stdio.h>
int main(){
   for ( int i = 0; i < 10; i++)
   {
    printf("Hello world \n");
    printf("* \n");
   }
   return 0;
    
}*/


/*# include<stdio.h>
int main(){
   for ( int i = 2; i <= 20; i=i+2)
   {
  
    printf("%d \n",i);
   }
   return 0;
    
}*/

# include<stdio.h>
int main(){
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   int sum=0;
   for (int i = 0; i < n; i++)
   {   
      sum=sum+i;
      printf("%d \n",i);
      
   }
   {  
      printf(" Total sum is :%d \n",sum);
   }
   return 0;
   
}