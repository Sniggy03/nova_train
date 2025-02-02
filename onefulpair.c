#include<stdio.h>
int main(){
    int a=1,b=55;
    int ofp=a+b+(a*b);
    if(ofp==111){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}