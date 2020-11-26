/*
Create 2 classes one holding the personal details of the student (like regno, school, branch,
address and phone no) and another holding the students’ academic performance (regno,
semester, backlogs, CGPA, remarks). Inherit the classes personal and academic performance
in a new class communication (communication ID, date, and sent by). Display the
communication object to the parent with all the information.
*/

#include<iostream>

using namespace std;

class student{
    public:
    string reg_no,school,branch,address;
    int phone;
    void student_details()
    {
        cout<<"Enter the registration number: ";
        cin>>reg_no;
        cout<<"Enter the school name: ";
        cin>>school;
        cout<<"Enter the branch name: ";
        cin>>branch;
        cout<<"Enter the address: ";
        cin>>address;
        cout<<"Enter the phone number: ";
        cin>>phone;
    }
    void display_student()
    {
        cout<<"Registration number: ";
        cout<<reg_no<<endl;
        cout<<"School name: ";
        cout<<school<<endl;
        cout<<"Branch name: ";
        cout<<branch<<endl;
        cout<<"Address: ";
        cout<<address<<endl;
        cout<<"Phone number: ";
        cout<<phone<<endl;
    }
};

class acad{
    public:
    string reg_no1,semester,remarks;
    int backlogs;
    float cgpa;
    void acad_details()
    {
        cout<<"Enter the registration number: ";
        cin>>reg_no1;
        cout<<"Enter the semester: ";
        cin>>semester;
        cout<<"Remarks: ";
        cin>>remarks;
        cout<<"Enter the number of backlogs: ";
        cin>>backlogs;
        cout<<"Enter the CGPA: ";
        cin>>cgpa;
    }
    void display_acad()
    {
        cout<<"Registration number: ";
        cout<<reg_no1<<endl;
        cout<<"Semester: ";
        cout<<semester<<endl;
        cout<<"Remarks: ";
        cout<<remarks<<endl;
        cout<<"Number of backlogs: ";
        cout<<backlogs<<endl;
        cout<<"CGPA: ";
        cout<<cgpa<<endl;
    }
};

class communication: public student, public acad{
    public:
    int comm_id;
    string date,sent_by;
    void comm_details()
    {
        cout<<"Enter the communication ID: ";
        cin>>comm_id;
        cout<<"Enter the date: ";
        cin>>date;
        cout<<"Sent by: ";
        cin>>sent_by;
    }
    void display_comm()
    {
        cout<<"Registration number: ";
        cout<<reg_no1<<endl;
        cout<<"Semester: ";
        cout<<semester<<endl;
        cout<<"Remarks: ";
        cout<<remarks<<endl;
        cout<<"Number of backlogs: ";
        cout<<backlogs<<endl;
        cout<<"CGPA: ";
        cout<<cgpa<<endl;
        cout<<"School name: ";
        cout<<school<<endl;
        cout<<"Branch name: ";
        cout<<branch<<endl;
        cout<<"Address: ";
        cout<<address<<endl;
        cout<<"Phone number: ";
        cout<<phone<<endl;
        cout<<"Communication ID: ";
        cout<<comm_id<<endl;
        cout<<"Date: ";
        cout<<date<<endl;
        cout<<"Sent by: ";
        cout<<sent_by<<endl;
    }
};

int main()
{
    communication c[10];
    int x=0,z=0,i=0,j,h;
    int cid;
    while(x<3)
    {
        cout<<"1.Enter details\n2.Display\n3.Exit"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            c[i].student_details();
            c[i].acad_details();
            c[i].comm_details();
            i++;
            break;
        case 2:
            cout<<"1.Student details\n2.Academic details\n3.All details"<<endl;
            cin>>z;
            cout<<"Enter the communication id for that student: ";
            cin>>cid;
            for(j=0;j<i;j++)
            {
                if(cid==c[j].comm_id)
                {
                    h=j;
                    break;
                }
            }
            switch (z)
            {
            case 1:
                c[h].display_student();
                break;
            case 2:
                c[h].display_acad();
                break;
            case 3:
                c[h].display_comm();
                break;
            default:
                break;
            }
        default:
            break;
        }
    }
}
