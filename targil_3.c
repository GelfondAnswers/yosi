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

int main(){
  
  
  
  
 return 0; 
  
}
