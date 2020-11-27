#include<iostream>

using namespace std;

class carpentry{
    public:
    string type_of_wood,type_c,tools;
    int years_c;
    carpentry()
    {
        type_of_wood="";
        type_c="";
        tools="";
        years_c=0;
    }
};

class masonry{
    public:
    string type_of_const;
    int years_m;
    masonry()
    {
        type_of_const="";
        years_m=0;
    }
};

class driving{
    public:
    string license,vehicles;
    int years_d;
    driving()
    {
        license="";
        vehicles="";
        years_d=0;
    }
};

class employee:public carpentry,public driving,public masonry{
    public:
    int empid,years_of_exp,phone;
    string address;
    int carp,drive,mason;
    void emp_details()
    {
        cout<<"Enter employee ID: ";
        cin>>empid;
        cout<<"Enter the number of years of experience you have: ";
        cin>>years_of_exp;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your phone number: ";
        cin>>phone;
    }
    void carp_details()
    {
        cout<<"Enter type of wood: ";
        cin>>type_of_wood;
        cout<<"Enter the number of years of experience you have: ";
        cin>>years_c;
        cout<<"Enter the type of creations: ";
        cin>>type_c;
        cout<<"Enter the tools used: ";
        cin>>tools;
    }
    void mason_details()
    {
        cout<<"Enter type of constructions: ";
        cin>>type_of_const;
        cout<<"Enter the number of years of experience you have: ";
        cin>>years_m;
    }
    void drive_details()
    {
        cout<<"Enter license number: ";
        cin>>license;
        cout<<"Enter the number of years of experience you have: ";
        cin>>years_d;
        cout<<"Enter the type of vehicles: ";
        cin>>vehicles;
    }
    void display()
    {
        cout<<"Employee ID: ";
        cout<<empid<<endl;
        cout<<"Number of years of experience: ";
        cout<<years_of_exp<<endl;
        cout<<"Address: ";
        cout<<address<<endl;
        cout<<"Phone number: ";
        cout<<phone<<endl;
        if(carp==1)
        {
            cout<<"This employee knows Carpentry"<<endl;
            cout<<"Type of wood: ";
            cout<<type_of_wood<<endl;
            cout<<"Number of years of experience: ";
            cout<<years_c<<endl;
            cout<<"Type of creations: ";
            cout<<type_c<<endl;
            cout<<"Tools used: ";
            cout<<tools<<endl;
        }
        if(mason==1)
        {
            cout<<"This employee knows Masonry"<<endl;
            cout<<"Type of constructions: ";
            cout<<type_of_const<<endl;
            cout<<"Number of years of experience: ";
            cout<<years_m<<endl;
        }
        if(drive==1)
        {
            cout<<"This employee knows Driving"<<endl;
            cout<<"License number: ";
            cout<<license<<endl;
            cout<<"Number of years of experience: ";
            cout<<years_d<<endl;
            cout<<"Type of vehicles: ";
            cout<<vehicles<<endl;
        }
        if(drive==0 && carp==0 && mason==0)
        {
            cout<<"This employee has no skills"<<endl;
        }
    }
};

int main()
{
    employee emp[10];
    int x=0,i=0,y,empid,a;
    while(x<3)
    {
        cout<<"1.Entering details\n2.Displaying details\n3.Exit"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            emp[i].emp_details();
            cout<<"Does this employee know Carpentry? Enter 1 for yes and 0 for no: ";
            cin>>emp[i].carp;
            if(emp[i].carp==1)
            {
                emp[i].carp_details();
            }
            cout<<"Does this employee know Masonry? Enter 1 for yes and 0 for no: ";
            cin>>emp[i].mason;
            if(emp[i].mason==1)
            {
                emp[i].mason_details();
            }
            cout<<"Does this employee know Driving? Enter 1 for yes and 0 for no: ";
            cin>>emp[i].drive;
            if(emp[i].drive==1)
            {
                emp[i].drive_details();
            }
            i++;
            break;
        case 2:
            cout<<"Enter the employee ID you wish to see the details of: ";
            cin>>empid;
            for(a=0; a<i; a++)
            {
                if(empid==emp[a].empid)
                {
                    break;
                }
            }
            emp[a].display();
        default:
            break;
        }
    }
}