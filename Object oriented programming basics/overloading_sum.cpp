#include<iostream>

using namespace std;

class sum{
    public:
    int sum_to_one(int a)
    {
        int x=0;
        while(a!=0 || x>9)
        {
            if(a == 0) 
            { 
                a = x; 
                x = 0; 
            } 
            x += a%10;
            a = a/10;
        }
        return x;
    }
    int sum_to_one(string a)
    {
        int i,n=0,x=0;
        for(i=0;a[i]!='\0';i++)
        {
            n+=(int)a[i];
        }
        while(n!=0 || x>9)
        {
            if(n == 0) 
            { 
                n = x; 
                x = 0; 
            } 
            x += n%10;
            n = n/10;
        }
        return x;
    }
};

int main()
{
    sum s;
    int num;
    string str;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The sum is: "<<s.sum_to_one(num)<<endl;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The sum is: "<<s.sum_to_one(str)<<endl;
}