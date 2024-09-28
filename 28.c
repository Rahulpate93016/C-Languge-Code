# include<stdio.h>
int main(){
    int age =44;
    int *ptr=&age;
    int a=*ptr;
    printf("%u \n",&age);
     printf("%u\n",ptr);
      printf("%u",a);
    return 0;

}