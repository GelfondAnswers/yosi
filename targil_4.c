int four_two(int *p, int len){
    int *j = p;
    int a, b, c = 0;
    a = *j;
    j += 1;

    for(int i = 1; i < len; i ++){
        b = *j;
        if(a <= b)
            c+=1;
        else
            c = 0;
        if(c >= len/2)
            return 1;
        a = b;
        j += 1;
    }
    return 0;
}
int main(){
  int m[] = {1, 2, 3, 2};
    //printf("%d", 4%10);
  printf("%d", four_two(m));
  retrun 0;
}
