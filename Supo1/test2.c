int test() {
    int x=0,y=0,i,j;
    int err=0;
    if ((y=init())==-1)
        error(err);
    for (i=1;i<10;i++) {
        for (j=1;j<10;j++) {
            if ((x=process(i,j))==-1) {
                err = 10*i+j;
                error(err);
            }
            y += x;
        }
    }
    return y;
}

void error(int err){
    printf("Something went wrong: %d %d\n",err/10,err%10);
    exit(1);
}

