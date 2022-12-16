#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <string.h>

using namespace std;

void menu();//main menu function prototype

class TravelCompany
{
protected:
    string admin; //hide admin name

public:

    //virtual void menu(){}

    TravelCompany
    {
        system("color 0A"); //change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> admin;
        system("CLS");
        menu(); //call to main function to load after executing the constructr
    };

    ~TravelCompany{} ;//de
};

class Customers{
    public:
        string name, gender, address;
        int age, phone_number, Customer_id;
        char one_line[999];
        
        void getDetails(){
            ofstream out("old-customers.txt", ios::app);{
            cout<<"Enter full name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter gender: ";
            cin>>gender;
            cout<<"Enter phone number: ";
            cin>>phone_number;
            cout<<"Enter address: ";
            cin>>address;
            cout<<"Enter customer id";
            cin>>Customer_id;
        }
        out<<"\nCustomer ID: " << Customer_id<<"\nName: "<< name << "\nage: "<< age<<"\ngender: "<<gender<<"\naddress: "<< address<<"\nPhone number: "<<phone_number<<endl;
        out.close();
        cout<<"\n SAVED NOTE: we successfully saved your details for future purposes.";
        }
        void showDetails(){
            ifstream in("old-customers.txt");{
                if (!in){
                    cout<<"Error occured in file."<< endl;
                }
                while(!in.eof()){
                    in.getline(one_line, 999);
                    cout<<one_line<<endl;
                }

            }
            in.close();

        }
  
};
int Customer::cusID;
class cars{
    public:
    int carChoise, days;
    static float rentCost;

    void carDetails(){
        cout<<"Please choose your preffered car choice"<< endl;
        cout<<"------------------Cars for travel-----------------"<< endl;
        cout<<"1. Rent a vitz car --- 100 birr per day"<< endl;
        cout<<"2. Rent a land rover ---- 300 per day"<< endl;
        cout<<"3. Rent a hilux ---- 350 per day"<< endl;

        cout<<"\nTo know how much it cost you: "<<endl;
        cout<<"\nEnter the number of the car you want: ";
        cin>>carChoise;
        cout<<"\nEnter the amount of days you want to use the car: ";
        cin>>days;

        int next_step;
        if (carChoise==1){
            rentCost = days*100;
            cout<< "You chose vitz car with for "<< days<<" days with rent cost "<<rentCost<<endl;
            cout<<"if you want to continue insert 1."<<endl;
            cout<<"if you want to change insert 2"<<endl;
            cin>>next_step;

            system("cls");

            if (next_step==1){
                cout<< "Congradulations you have succesfully rent the car for "<< days<<" days."<<endl;
                cout<<"Goto Menu and take the receipt."<<endl;

            }
            else if(next_step == 2){
                carDetails();
            }
            else{
                cout<<"invalid number entered! try again. Redirecting to previous menu\n Please wait!"<<endl;
                Sleep(999);
                system("cls");
                carDetails();
            }

        }
        else if (carChoise == 2){
            
            rentCost = days*100;
            cout<< "You chose range rover car with for "<< days<<" days with cost of "<<rentCost<<endl;
            cout<<"if you want to continue insert 1."<<endl;
            cout<<"if you want to change insert 2"<<endl;
            cin>>next_step;

            system("cls");

            if (next_step==1){
                cout<< "Congradulations you have succesfully rent the car for "<< days<<" days."<<endl;
                cout<<"Goto Menu and take the receipt."<<endl;

            }
            else if(next_step == 2){
                carDetails();
            }
            else{
                cout<<"invalid number entered! try again. Redirecting to previous menu\n Please wait!"<<endl;
                Sleep(999);
                system("cls");
                carDetails();
            }

        }
        else if(carChoise == 3){
            rentCost = days*100;
            cout<< "You chose hilux car with for "<< days<<" days with cost of "<<rentCost<<endl;
            cout<<"if you want to continue insert 1."<<endl;
            cout<<"if you want to change insert 2"<<endl;
            cin>>next_step;

            system("cls");

            if (next_step==1){
                cout<< "Congradulations you have succesfully rent the car for "<< days<<" days."<<endl;
                cout<<"Goto Menu and take the receipt."<<endl;

            }
            else if(next_step == 2){
                carDetails();
            }
            else{
                cout<<"invalid number entered! try again. Redirecting to previous menu\n Please wait!"<<endl;
                Sleep(999);
                system("cls");
                carDetails();
            }
        }
        else{
            cout<<"Invalid input! Redirecting to previous Menu \nPlease Wait!"<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }
        cout<<"\n Please any key to Redirect to Main menu: ";
        cin>>next_step;
        menu();
    };
float cars::rentCost;   
class Booking{
    public:
    int  choiceHotel, packChoice;
    int gotoMenu;
    static float hotelCost;

