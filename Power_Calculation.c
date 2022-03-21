#include<stdio.h>
int main()
{
    int num, pow;
    int result = 1;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("enter the Power\n");
    scanf("%d", &pow);
    

    while(pow>0){
        result = result * num;
        pow--;
    }

    printf("%d\n", result);

    return 0;
}

/*#include<math.h>
#include<stdio.h>
int main(){
    int number, power, result;
    printf("enter a number\n");
    scanf("%lf", &number);
    printf("enter the power\n");
    scanf("%lf", &power);

    result = pow(number, power);

    printf("%.1lf^%.1lf = %.2lf", number, power, result);

    return 0;
}*/