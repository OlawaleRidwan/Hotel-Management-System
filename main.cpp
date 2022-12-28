#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger, Qnoodles=0, Qshake=0, Qchicken =0;
    // food items sold
    int Srooms=0, Spasta=0, Sburger, Snoodles=0, Sshake=0, Schicken =0;
    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger, Total_noodles=0, Total_shake=0, Total_chicken =0;



    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shakes";
    cout<<"\n 6) Chicken";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want (Only "<< Qrooms -Srooms<<" rooms are avai: ";
            cin>> quant;
            if(Qrooms -Srooms >= quant) {
                Srooms= Srooms + quant;
                Total_rooms = Total_rooms +(quant*1200);
                cout<< "\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\t Only "<<Qrooms - Srooms<<"Rooms remaining in hotel";
            break;

        case 2:
            cout<<"\n\n Enter the quantity of pasta you want: ";
            cin>> quant;
            if(Qpasta -Spasta >= quant) {
                Spasta= Spasta + quant;
                Total_pasta = Total_pasta+(quant*300);
                cout<< "\n\n\t\t"<<quant<<" pasta has been orderd!";
            }
            else
                cout<<"\n\t Only "<<Qpasta - Spasta<<" Pasta remaining in hotel";
            break;


        case 3:
            cout<<"\n\n Enter the quantity of burger you want: ";
            cin>> quant;
            if(Qburger -Sburger >= quant) {
                Spasta= Spasta + quant;
                Total_burger = Total_burger+(quant*200);
                cout<< "\n\n\t\t"<<quant<<" burger has been ordered!";
            }
            else
                cout<<"\n\t Only "<<Qburger - Sburger<<" burger remaining in hotel";
            break;

        case 4:
            cout<<"\n\n Enter the quantity of noodles you want: ";
            cin>> quant;
            if(Qnoodles -Snoodles >= quant) {
                Snoodles= Snoodles + quant;
                Total_noodles = Total_noodles+(quant*150);
                cout<< "\n\n\t\t"<<quant<<" noodles has been ordered!";
            }
            else
                cout<<"\n\t Only "<<Qnoodles - Snoodles<<"burger remaining in hotel";
            break;


        case 5:
            cout<<"\n\n Enter the quantity of shakes you want: ";
            cin>> quant;
            if(Qshake -Sshake >= quant) {
                Sshake= Sshake + quant;
                Total_shake = Total_shake+(quant*200);
                cout<< "\n\n\t\t"<<quant<<" shakes has been ordered!";
            }
            else
                cout<<"\n\t Only "<<Qshake - Sshake<<"burger remaining in hotel";
            break;


        case 6:
            cout<<"\n\n Enter the quantity of chickens you want: ";
            cin>> quant;
            if(Qchicken -Schicken >= quant) {
                Schicken= Schicken + quant;
                Total_chicken = Total_chicken+(quant*1000);
                cout<< "\n\n\t\t"<<quant<<" chickens has been ordered!";
            }
            else
                cout<<"\n\t Only "<<Qshake - Sshake<<"chickens remaining in hotel";
            break;


        case 7:

            cout<<"\n\t\t Details of sales and collection";
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n Number of rooms we gave for rent: " <<Srooms;
            cout<<"\n Remaining rooms: "<<Qrooms - Srooms;
            cout<<"\n Total rooms collection for the day: "<<Total_rooms;

            cout<<"\n\n Number of pastas we had: "<<Qpasta;
            cout<<"\n Number of pastas we sold: " <<Spasta;
            cout<<"\n Remaining pastas: "<<Qpasta - Spasta;
            cout<<"\n Total pastas collection for the day: "<<Total_pasta;

            cout<<"\n\n Number of burgers we had: "<<Qburger;
            cout<<"\n Number of burgers we sold: " <<Sburger;
            cout<<"\n Remaining burgers: "<<Qburger - Sburger;
            cout<<"\n Total burgers collection for the day: "<<Total_burger;

            cout<<"\n\n Number of noodles we had: "<<Qnoodles;
            cout<<"\n Number of noodles we sold: " <<Snoodles;
            cout<<"\n Remaining noodles: "<<Qnoodles - Snoodles;
            cout<<"\n Total noodles collection for the day: "<<Total_noodles;

            cout<<"\n\n Number of shakes we had: "<<Qshake;
            cout<<"\n Number of shakes we sold: " <<Sshake;
            cout<<"\n Remaining shakes: "<<Qshake - Sshake;
            cout<<"\n Total shakes collection for the day: "<<Total_shake;

            cout<<"\n\n Number of chickens we had: "<<Qchicken;
            cout<<"\n Number of chickens we sold: " <<Schicken;
            cout<<"\n Remaining chickens: "<<Qchicken - Schicken;
            cout<<"\n Total chicken collection for the day: "<<Total_chicken;

            cout<<"\n\n\n Total Collection for the day: "<<Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
            break;

        case 8:
            exit(0);

        default:
            cout<<"\n Please select the numbers mentioned above!";


    }
    goto m;
}
