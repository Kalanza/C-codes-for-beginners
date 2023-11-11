/*i am trying to write a code that calculates the factorial of any number and displays the factors of each number*/
#include <stdio.h>
int main(){
int num=1;
int i;
int n;
printf("Enter the number you want to calculate the factorial:");
scanf("%d",&n);
for(i = 1; i <= n; i++) {
    num = i * num;
printf("%d * ", i);

    }
printf("\nThe factorial is:%d",num);

 return 0;
}
