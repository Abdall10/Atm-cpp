#include <iostream>
using namespace std;

// Variables
double balance = 2000;
int deposit = 0;
int withdraw = 0;
int passWord =8787;
int choice=0;

//End Variables

// function to display the menu of ATM
void display(){
cout<<"****** Menu ******"<<endl;
cout<<"1. Balane"<<endl;
cout<<"2. Withdraw"<<endl;
cout<<"3. Deposit"<<endl;
cout<<"4. Exit"<<endl;
cout<<"******************"<<endl;
}

// Function to process user's choices and transactions
void Process(){
    cout<<"Enter your password: \n";
    cin>>passWord;
    do{ 
// Check if the entered password is correct
    if(passWord == 8787) 
    {
      cout<<"Eter your choice: \n";
      cin>>choice;

      switch(choice){     
         case 1:
         cout<<"Your balance is: "<<balance<<" $ "<<endl;
         break;
         case 2:
         cout<<"Note your balance is :"<<balance<<" $ "<<endl;
         cout<<"Enter your amount : \n";
         cin>>withdraw;
         if(withdraw > balance){
         cout<<"We apologize, your balance is insufficient to withdraw this amount"<<endl;
         }else{
             balance = balance - withdraw;  // or balance+=withdraw;
             cout<<"now been updated. \n Your balance has:"<<balance<<" $ "<<endl;
         }
          break;
          case 3:
          cout<<"Your current balance is: "<<balance<<" $ "<<endl;
          cout<<"Enter the amount you want to deposit: \n";
          cin>>deposit;
          balance = balance + deposit; // or balance+= deposit;
          cout<<"Your new Balance is : "<<balance<<" $ "<<endl;
          break;
          case 4:
          cout<<"Thank you for using our ATM"<<endl;
          break;
       } // end of switch
     } // end od if
     else{
        char option = '0';
     cout<<"Invalid passwordIf If you want to try again, press [Y], and if you want to exit, press [N]"<<endl;
     cin>>option;

     if (option == 'Y' || option =='y'){
        cout<<"Enter your password: \n";
        cin>>passWord;
     }
     else
     {
        choice =4;
     }
     }
    } while(choice < 4); // Loop until the user chooses to exit
}// end of Process

int main()
{
    display(); // Call the function to display the menu
    Process(); // Call the function to process user's choices
    return 0;
}