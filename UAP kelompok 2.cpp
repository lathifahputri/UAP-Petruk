#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

string tanaman[]={"1.Kentang", "2.Tomat", 
                   "3.Wortel", "4.Jagung", 
                   "5.Cabai", "6.Bawang Merah", 
                   "7.Kacang Tanah", "8.Terong", 
                   "9.Singkong", "10.Bayam"};
                   
int harga[]={15000,12000,
             13000,10000,
             75000,25000,
             30000,16000,
             12500,14000};
             
stack<int>pangan;
int total = 0;
int a;

void push(){
    cout << "Silahkan Pilih : " ;
    cin >> a;
    if(a > 10){
        cout << "Sayuran tidak tersedia" << endl;
    }
    else{
        pangan.push(a);
        total = total + harga[a-1];
    }
}

void pop(){
    if(!pangan.empty()){
        cout << "Sayuran Dihapus Dari Keranjang!" << endl;
        pangan.pop();
        total = total-harga[a-1];
    }
    else{
        cout << "Keranjang Kosong" << endl;
    }
    getch();
}
//ipehlaaiep
