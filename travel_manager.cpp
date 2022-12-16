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
        out <<"hotel name: "<<hotelName<<" Standard cost: "<<stdcost<<"\nPremium cost: "<<premium<<"\nLuxury cost: "<<luxury<<endl;
        out.close();
        cout<<"\n You have successfully registered. "<<hotelName<<" hotel."<< endl;

    }

    void hotels(){
        ifstream in("Hotels.txt");
        {
            if(!in)
            {
                cout << "File Error!" << endl;
            }
            while(!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }


};




};

int main(){
   
    Customers customer;
    // customer.getDetails();
    customer.showDetails();
    return 0;
}



