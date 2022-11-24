#include <iostream>

using namespace std;

int main()
{  string send_money;
   string withdraw_cash;
   string BuyAitimeData;
   string makePayments;
   string FinancialServices;
   string myAccount;
   string step1;
   string sendMoney;
   string vodaNetwork;
   string recipientNumber;
   string amount;
   string Reference;
   string pin;
   string tillNumber;


        cout<<"Enter momo hashcode(*110#)\n";
   string momoHashcode = "*110#";
   cin>>momoHashcode;
    if(momoHashcode == "*110#"){
        cout<<"1. Send Money\n";
        cout<<"2. Withdraw Cash\n";
        cout<<"3. Buy Airtime or Data\n";
        cout<<"4. Make Payments\n";
        cout<<"5. Financial Services\n";
        cout<<"6. My Account\n";
        cout<<endl;


//------------------------------------------ SEND MONEY---------------------------
        cin>>step1;
        if (step1 == "1"){
            cout<<"Send Money\n";

            cout<<"1. Vodafone Network\n";
            cout<<"2. Other Networks\n";
            cout<<"3. To Bank Account\n";
            cout<<"4. E-zwich\n";
            cout<<"5. From Linked Bank Account\n";
            cout<<"6. To Unregistered\n";
            cout<<"0 Back\n";
            cout<<endl;


            //---- VODAFONE NETWORK
            cin>>sendMoney;
            if(sendMoney == "1"){
                cout<<"Choose the receiver\n";
                cout<<"1. To enter recipient number\n";
                cout<<"2. My List\n";
                cout<<"0 Return to Main Menu\n";
                cout<<endl;

                cin>>vodaNetwork;
                if(vodaNetwork == "1"){
                    cout<<"Enter recipient number\n";
                    cin>>recipientNumber;
                    cout<<"Enter Amount\n";
                    cin>>amount;
                    cout<<"Enter Reference\n";
                    cin>>Reference;
                    cout<<"Send GHS"<<amount<<" to "<<recipientNumber<<"Name.\n Fee is 0\n"<<Reference<<"\nEnter PIN to Complete or\n 1 to cancel\n";

                }
                else if(vodaNetwork == "2"){
                    cout<<"Choose from My List\n:";
                }


                // ----OTHER NETWORKS
               }
               else if(sendMoney == "2"){
                 cout<<"Please choose network\n";
                 cout<<"1. MTN\n";
                 cout<<"2. AirtelTigo\n";
                 cout<<"3. G-Money\n";
                 cout<<"4. Zeepay\n";
                 cout<<"00 Back\n";
               }


               // ----TO BANK ACCOUNT
               else if(sendMoney == "3"){
                cout<<"Select your bank starting with alphabet\n";
                cout<<"1. A-D\n";
                cout<<"2. E-F\n";
                cout<<"3. G-R\n";
                cout<<"4. S-Z\n";
               }


               //---- E-ZWICH
               else if(sendMoney == "4"){
                cout<<"Enter Account Number\n";
               }


               //---- FROM LINKED BANK ACCOUNT
               else if(sendMoney == "5"){
                cout<<"Select your bank\n";
                cout<<"1. A-D\n";
                cout<<"2. E-G\n";
                cout<<"3. H-R\n";
                cout<<"4. S-Z\n";
               }


               //---- TO UNREGISTERED NUMBER
               else if(sendMoney == "6"){
                cout<<"A voucher will be generated for withdrawal at\n an Agent point by the receiver \n";
                cout<<"1. To enter recipient number\n";
                cout<<"2. My List\n";
               }

        }



// -----------------------------WITHDRAW CASH------------------
        else if(step1 == "2"){
            cout<<"Withdraw Cash\n";
            cout<<"1. From Agent\n";
            cout<<"2. From ATM\n";
            cout<<"0 Back\n";
            cout<<endl;
            cin>>withdraw_cash;

            // FROM AGENT
            if(withdraw_cash == "1"){
                cout<<"Enter till no\n";
                cin>>tillNumber;
                cout<<"Re-enter Till Number\n";
                cout<<"Enter amount\n";
                cin>>amount;
                cout<<"Withdraw GHS"<<amount<<" from "<<tillNumber<<"- Agent Name.\n Fee is 0\n"<<Reference<<"\nEnter PIN to Complete\n";
                cout<<endl;
                }

                //FROM ATM
              else if(withdraw_cash == "2"){
                cout<<"Please enter PIN to receive voucher\n";
                cin>>pin;
                cout<<"Your voucher is 1234\n";
              }



        }
// ----------------------------------BUY AIRTIME OR DATA-----------------------------
        else if(step1 == "3"){
            cout<<"Buy Airtime or Data\n";
            cout<<"1. Buy Airtime\n";
            cout<<"2. Buy Data / 2 Moorch\n";
            cout<<"3. Special Offers\n";
            cout<<endl;

            // BUY AIRTIME
            if(BuyAitimeData == "1"){
                cout<<"Buy Airtime\n";
                cout<<"1. My Phone\n";
                cout<<"2. Other Vodafone Number\n";
                cout<<"3. Landline\n";
                cout<<"4. Other Networks\n";
                cout<<"00 Back\n";
                cout<<endl;
                }
             else if(BuyAitimeData == "2"){
                cout<<"Select Option\n";
                cout<<"1. o Expiry\n";
                cout<<"2. Daily/Bossu\n";
                cout<<"3. Monthly/2Moorch\n";
                cout<<"4. Night KIng\n";
                cout<<"5. Jumbo Bundle\n";
                cout<<"6. Digi-Learn\n";
                cout<<"0 Go Back\n";
                cout<<endl;
             }

        }


//-----------------------------------------MAKE PAYMENTS----------------------------------
        else if(step1 == "4"){
            cout<<"Make Payments\n";
            cout<<"1. Pay Bills\n";
            cout<<"2. Buy Goods\n";
            cout<<"3. Fun and Games\n";
            cout<<"4. Generate Voucher\n";
            cout<<"5. My List\n";
            cout<<"6. Pay Small Small\n";
            cout<<"7. Donations\n";
            cout<<"8. Complete Payment/Transactions\n";
            cout<<"9. Schemes\n";
            cout<<"10. School Payments\n";
            cout<<"0 Back\n";
        cout<<endl;

        }



// ------------------------------------------FINANCIAL SERVICES----------------------------
        else if(step1 == "5"){
            cout<<"Financial Services\n";
            cout<<"1. Insurance\n";
            cout<<"2. Pensions\n";
            cout<<"3. Loans\n";
            cout<<"4. Overdraft\n";
            cout<<"5. Savings\n";
            cout<<"6. Investments\n";
            cout<<"7. Bank Services\n";
            cout<<"0 Back\n";
        }


------------//---------------------------MY ACCOUNT----------------------------------
        else if(step1 == "6"){
            cout<<"My Account\n";
            cout<<"1. Check Balance\n";
            cout<<"2. My Statements\n";
            cout<<"3. Change Pin\n";
            cout<<"4. Account Information\n";
            cout<<"5. My List\n";
            cout<<"6. Help\n";
            cout<<"7. Self-Service\n";
            cout<<"0 Back\n";
        }
   }




    return 0;
}
