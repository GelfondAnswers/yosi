#include <stdio.h>
#include <stdlib.h>

int five_eleven_a(int a){
    int b = a;
    int c = 0;

    while(b != 0){
        c += b%10;
        b /= 10;
    }
    return c;
}

void five_eleven_b(){
    int k;
    int t, m = 0;
    scanf("%d", &k);


    for(int i = 0; i<k; i++){
        scanf("%d", &t);
        if(five_eleven_a(t)>five_eleven_a(m))
            m = t;
    }
    printf("\n");
    printf("%d", m);

}

char five_thirteen_a_a(char l, int n){
    char* alph = "abcdefghijklmnopqrstuvwxyz"; //25
    char* k = alph;
    int c = 0;
    while(*k != l){
        k += 1;
        c += 1;
    }


    // there are 2 fors, one if n in positive, and the other if n < 0
    // only one will activate of course
    for(int i = 0; i < n; i++){
        k += 1;
        c += 1;
        if(c > 25){
            k = alph;
            c = 0;
        }
    }
    for(int i = 0; i > n; i--){
        k -= 1;
        c -= 1;
        if(c < 0){
            k = alph + 25;
            c = 25;
        }
    }
    return *k;
}

void five_thirteen_a(){
    char name[4];
    char c;
    for(int i = 0; i < 4; i++){
        scanf(" %c", &c);
        name[i] = c;
    }

    char name_n[4];

    for(int i = 0; i < 4; i++){
        name_n[i] = five_thirteen_a_a(name[i], 1);
    }

    for(int i = 0; i < 4; i++){
        printf("%c\n", name_n[i]);
    }
}

void five_thirteen_b(){
    char name[4];
    char c;
    for(int i = 0; i < 4; i++){
        scanf(" %c", &c);
        name[i] = c;
    }

    char name_n[4];

    for(int i = 0; i < 4; i++){
        name_n[i] = five_thirteen_a_a(name[i], -1);
    }

    for(int i = 0; i < 4; i++){
        printf("%c\n", name_n[i]);
    }
}

int five_fourteen_a(int n){
    int c = 0;
    for(int i = 1; i < 1 + (n/2); i++){
        if(n%i == 0){
            c += i;
        }
    }
    if(c == n)
        return 1;
    return 0;
}

void five_fourteen_b(){
    for(int i = 10; i<1001; i++){
        if(five_fourteen_a(i))
            printf("%d\n", i);
    }
}


int five_sixteen_a(int n){
    int n_temp = n;
    int c = 0;

    while(n_temp > 0){
        n_temp /= 10;
        c += 1;
    }
    int dig[c];
    n_temp = n;

    for(int i = 0; i<c; i++){
        dig[i] = n_temp % 10;
        for(int j = 0; j < i; j++){
            if(dig[j] == dig[i]){
                return 1;
            }
        }
        n_temp /= 10;
    }
    return 0;
}

void five_sixteen_b(){
    int a, c = 1;
    scanf("%d", &a);
    //printf("%d", a);

    while(five_sixteen_a(a)){
        scanf("%d", &a);
        c += 1;
    }

    printf("%d, and %d", a, c);
}
