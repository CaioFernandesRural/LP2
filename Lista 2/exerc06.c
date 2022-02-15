int main(){

    int a,b,con;
    a=5000000;
    b=7000000;
    con=0;

    while(a<=b){
        a+=a*0.03;
        b+=b*0.02;
        con++;
    }

    printf("A cidade A alcancou a B em %d anos.",con);

    return 0;
}