#include<stdio.h>
#include<string.h>

struct p
{
    struct p *next;
    int x;
};

void reverse(int i);

union sti
{
    int nu;
    char m;
};
void main(){
    // int a = 5 % 2 * 3 / 2;
    // printf("%d", a);
    // struct p* p1 = malloc(sizeof(struct p));
    // p1->x = 1;
    // int a[5] = {1, 2, 3, 4, 5};
    // int i;l,
    // for(i = 0; i < 5; i++){
    //     if((char)a[i] == '5'){
    //         printf("%d", a[i]);
    //     }
    //     else printf("f");
    // }
    // int k = 5 + 7 * 4 - 9 *(3, 2);
    // printf("%d", k);
    int i, j, n = 10;
    for(i = 0, j = 0; i < n, j < n; i++, j+=5){
        printf("%d%d", i, j);
    }
    
}

void reverse(int i ){
    if(i > 5){
        return;

    }
    printf("%d", i);
    return reverse((i++, i));
}