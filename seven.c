typedef struct{
char name[20];
int type;
int pages;
int price;
}book;

book generate_book(){
    book bk;
    int type;
    printf("eneter name\n");
    scanf("%s", &bk.name);

    printf("enter type:\n1. sci\n2. sci opt\n3. music\n4. clasic\n");
    scanf("%d", &bk.type);

    printf("eneter amount of pages: \n");
    scanf("%d", &bk.pages);

    srand(1);
    bk.price = (rand() % 51) + 50;

    //printf("before ret1\n");


    return bk;

}

int seven_nine(){
    book books[10];

    for(int i=0; i<10; i++){
        books[i] = generate_book();
    }
    //printf("%s", books[0].type);


    for(int j=1; j<5; j++){
        for(int i=0; i<10; i++){
            if(j == books[i].type){

                printf("%s\n", books[i].name);

            }

        }
    }


}

int seven_ten(){
    book books[4];

    for(int i=0; i<4; i++){
        books[i] = generate_book();
    }
    //printf("%s", books[0].type);


    for(int j=50; j<101; j++){
        for(int i=0; i<4; i++){
            if(j == books[i].price){

                printf("%s\n", books[i].name);

            }

        }
    }


}
