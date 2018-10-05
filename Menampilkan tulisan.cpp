#include <iostream>
using namespace std;

int main()
{
    string nama;
    cout<<" Program segitiga tulisan\n";
    cout<<"=============================\n";
    cout<<" Masukkan nama : ";
	cin>>nama; 
    cout<<"=============================";
    cout<<endl;
    cout<<"Keluaran yang diperlukan adalah :";
    cout<<endl;
    int i=nama.length()-1; 
    for (i;i>=0;i--){ 
        for(int a=0;a<=i;a++){ 
            cout<<nama[a];
        }
        cout<<endl;
    }
    return 0;
}
