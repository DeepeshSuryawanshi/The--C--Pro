#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout<< "Enter the Value of N  : ";
    cin>>n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;       
    }
    return 0;
}