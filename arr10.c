# include<stdio.h>
int main(){
    int arr[100];

    printf("Enterh the marks of student : \n ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
        
    }

    

   for (int  i = 0; i <5; i++)
    {
        if ( arr[i]<35)
        printf("index %d : Marks %d  \n",i,arr[i]);
        
        
    }
    
    return 0;
}