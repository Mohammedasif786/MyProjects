void calculate() {

}

void start() {
    short int user;
    float range,price;

    printf("(Home)->1\t(Kitchen)->2\t(hp)->3\n");
    printf("Choice the appliace :: ");
    scanf("%d",&user);

    if(user == 1) {
        printf("(kwh)->1\t(watt)->2\t(hp)->3\n");
        printf("Enter your applicance power :: ");
        scanf("%d",&user);
        printf("Enter power usage (100%)->max :: ");
        scanf("%f",&range);
        printf("(min)->1\t(hours)->2\t(days)->3\n"); //* ADD more about min,hour,days
        printf("Enter the time usage of power each! :: ");
        scanf("%d",&user);
        printf("Enter electic price per unit :: ");
        scanf("%f",&price);

        calculate();
    } else if(user == 2) {

    } else if(user == 3) {

    }
}
void Bill_rec() {

}