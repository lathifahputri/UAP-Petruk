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

void display(){
    cout << ">SAYURAN TUBABA<" << endl;
    for(int i = 0; i<10; i++){
        cout << tanaman[i] << endl;
    }
}

void print(stack<int> x){
    stack<int> keranjang = x;
        while (!keranjang.empty()){
            cout << "Sayuran : " << tanaman[keranjang.top()-1] << endl;
            cout << "Harga : Rp." << harga[keranjang.top()-1]  << endl;
            cout << "--------------------------------------" << endl;
            keranjang.pop();
        }
}

int main(){
	int pilih;
	do{
		if(!pangan.empty()){
			cout << "Daftar Belanjaan sayurku : " << endl;
			print(pangan);
		}else{
		    cout << "[Keranjang Sayur Anda masih kosong]" << endl;
		    cout << "--------------------------------------" << endl;
		}
    display();
    	cout <<"-------------------------------------------" << endl;
   	    cout <<"Program Checkout Sayurqeu" << endl;
  	    cout <<"1. Tambah Sayuran ke dalam keranjang" << endl;
        cout <<"2. Hapus Sayuran dari keranjang" << endl;
        cout <<"3. Total Belanjaan" << endl;
    	cout <<"Masukkan Pilihan anda : ";
    cin >> pilih;
       switch (pilih){
       	case 1 : push();
       			break;
       			
        case 2 : pop();
        		break;
        		
        case 3 :if(total!=0){
        	    cout << "---------------------------------------------------" << endl;
				cout <<"Total Belanja Sayuran anda : Rp"<< total << endl;
				cout <<"Silahkan melanjutkan pembayaran ke kasir" << endl;
				cout << "---------------------------------------------------" << endl;
				getch();
				return 0;
				
		       }else{
		       	cout << "---------------------------------------------------" << endl;
		       	cout<< "Maaf Silahkan masukkan Sayuran yang ingin anda beli!" << endl;
			   }
        		break;
        		
        default:
        	cout << "Inputan Anda Salah , silahkan masukkan inputan yang tersedia!" << endl;
            system("pause");
        	break;
   	   }
   	   	 getch();
   	  	 system("cls");
	}while(pilih != 4);
	
		return 0;
}
