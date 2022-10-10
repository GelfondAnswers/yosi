#include <stdio.h>

float temp;

float day;
float night;
float holi;
float sal;

float money(float day, float night, float holi, float salary){
    return salary * day + salary * 1.5 * night + salary * 2 * holi ;
}


void life(){
    long int years;
    printf("\n");
    printf("enter your age in years: ");
    scanf("%li", &years);
    printf("you lived: %li", years * 365);
    printf(" years");
    printf("\n%li", years * 365 * 24);
    printf(" hours");
    printf("\n%li", years * 365 * 24 * 60);
    printf(" minutes");
    printf("\n%li", years * 365 * 24 * 60 * 60);
    printf(" seconds");
}

int three_two(){
    int amount;
    int price;
    int type;
    float aft;

    printf("enter amount: ");
    scanf("%i", &amount);
    printf("enter price: ");
    scanf("%i", &price);
    printf("enter type: ");
    scanf("%i", &type);

    if(amount < 35){
        printf("%i", amount*price);
        return 0;
    }

    if(type == 1 || type == 4 || type == 6){
        aft = 95.0 / 100.0 * price * amount;
        printf("%f", aft);
    }

    if(type == 2 || type == 5){
        aft = 90.0 / 100.0 * price * amount;
        printf("%f", aft);
    }

    if(type == 3 || type == 7 || type == 8){
        aft = 80.0 / 100.0 * price * amount;
        printf("%f", aft);
    }
    return 0;
}

void two_four(){
//ein li koah likroa piska

}




void two_five(){
    int day, hours, salary;
    int regular;
    scanf("%d", &day);
    scanf("%d", &hours);
    scanf("%d", &salary);

    switch(day){
case 1 ... 5:
    if(hours > 8)
        printf("%f", 8*salary + 125.0/100.0*salary*(hours-8));
    else
        printf("%f", salary * hours);
    break;
case 6:
    if(hours > 5)
        printf("%f", 5*salary + 200.0/100.0*salary*(hours-5));
    else
        printf("%f", salary * hours);
    break;
case 7:
    if(hours > 5)
        printf("%f", 5*salary + 300.0/100.0*salary*(hours-5));
    else
        printf("%f", salary * hours);
    break;


    }


}

void three_eight(){
    int a = 1;
    long int b = 1;

    while(a!=-1){
        scanf("%d", &a);

        if(a%2 == 0 && a%3 == 0){
            b *= a;
        }
    }
    printf("%d", b)   ;

}

void three_ten(){
    int c,a = 1;
    while(a >= 0){
        scanf("%d", &a);
        c+=1;

    }
    printf("%d", c);

}
void three_tweny_one(){
    int c = 0;
    float g;

    for(int i = 0; i < 30; i++){
        scanf("%f", &g);
        if(g > 87.5)
            c += 1;
    }
    printf("%d", c);


}

int five_eleven(int num){
    int j = num;
    int k = 0;
    while(j>9){
        k += j % 10;
        j = j / 10;
    }
    k += j;
    return k;

}

int four_two(int* j){
    // lo aia li koh likro et kol atext az asiti et za
    int *p = j;
    int a, b, c1 = 0, c2 = 0; // c1 is for list, c2 is for num of elems
    a = *p;
    p += 1;
    while(*p != NULL){
        b = *p;
        //explanation: i store the lengths of sorted sublists as numbers in an int
        if(a <= b)
            c1 += 1;
        else
            c1 *= 10;
        a = b;
        c2 += 1;
        p +=1;
    }

    int l;

    while(c1 > 0){
        l = c1 % 10;
        if(l > c2 / 2)
            return 1;
        c1 = c1 / 10;
    }


    return 0;
}




int main()
{
    // za akol targil 1
    /*
    printf("enter temp: ");
    scanf("%f", &temp);
    temp = (temp - 32) * 5 / 9;
    printf("%f",temp);

    printf("enter day: ");
    scanf("%f", &day);
    printf("enter night: ");
    scanf("%f", &night);
    printf("enter holiday: ");
    scanf("%f", &holi);
    printf("enter salary: ");
    scanf("%f", &sal);
    printf("%f", money(day, night, holi, sal));

    life();
    */

    //three_two();
    //five_two();
    int m[] = {1, 2, 3, 2};
    //printf("%d", 4%10);
    printf("%d", four_two_real(m));

    return 0;
}


