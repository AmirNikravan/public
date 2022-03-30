#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n);
int main(int argc, char** argv) {
 int n, r,k;
scanf("%d",&n);
if(n<1)
    printf("Error: n is not positive");
else if(n>0){
   printf("0 ");
        for(int i=1;i<n;i++)
        {
               r=fib(i);
printf("%d ",r);
        }

}
return 0;
}
int fib(int n)
{
    int temp=1;
 
    if(n>2)
        temp=fib(n-1)+fib(n-2);
return temp;
if(n=1)
    temp=0;
    return temp;
}
