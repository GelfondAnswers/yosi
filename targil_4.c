
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

int main(){
  int m[] = {1, 2, 3, 2};
    //printf("%d", 4%10);
  printf("%d", four_two_real(m));
  retrun 0;
}
