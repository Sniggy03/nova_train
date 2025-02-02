#include<stdio.h>
int main(){
    float fah;
    scanf("%f",&fah);
    float celsius;
  celsius=((fah-32)*5.0/9.0);
    printf("%f\n",celsius);
    return 0;
}