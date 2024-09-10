/*# include<stdio.h>
int main(){
    int n;
   do
      {printf("enter the number");
    scanf("%d",&n);
    if (n % 7==0)
    {
        break;
    }}
    
 while (n%7!=0);
 {
    printf("thank you");
 }
 
    
    return 0;
}  */

// Countinue statement

/*# include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    { if (i==5)
     {
        continue;
     }
    
    
        printf("%d \n",i);
    }
    return 0;
}*/


# include<stdio.h>
int main(){
    
    for (int i = 5; i < 51; i++)
    { if (i%2==0)
     {
        continue;
     }
    
    
        printf("%d \n",i);
    }
    return 0;
}