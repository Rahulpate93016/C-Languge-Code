# include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i = 5; i <=n; i++)
    {
        sum=sum+i ;
    }
    printf("%d",sum);
    
    return 0;
}