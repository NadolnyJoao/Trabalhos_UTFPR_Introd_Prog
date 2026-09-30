#include <stdio.h>
int calcula_base(int x1, int x2){
    int base;
    base = x2 - x1;
    if (base > 0){
        base *= -1;
        return base;
    }

    return base;
    }


    int calcula_altura(int y1, int y2){
    int altura;
    altura = y2 - y1;
    if (altura > 0){
        altura *= -1;
        return altura;
    }

    return altura;
    }



int main(){
    int SEx = 1, SEy = 3;
    int IDx = 3, IDy = 1;
    printf("%d ", calcula_base(SEx, IDx) * calcula_altura(SEy, IDy));




return 0;
}
