# include<stdio.h>
int main(){
    float iteam[3];
    printf("Enter the first number of item");
    scanf("%f",&iteam[0]);
    
    printf("Enter the first number of item");
    scanf("%f",&iteam[1]);

    
    printf("Enter the first number of item");
    scanf("%f",&iteam[2]);

    printf("The final price of iteam 1 is %f \n",iteam[0]+(iteam[0]*18/100));
     printf("The final price of iteam 1 is %f\n",iteam[1]+(iteam[1]*18/100));
      printf("The final price of iteam 1 is %f\n",iteam[2]+(iteam[2]*18/100));
      printf("This is the types of pointer %d",sizeof(iteam[1]));

   
    return 0;




    
    
}