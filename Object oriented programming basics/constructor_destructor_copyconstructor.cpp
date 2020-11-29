/*
Create a class that stores details about the computer (Assembled/branded, RAM, HDD,
processor speed, price etc.). Use constructors to initialize the object and a destructor that
deducts the count of object each time the object is passed to destroy function. Also use copy
constructor to create a system with the configuration same as that’s of an existing system. 
*/

#include<iostream>

using namespace std;

static int count=0;

class computer{
    public:
    string type,RAM,HDD,speed;
    int price;
    computer(string type1, string RAM1, string HDD1, string speed1, int price1)
    {
        type=type1;
        RAM=RAM1;
        HDD=HDD1;
        speed=speed1;
        price=price1;
        count++;
    }
    computer(const computer &c2)
    {
        type=c2.type;
        RAM=c2.RAM;
        HDD=c2.HDD;
        speed=c2.speed;
        price=c2.price;
        count++;
    }
    ~computer()
    {
        count--;
        cout<<"Count is: "<<count<<endl;
    }
};
int main()
{
    computer c1("Branded","2GB","1TB","10GHz",50000);
    computer c2 = c1;

    cout<<"Type: "<<c1.type<<" RAM: "<<c1.RAM<<" HDD: "<<c1.HDD<<" Speed: "<<c1.speed<<" Price: "<<c1.price<<endl;
    cout<<"Type: "<<c2.type<<" RAM: "<<c2.RAM<<" HDD: "<<c2.HDD<<" Speed: "<<c2.speed<<" Price: "<<c2.price<<endl;
}
