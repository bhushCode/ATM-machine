#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class atm
{int n;
  public:
  void choosebank();
  void transaction();
  void account();
  void amount();
  void transfer();
  void service();
  void others();
  void balance_enquiry()
 {
  int num;
  cout<<"\n\t 1.CREDIT";
  cout<<"\n\t 2.CURRENT";
  cout<<"\n\t 3.SAVING";
  cin>>num;
  system("cls");
  if(num==1)
  {
    cout<<"\t your transaction is being proceeded\n\tplease wait";
    Sleep(2000);
    system("cls");
    cout<<"\n\t your balance is 33,233";
    Sleep(2000);
    system("cls");
    cout<<"\n\t\t Thank you";
  }
  else if(num==2)
  {
      cout<<"\t your transaction is being proceeded\n\tplease wait";
    Sleep(2000);
    system("cls");
    cout<<"\n\t your balance is 33,233";
    Sleep(2000);
    system("cls");
    cout<<"\n\t\t Thank you";
  
  }
  else if (num==3)
  {
      cout<<"\t your transaction is being proceeded\n\tplease wait";
    Sleep(2000);
    system("cls");
    cout<<"\n\t your balance is 33,233";
    Sleep(2000);
    system("cls");
    cout<<"\n\t\t Thank you";
  
  }
  else
  {
    
    exit(1);
  }

 }
   atm()
   {
     cout<<"\n\t Hi please do not remove your chip card leave your card inserted during the entire transaction\n";
     Sleep(10000);
     system("cls");
     cout<<"\n\t please select language";
     cout<<"\n\t\t1.English";
     cout<<"\n\t\t2.hindi";
     cout<<"\n\t\t3.marathi";
     scanf("\n%d",&n);
     system("cls");
     if(n==1||n==2||n==3)
     {
       cout<<"\n\tenter any number between 10 and 99:";
       scanf(" \n\t\t%d",&n);
       system("cls");
       if(n>10&&n<100){
         cout<<"\n\t enter your pin:";
         scanf("\n\t%d",&n);
         if(n==1234){
           system("cls");
       choosebank();}
         else
         {
           exit(1);
         }
       }
     }
     else
        exit(1);
     
   }
   
};
void ministatement()
{
  cout<<"\n\n\t\t1.current  account  ";
  cout<<"\n\n\t\t2.saving account";
  int  n;
  cin>>n;
  system("cls");
  if(n==1)
  {
    cout<<"your transaction is being proceed \n please wait";
    Sleep(2000);
    system("cls");
    cout<<"this transaction is completed";
    Sleep(2000);
    system("cls");
  }
  else
  {
    
    cout<<"your transaction is being proceed \n please wait";
    Sleep(2000);
    system("cls");
    cout<<"this transaction is completed";
    system("cls");
  }
}
void atm::choosebank()
{
  
  cout<<"\n\t\t please choose 'Banking' for case withdrawal";
  cout<<"\n 1.registration                                    5.Banking";
  cout<<"\n 2.mini statements                                 6.balance inquiry";
  cout<<"\n 3.services                                        7.transfer";
  cout<<"\n 4.quick cash";
  cin>>n;
  system("cls");
  if(n==5)
  {
    transaction();
  }
  else if(n==2)
  {
    ministatement();
  }
  else if (n==6)
  {
    balance_enquiry();
  }
  else if (n==7)
  {
    transfer();
  }
  else if(n==3)
  {
    service();
  }
  else
  {
    others();
  }

}
void atm::transaction()
{
  cout<<"\n\t please select transaction";
  cout<<"\n 1.deposit                             4.fast cash";
  cout<<"\n 2.pin change                          5.withdrawal";
  cout<<"\n 3.others                              6.Balance inquiry";
  cout<<"\n                                       7.mini statements";
  cin>>n;
  system("cls");
  if(n==5)
  {
    account();
  }
  else if (n==6)
  {
    balance_enquiry();
  }
  else if (n==7)
  {
    ministatement();
  }
  else
  {
    others();
  }
}
void atm::account()
{
  cout<<"\n\t please select Account type";
  cout<<"\n\t\t 1.current";
  cout<<"\n\t\t 2.savings";
  cin>>n;
  system("cls");
  if(n==1||n==2)
  {
    amount();
  }
  
}
void atm::amount()
{
  cout<<"\n\t Please enter your amount";
  cin>>n;
  system("cls");
  cout<<"\n\tyour Transaction is being processed please wait";
    Sleep(5000);
    system("cls");
    cout<<"\n\tplease collect your cash";
    Sleep(5000);
    system("cls");
    cout<<"\n\t\t TRANSACTION COMPLETED";
 
}
void atm::transfer()
{
   cout<<"1. acount based transfer";
   cout<<"\t2. credit card (mids) bill pay"<<endl;
   cout<<"3. IMT";
   cout<<"\t4. credit card (visa) bill pay"<<endl;
   cout<<"5. NPCI C2C corporate fund transfer";
   cout<<"\t6. card to card fund transfer"<<endl;
  cin>>n;
  system("cls");
  if(n==1||n==2||n==3||n==4||n==5||n==6)
  {
    cout<<"\tyour transaction is in proceed";
    Sleep(2000);
    system("cls");
    cout<<"\t thank you for choosing atm";
    Sleep(2000);
    system("cls");
    exit(1);
  }
  else
    exit(1);
}
void atm::service()
{
  cout<<"1. bill pay";
  cout<<"\t 2. inst fees exam fess"<<endl;
  cout<<"3.trust donation";
  cout<<"\t 4.mobile top-up"<<endl;
  cout<<"5.cheque book request ";
  cout<<"\t 6.others";
  cin>>n;
  system("cls");
  if(n==1||n==2||n==3||n==4||n==5)
  {
    cout<<"\t your transaction is in proceed";
    Sleep(2000);
    system("cls");
    cout<<"\t your transaction is completed";
    Sleep(2000);
    system("cls");
    cout<<"thank you";
    Sleep(2000);
    exit(1);
    
  }
  else if(n==6)
  {
    system("cls");
    cout<<" 1.interet banking request approval";
    cout<<"\t 2. credit card application"<<endl;
    cout<<"3. fixed deposit";
    cout<<"\t 4. pin for income tax filing";
    cin>>n;
    system("cls");
    if(n==1||n==2||n==3||n==4)
    {
      system("cls");
      cout<<"your transaction  is in proceed\n\t please wait";
      Sleep(2000);
      system("cls");
      cout<<"your transaction completed";
      Sleep(2000);
      exit(1);
    }
  }
}
void atm::others()
{
     system("cls");
      cout<<"your transaction  is in proceed\n\t please wait";
      Sleep(2000);
      system("cls");
      cout<<"your transaction completed";
      Sleep(2000);
      exit(1);

}
int main()
{
  atm a;
  return 0;
}