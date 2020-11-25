#include<iostream>

using namespace std;

class student{
    public:
    string reg_no,name,email;
    int age;
    int duplicate(student s[], int i, string x)
    {
        for(int a=0;a<i-1;a++)
        {
            if(s[a].reg_no==x)
            {
                cout<<"This Registration number is already taken"<<endl;
                return 0;
            }
        }
        return 1;
    }
    void display(student s[], int i)
    {
        for(int a=0;a<i;a++)
        {
            cout<<"Name: "<<s[a].name<<endl;
            cout<<"Registration number: "<<s[a].reg_no<<endl;
            cout<<"Email: "<<s[a].email<<endl;
            cout<<"Age: "<<s[a].age<<endl;
        }
    }
};

int main()
{
    student s[10];
    int i=0,x=0,z;
    while(x<3)
    {
        cout<<"1.Enter details\n2.View student log\n3.Exit"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            cout<<"Enter the registration number of the student"<<endl;
            cin>>s[i].reg_no;
            z = s[i].duplicate(s,i+1,s[i].reg_no);
            if (z == 0)
            {
                break;
            }
            i++;
            cout<<"Enter the name of the student"<<endl;
            cin>>s[i].name;
            cout<<"Enter the email of the student"<<endl;
            cin>>s[i].email;
            cout<<"Enter the age of the student"<<endl;
            cin>>s[i].age;
            break;
        case 2:
            s[i].display(s,i);
            break;
        default:
            break;
        }
    }
}
