#include <stdio.h>
int main()
{
    int type_of_the_car, dis, gst, total_price_of_the_car;
    int net;
    printf("Enter your choice of vehicle : ");
    printf("\nChoose the series number ------>");
    printf("\n1.Hatchback");
    printf("\n2.Sedan");
    printf("\n3.SUV");
    printf("\n4.MUV");
    scanf("%d",&type_of_the_car);
    scanf("%d",&total_price_of_the_car);
    if(type_of_the_car == 1){
        printf("CAR TYPE : HATCHBACK");
        dis = total_price_of_the_car * 0.03;
        gst = (total_price_of_the_car - dis) * 0.12;
        net = total_price_of_the_car - dis + gst;
    }
    else if(type_of_the_car == 2){
        printf("CAR TYPE : SUDAN");
        dis = total_price_of_the_car * 0.05;
        gst = (total_price_of_the_car - dis) * 0.12;
        net = total_price_of_the_car - dis + gst;
    }
    else if(type_of_the_car == 3){
        printf("CAR TYPE : SUV");
        dis = total_price_of_the_car * 0.10;
        gst = (total_price_of_the_car - dis) * 0.12;
        net = total_price_of_the_car - dis + gst;
    }
    else if(type_of_the_car == 4){
        printf("CAR TYPE : MUV");
        dis = total_price_of_the_car * 0.15;
        gst = (total_price_of_the_car - dis) * 0.12;
        net = total_price_of_the_car - dis + gst;
    }
    else{
        printf("Invalid Type");
    }
    printf("\nTotal price of the car : %d",net);
    printf("\n<----------THANK YOU-------->");
}