#include <stdio.h>
#include <stdlib.h>
#define N 10


int add_7(int x){
    return x+7;
}

int draw_2(int x){
    return x-2;
}

int divide_by_4 (int x){
    return x/4;
}

int functia (int x, int (*lista[N])(int)){
    int i, n, val[N];



    for(i=0 ; i<3; i++){
        val[i]= lista[i](x);
        printf("%d ", val[i]);
    }

    return *lista;
}


int main()
{
    int x, i=0, j;
    int (*lista[N])(int);

    scanf( "%d" , &x );


    lista[0]=&divide_by_4;
    lista[1]=&draw_2;
    lista[2]=&add_7;

    functia(x, &lista);

}
