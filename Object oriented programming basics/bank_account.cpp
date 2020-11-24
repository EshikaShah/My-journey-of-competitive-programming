#include<iostream>

using namespace std;

class account{
    public:
    int account_number, trans[10];
    string name;
    int balance=0,i=0;
    void deposit(int n)
    {
        balance+=n;
        trans[i]=n;
        i++;
        cout<<"Amount deposited: "<<n<<endl;
    }
    void withdraw(int n)
    {
        balance-=n;
        trans[i]=(-1)*n;
        i++;
        cout<<"Amount withdrawn: "<<n<<endl;
    }
    void bal()
    {
        cout<<"The balance of your account is: "<<balance<<endl;
    }
    void operations()
    {
        cout<<"Account number: "<<account_number<<endl;
        cout<<"Account holder's name: "<<name<<endl;
        for(int a=0;a<i;a++)
        {
            if(trans[a]>0)
            {
                cout<<"Deposited "<<trans[a]<<endl;
            }
            else
            {
                cout<<"Withdrawn "<<(-1)*trans[a]<<endl;
            }
            
        }
    }
};
int main()
{
    account a;
    int x=1,n;
    cout<<"Enter your account number: ";
    cin>>a.account_number;
    cout<<"Enter account holder's name: ";
    cin>>a.name;
    while(x!=5)
    {
        cout<<"1.Depost\n2.Withdrawal\n3.Balance\n4.Transaction history\n5.Exit\n";
        cin>>x;
        switch (x)
        {
        case 1:
            cout<<"Enter the amount to be deposited: ";
            cin>>n;
            a.deposit(n);
            break;
        case 2:
            cout<<"Enter the amount to be withdrawn: ";
            cin>>n;
            if(n>a.balance)
            {
                cout<<"Amount cannot be more than your balance";
            }
            else
            {
                a.withdraw(n);
            }
            break;
        case 3:
            a.bal();
            break;
        case 4:
            a.operations();
            break;
        default:
            break;
        }
    }
}