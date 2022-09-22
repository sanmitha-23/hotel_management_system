//Hotel Management System
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int quantity, choice;

    //available quantity
    int quant_rooms=0;
    int quant_pizza=0, quant_pasta=0, quant_noodles=0, quant_icecream=0, quant_sandwich=0;

    //sold quantity
    int sold_rooms=0;
    int sold_pizza=0, sold_pasta=0, sold_noodles=0, sold_icecream=0, sold_sandwich=0;

    //price
    int total_rooms=0;
    int total_pizza=0, total_pasta=0, total_noodles=0, total_icecream=0, total_sandwich=0;

    cout<<"\n\t Quantity of items we have\n";
    
    cout<<"\nRooms available: ";
    cin>>quant_rooms;

    cout<<"\nQuantity of pizza available: ";
    cin>>quant_pizza;
    cout<<"\nQuantity of pasta available: ";
    cin>>quant_pasta;
    cout<<"\nQuantity of noodles available: ";
    cin>>quant_noodles;
    cout<<"\nQuantity of ice-cream available: ";
    cin>>quant_icecream;
    cout<<"\nQuantity of sandwich available: ";
    cin>>quant_sandwich;

    //menu
    m:
    cout<<"\n\n\t\tPlease select from the given menu options:\n";
    cout<<"\n1) Rooms\n2) Pizza\n3) Pasta\n4) Noodles\n5) Ice-cream\n6) Sandwich\n7) Information regarding sales and collection\n8) Exit\n ";
    cout<<"\n\tPlease enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\nEnter the number of rooms you want: ";
        cin>>quantity;

        if((quant_rooms-sold_rooms) >= quantity)
        {
            sold_rooms += quantity;
            total_rooms += (quantity*1200); //1200 price of each room
            cout<<"\n\n\t\t"<<quantity<<" rooms have been alloted to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_rooms-sold_rooms)<<" rooms remaining in the hotel\n";
        }
        break;

    case 2:
        cout<<"\n\nEnter the quantity of pizza you want: ";
        cin>>quantity;

        if((quant_pizza-sold_pizza) >= quantity)
        {
            sold_pizza += quantity;
            total_pizza += (quantity*250); //250 price of each pizza
            cout<<"\n\n\t\t"<<quantity<<" pizzas will be served to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_pizza-sold_pizza)<<" pizzas remaining in the hotel\n";
        }
        break;

    case 3:
        cout<<"\n\nEnter the quantity of pasta you want: ";
        cin>>quantity;

        if((quant_pasta-sold_pasta) >= quantity)
        {
            sold_pasta += quantity;
            total_pasta += (quantity*120); //120 price of each plate of pasta
            cout<<"\n\n\t\t"<<quantity<<" pasta will be served to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_pasta-sold_pasta)<<" pasta remaining in the hotel\n";
        }
        break;

    case 4:
        cout<<"\n\nEnter the quantity of noodles you want: ";
        cin>>quantity;

        if((quant_noodles-sold_noodles) >= quantity)
        {
            sold_noodles += quantity;
            total_noodles += (quantity*100); //100 price of each plate of noodles
            cout<<"\n\n\t\t"<<quantity<<" noodles will be served to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_noodles-sold_noodles)<<" noodles remaining in the hotel\n";
        }
        break;

    case 5:
        cout<<"\n\nEnter the quantity of ice-creams you want: ";
        cin>>quantity;

        if((quant_icecream-sold_icecream) >= quantity)
        {
            sold_icecream += quantity;
            total_icecream += (quantity*150); //150 price of each ice-cream
            cout<<"\n\n\t\t"<<quantity<<" ice-creams will be served to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_icecream-sold_icecream)<<" ice-creams remaining in the hotel\n";
        }
        break;

    case 6:
        cout<<"\n\nEnter the quantity of sandwiches you want: ";
        cin>>quantity;

        if((quant_sandwich-sold_sandwich) >= quantity)
        {
            sold_sandwich += quantity;
            total_sandwich += (quantity*60); //60 price of each sandwich
            cout<<"\n\n\t\t"<<quantity<<" sandwiches will be served to you!\n";
        }
        else{
            cout<<"\nSorry, only "<<(quant_sandwich-sold_sandwich)<<" sandwiches remaining in the hotel\n";
        }
        break;

    case 7:
        cout<<"\n\t\tDetails of sales and collection\n";
        //rooms
        cout<<"\n\nNumber of rooms we had: "<<quant_rooms<<endl;
        cout<<"Number of rooms given for rent: "<<sold_rooms<<endl;
        cout<<"Remaining rooms: "<<(quant_rooms-sold_rooms)<<endl;
        cout<<"Total collection from the rooms today: "<<total_rooms<<endl;
        //pizza
        cout<<"\n\nNumber of pizzas we had: "<<quant_pizza<<endl;
        cout<<"Number of pizzas sold: "<<sold_pizza<<endl;
        cout<<"Remaining pizzas: "<<(quant_pizza-sold_pizza)<<endl;
        cout<<"Total collection from the pizzas today: "<<total_pizza<<endl;
        //pasta
        cout<<"\n\nNumber of plates of pasta we had: "<<quant_pasta<<endl;
        cout<<"Number of plates of pastas sold: "<<sold_pasta<<endl;
        cout<<"Remaining plates of pastas: "<<(quant_pasta-sold_pasta)<<endl;
        cout<<"Total collection from the pastas today: "<<total_pasta<<endl;
        //noodles
        cout<<"\n\nNumber of plates of noodles we had: "<<quant_noodles<<endl;
        cout<<"Number of plates of noodles sold: "<<sold_noodles<<endl;
        cout<<"Remaining plates of nooldes: "<<(quant_noodles-sold_noodles)<<endl;
        cout<<"Total collection from the noodles today: "<<total_noodles<<endl;
        //ice-cream
        cout<<"\n\nNumber of ice-creams we had: "<<quant_icecream<<endl;
        cout<<"Number of ice-creams sold: "<<sold_icecream<<endl;
        cout<<"Remaining ice-creams: "<<(quant_icecream-sold_icecream)<<endl;
        cout<<"Total collection from the ice-creams today: "<<total_icecream<<endl;
        //sandwich
        cout<<"\n\nNumber of sandwiches we had: "<<quant_sandwich<<endl;
        cout<<"Number of sandwiches sold: "<<sold_sandwich<<endl;
        cout<<"Remaining sandwiches: "<<(quant_sandwich-sold_sandwich)<<endl;
        cout<<"Total collection from the sandwiches today: "<<total_sandwich<<endl;
        
        cout<<"\n\nTotal collection for the day: "<<(total_rooms+total_pizza+total_pasta+total_noodles+total_icecream+total_sandwich)<<endl;
        break;

    case 8:
        cout<<"\nThank you!!\n";
        exit(0);
        break;
    
    default:
        cout<<"\nPlease select the numbers mentioned below\n";
        
    }
    goto m; //back to menu

    return 0;
}
