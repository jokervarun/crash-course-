#include <stdio.h>
int main(){
    int a=1000;
    while(a>0){
        printf("%d\n", a%10);
        a=a/10;
    }
    return 0;
}
