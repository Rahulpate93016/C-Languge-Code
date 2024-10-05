// # include<stdio.h>
// int main(){
//     int marks[4];
//     printf("Enter the phy marks :");
//     scanf("%d",&marks[0]);

//     printf("Enter the math marks :");
//     scanf("%d",&marks[1]);

//     printf("Enter the Chemistry marks :");
//     scanf("%d",&marks[2]);

//     printf("Enter the English marks :");
//     scanf("%d",&marks[3]);

//         printf("phy=%d, che= %d,math=%d,Englis=%d",marks[0],marks[1],marks[2],marks[3]);
//     return 0;
// }


// # include<stdio.h>
// int main(){

//     int arr[50],i,sum=0;
  
//     for (int i = 0; i <5; i++){
//      scanf("%d",&arr[i]);
//     }

   
//     for ( i = 0; i < 5; i++)
//     {
//         sum=sum+arr[i];
//     }

//     printf("%d",sum);
    
//     return 0;
// }


# include<stdio.h>
int main(){

    int n,sum=0;
    printf("Enter the size of array \n:");
    scanf("%d",&n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }  

    for (int i = 0; i < n; i++)
    {
        sum+=arry[i];
    }

    printf("This is the sum of array: %d",sum);
    
    
    return 0;
}