    string hotelName;
    int stdcost;
    int premium;
    int luxury;
    int roll_number = 1;

    char line[999];

    void addHotels(){
        ofstream out("Hotels.txt");{
            cout<<"Insert hotel Name: ";
            cin>>hotelName;
            cout<<"Insert cost of standard package: ";
            cin>>stdcost;
            cout<<"Insert cost of premium package: ";
            cin>>premium;
            cout<<"Insert cost of Luxury package: ";
            cin>>luxury;
        }
        out <<roll_number<<" hotel name: "<<hotelName<<" Standard cost: "<<stdcost<<" Premium cost: "<<premium<<" Luxury cost: "<<luxury<<endl;
        roll_number+=1;
        out.close();
        cout<<"\n You have successfully registered. "<<hotelName<<" hotel."<< endl;

    }
    

     void hotels()
    {
        string hotelNo[] = {"Skylight", "Hilton", "Radisonblue"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }

        cout << "\nCurrently we collaborated with above hotels!" << endl;

        cout << "Press any key to back or\nEnter Number of the hotel you want to book or see details: ";
        cin >> choiceHotel;

        system("CLS");

        if(choiceHotel == 1){
            cout << "-------WELCOME TO HOTEL Skylight-------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by Skylight:\n" << endl;

            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: birr 5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: birr 10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Avendra: birr 15000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Skylight" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Skylight" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Skylight" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(choiceHotel == 2){
            cout << "-------WELCOME TO HOTEL Hilton-------\n" << endl;

            cout << "Swimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;

            cout << "Packages Offered by Hilton:\n" << endl;

            cout << "1. Family Pack" << endl;
            cout << "\t birr 15000.00 for a day" << endl;
            cout << "2. Couple Pack" << endl;
            cout << "\t birr 10000.00 for a day" << endl;
            cout << "3. Single Pack" << endl;
            cout << "\t birr 5000.00 for a day" << endl;

            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 15000.00;
                cout << "You have successfully booked Family Pack at Hilton" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "You have successfully booked Couple Pack at Hilton" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 5000.00;
                cout << "You have successfully booked Single Pack at Hilton" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(choiceHotel == 3){
            cout << "-------WELCOME TO HOTEL Radisonblue-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout << "Amazing offer in this summer: birr 5000.00 for a one day!!!" << endl;

            cout << "\nPress another key to back or\nPress 1 to book this special package: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "You have successfully booked Radisonblue Special Pack" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
    };

    }


};
float Booking::hotelCost;
class Chargers : public Booking, Cabs, Customer //Multiple Inheritance of some other classes to Chargers
{

public:

    void printBill()
    {
        ofstream outf("receipt.txt"); //receipt for bought items
        {
            outf << "--------ABC Travel Agency--------" << endl;
            outf << "-------------Receipt-------------" << endl;
            outf << "_________________________________" << endl;

            outf << "Customer ID: " << Customer::cusID << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
            outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastCabCost << endl;

            outf << "_________________________________" << endl;
            outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::hotelCost+Cabs::lastCabCost << endl;
            outf << "_________________________________" << endl;
            outf << "------------THANK YOU------------" << endl;
        }
        outf.close();
        //cout << "Your receipt printed, please get it from the file saved path:D" << endl;
    }

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu() //menu function contain main menu
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t      *let's travel *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    //cout << "\t|\tAgency System Management -> 0" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\Cars Management     -> 2\t|" << endl;
    cout << "\t|\Hotels Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    Customer a2; //creating objects
    Cabs a3;
    Booking a4;
    Chargers a5;

    /*if(mainChoice == 0){

    }*/
    if(mainChoice == 1){
        cout << "------Customers------\n" << endl;
        cout << "1. Enter New Customer"<< endl;
        cout << "2. See Old Customers"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getDetails();
        }
        else if(inChoice == 2){
            a2.showDetails();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            menu();
        }
        else{
            menu();
        }
    }
    else if(mainChoice == 2){
        a3.cabDetails();
    }
    else if(mainChoice == 3){
        cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
        a4.hotels();
    }
    else if(mainChoice == 4){
        cout << "-->Get your receipt<--\n" << endl;
        a5.printBill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");
            a5.showBill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 5){
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
};



int main(){
   
    TravelCompany company;
    
    // customer.showDetails();
    return 0;
}



