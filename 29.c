# include<stdio.h>
int main(){
    int age=40;
    int * ptr=&age;
    int **pptr=&ptr;
    int *** ppptr=&pptr;
    
    printf("%d",***ppptr);
    return 0;
}