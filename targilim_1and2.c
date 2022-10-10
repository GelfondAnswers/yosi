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

int two_three(){
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



int main()
{
    // za akol targil 1
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
    

    return 0;
}


