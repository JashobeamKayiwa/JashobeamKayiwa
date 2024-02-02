#include<stdio.h>
float descriminant(float a,float b,float c){
    float power=pow(b,2);
    return power-(4*a*c);
}

float firstroot(float a,float b,float c,float value){
    float power=pow(value,1/2);
    return (-(b)+power)/(2*a);
}

float secondroot(float a,float b,float c,float value){
    float power=pow(value,1/2);
    return (-(b)-power)/(2*a);
}

int main(){

    printf("For quadratic equation in the form ax^2+bx+c,\n");

    printf("enter the constant 'a':");
    float a;
    scanf("%f",&a);

    while (a==0){
        printf("Error: 'a' cannot be 0. Enter 'a' again.\n");
        scanf("%f",&a);
        }

    printf("enter the constant 'b':");
    float b;
    scanf("%f",&b);

    printf("enter the constant 'c':");
    float c;
    scanf("%f",&c);

    float value=descriminant(a,b,c);

    if (value<0){
        printf("Complex\n");
        }
    else {
        if (value==0){
            float root1=firstroot(a,b,c,value);
            printf("Real and equal. The root of the equation is %f.",root1);
            }
        else{
            float root1=firstroot(a,b,c,value);
            float root2=secondroot(a,b,c,value);
            printf("Real and distinct. The roots of the equation are %f and %f.",root1,root2);
            }
        }

    return 0;
}
