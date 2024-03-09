#define max 50
struct eletric {
    float khw,hp,range,price;
    int watt,power;
}el,*ptr = &el;

void final() {

}

void calculate() {
        //TODO: calculation code!

    final();
}

void start() {
    short int user,app_choice;

    printf("(Home)->1\t(Kitchen)->2\t(Others)->3\n");
    printf("Choice the appliace :: ");
    scanf("%d",&user);

    if(user == 1) {
        system("cls");
            printf("Home\n");
            printf("===============\n");
            printf("1.Heater\n");
            printf("2.Air condintor\n");
            printf("3.Fan\n");
            printf("4.Light bulb\n");
            printf("===============\n");
            printf("Enter Regular applicance :: ");
            scanf("%d",&app_choice);
            //* Basic user option code...
            printf("(kwh)->1\t(watt)->2\t(hp)->3\n");
            printf("Enter your applicance power :: ");
            scanf("%d",&user);
            printf("Enter you power usage (100%)->max :: ");
            scanf("%f",&ptr->range);
            printf("(min)->1\t(hours)->2\t(days)->3\n");
            printf("Enter the time usage of power each! :: ");
            scanf("%d",&user);
            printf("Enter electic price per unit :: ");
            scanf("%f",&ptr->price);

        //*Calcuate the power option!
        calculate();
    } else if(user == 2) {
            system("cls");

            printf("Kitchen\n");
            printf("===============\n");
            printf("1.Refierator\n");
            printf("2.Microwave oven\n");
            printf("3.Electric cooker\n");
            printf("4.Dish washer\n");
            printf("5.other\n");
            printf("===============\n");
            printf("Enter Regular applicance :: ");
            scanf("%d",&app_choice);
            //* Basic user option code...
            printf("(kwh)->1\t(watt)->2\t(hp)->3\n");
            printf("Enter your applicance power and type :: ");
            scanf("%d",&user);
            printf("Enter you power usage (100%)->max :: ");
            scanf("%f",&ptr->range);
            printf("(min)->1\t(hours)->2\t(days)->3\n");
            printf("Enter the time usage of power each! :: ");
            scanf("%d",&user);
            printf("Enter electic price per unit :: ");
            scanf("%f",&ptr->price);
        //*Calcuate the power option!
        calculate();

    } else if(user == 3) {
        system("cls");
            printf("Others\n");
            printf("===============\n");
            printf("1.Television\n");
            printf("2.Desktop pc\n");
            printf("3.Laptop\n");
            printf("4.Others\n");
            printf("===============\n");
            printf("Enter Regular applicance :: ");
            scanf("%d",&app_choice);
            //* Basic user option code...
            printf("(kwh)->1\t(watt)->2\t(hp)->3\n");
            printf("Enter your applicance power and type :: ");
            scanf("%d ",&ptr->power);
            printf("Enter you power usage (100%)->max :: ");
            scanf("%f",&ptr->range);
            printf("(min)->1\t(hours)->2\t(days)->3\n");
            printf("Enter the time usage of power each! :: ");
            scanf("%d",&user);
            printf("Enter electic price per unit :: ");
            scanf("%f",&ptr->price);
        //*Calcuate the power option!
        calculate();
    }
}
void Bill_Rec() {

}