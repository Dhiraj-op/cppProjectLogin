#include<bits/stdc++.h>
using namespace std;

void login();
void registration();
void forget();

int main(){

    int c;
    cout<<"\t\t\t___________________________________________________\n\n\n";
    cout<<"\t\t\t               Welcome to the Login page           \n\n\n";
    cout<<"\t\t\t_______________        MENU             _____________\n\n";
    cout<<"                                                           \n\n";
    cout<<"\t|  Press 1 to LOGIN             |"<<endl;
    cout<<"\t|  Press 2 to REGISTER          |"<<endl;
    cout<<"\t|  Press 3 to RESET PASSWORD    |"<<endl;
    cout<<"\t|  Press 4 to EXIT              |"<<endl;
    cout<<"\n\t\t\t Please Enter Your Choice : ";
    cin>>c;
    cout<<endl;

    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forget();
        break;
    case 4:
        cout<<"\t\t\t Thankyou!  \n\n";
        break;
    default:
    system("cls");
    cout<<"\t\t\t Please select from the options given above  \n"<<endl;
    main();
        break;
    }

}