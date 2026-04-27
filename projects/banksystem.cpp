#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Bank
{
public:
int accno;
string name;
float balance;

 Bank(int a, string n, float b){
accno = a;
name = n;
balance = b;

 }
 void display(){
    cout<<"Account number :"<<accno<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Balance :"<<balance<<endl;

 }
};
class Banksystem{
    vector<Bank> banklist;
    public:
   void CreateAccount(){
    
    int accno;
    string name;
    float balance;

    cout<<"enter Account number:  "<<accno<<endl;
    cin>>accno;
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter balance :"<<endl;
    cin>>balance;
     Bank b(accno, name, balance);
     banklist.push_back(b); 
   }

   void display(){
    for(int i = 0; i<banklist.size(); i++){
        banklist[i].display();
    }
   }
   void deposit(){
    int accno;
    float amount;

    cout<<"enter Account number :"<<endl;
    cin>>accno;
    cout<<"enter amountto deposit:"<<endl;
    cin>>amount;
    for(int i = 0; i< banklist.size(); i++)
    {
        if(banklist[i].accno == accno){
            banklist[i].balance += amount;
            cout<<"Deposit succesfullly."<<endl;
            return ;
        }
        else
        {
            cout<<"Account not found."<<endl;

        }
    }

   }


   void withdraw(){
    int accno;
    float amount;

    cout<<"enter Account number :"<<endl;
    cin>>accno;
    cout<<"entter withdraw amount :"<<endl;
    cin>>amount;
 for(int i = 0; i< banklist.size(); i++)
 {
    if(banklist[i].accno == accno)
    {
        if(banklist[i].balance >= amount)
        {
            banklist[i].balance -= amount;
            cout<<"withdraw succesfully."<<endl;

        }
        else{
            cout<<"insufficiant balance."<<endl;

        }
    }
    else{
        cout<<"Account not found."<<endl;
    }
 }
   }
   void saveToFile(){
    ofstream file("bank.txt");

    for(int i = 0; i< banklist.size(); i++)
    {
        file <<banklist[i].accno<<" "<<endl;
        file <<banklist[i].name<<" "<<endl;
        file <<banklist[i].balance<<" "<<endl;

    }
    file.close();
    cout<<"DAta saved to file. \n";
   }
   void loadFromFile()
   {
    ifstream file("BAnk.txt");
int accno;
float balance;
string name;
   while(file>> accno>>name>>balance){
    Bank obj(accno, name, balance);
    banklist.push_back(obj);
   }
   file.close();
   cout<<"data loaded\n";

   }


 };
int main(){
    Banksystem system;
    int choice;
    do{
        cout<<"\n 1. Create Account \n2. display \n3.Deposit \n4. withdraw \n5.Save \n6.Load \n 7. exit\n";
        cout<<"enter choices:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            system.CreateAccount();
            break;
 
            case 2:
            system.display();
            break;

            case 3:
            system.deposit();
            break;

            case 4:
            system.withdraw();
            break;

            case 5:
            system.saveToFile();
            break;

            case 6:
            system.loadFromFile();
            break;

            case 7:
            break;

            default:
            cout<<"Invalid choice."<<endl;
            break;


        }
    }while (choice != 7);
    return 0;

}