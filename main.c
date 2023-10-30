#include <stdio.h>

/*değişkenleri belirledim*/
float a,b,c,d;

int main()
{
    /*kullanıcıdan girdi istiyorum*/
    
    printf("Vize notunu giriniz:");
    scanf("%f",&a);
    
    printf("Final notunu giriniz:");
    scanf("%f",&b);
    
    printf("Vizenin yüzdelik etkisini giriniz:");
    scanf("%f",&c);
    
    /*son çıktım olacak olan d'yi bulduran matematiksel işlemler*/
    
    d = (a*(c/100))+(b*((100-c)/100));
    
    /*d'yi kullanıcıya gösteriyorum*/
    
    printf("Not ortalamanız: %f\n", d);

    return 0;
}
