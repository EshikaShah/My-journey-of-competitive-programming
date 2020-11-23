#include<iostream>
#include<vector>

using namespace std;

class math{
    public:
        int A[10],sum;

        int find_sum(int a[],int n)
        {
            sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
            }
            return sum;
        }

        float find_avg(int a[],int n)
        {
            int x = find_sum(a,n);
            return (float)x/n;
        }

};

int main()
{
    math m;
    int n;
    cout<<"Enter the length of the array ";
    cin>>n;
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++)
    {
        cin>>m.A[i];
    }
    cout<<"The sum of the numbers entered is "<<m.find_sum(m.A,n)<<endl<<"The average of the numbers entered is "<<m.find_avg(m.A,n);
}