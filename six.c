void six_two(){
    struct Talmid arr[10];
    struct Talmid maxi;
    struct Talmid mini;
    srand(1);
    maxi.avg = 0;
    mini.avg = 101;
    for(int i = 0; i< 10; i++){
        scanf("%s", arr[i].name);
        arr[i].min = 0;
        arr[i].max = 0;
        arr[i].avg = 0.0;
        arr[i].failed = 0;
        //printf("%f\n", arr[i].avg);

        for(int j = 0; j<10; j++){
            arr[i].grades[j] = (rand() % 100);
            if(arr[i].max < arr[i].grades[j])
                arr[i].max = arr[i].grades[j];

            if(arr[i].min > arr[i].grades[j])
                arr[i].min = arr[i].grades[j];

            if(arr[i].grades[j] < 56)
                arr[i].failed += 1;

            arr[i].avg += (float)arr[i].grades[j];
            //printf("added: %d\n", arr[i].grades[j]);

        }
        arr[i].avg /= 10;

        //printf("%d\n", arr[i].avg);


        if(maxi.avg < arr[i].avg){
            maxi = arr[i];
        }

        if(mini.avg > arr[i].avg){
            mini = arr[i];
        }

    }

    printf("%s grade: %f\n", maxi.name, maxi.avg);
    //printf("%d\n", maxi.avg);
    printf("%s grade: %f\n", mini.name, mini.avg);

}
