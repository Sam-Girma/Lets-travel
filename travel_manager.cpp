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
class cars{
    public:
    int carChoise, days;
    float rentCost;

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




};

int main(){
   
    Customers customer;
    // customer.getDetails();
    customer.showDetails();
    return 0;
}



