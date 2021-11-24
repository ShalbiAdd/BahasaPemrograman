#include <iostream>
using namespace std;

int main(){
    int x;
    char y;
    char menu;

    BAJU :
    cout<<"===================================================="<<endl;
	cout<<"                 Toko Baju Kita "<<endl;
	cout<<"===================================================="<<endl;
	cout<<" Masukkan Kode baju : "<<endl;
	cout<<" 1. IMP"<<endl;
	cout<<" 2. Prada "<<endl;
	cout<<" 3. Gucci "<<endl;
	cout<<" 4. Louis Vuitton "<<endl;
	cout<<" 5. Kick Denim "<<endl;
	cout<<" 6. Keluar "<<endl;
    cout<<" PILIH KODE [1/2/3/4/5/6] : ";
    cin>>x;

    switch(x){

        case 1 :
            cout<<" Merk Baju : IMP "<<endl;
            cout<<" Pilih Size (S, M, E) : ";
            cin>>y;
            if((y=='S') || (y=='s')){
                cout<<" Ukuran S harganya Rp. 200.000 "<<endl;
            }
            else if ((y=='M') || (y=='m')){
                cout<<" Ukuran M harganya Rp. 220.000 "<<endl;
            }
            else if ((y=='E') || (y=='e')){
                cout<<" Ukuran lainnya harganya Rp. 250.000 "<<endl;
             }
        break;

        case 2 :
            cout<<" Merk Baju : Prada "<<endl;
            cout<<" Pilih Size (S, M, E) : ";
            cin>>y;
            if((y=='S') || (y=='s')){
                cout<<" Ukuran S harganya Rp. 150.000 "<<endl;
            }
            else if ((y=='M') || (y=='m')){
                cout<<" Ukuran M harganya Rp. 160.000 "<<endl;
            }
            else if ((y=='E') || (y=='e')){
                cout<<" Ukuran lainnya harganya Rp. 170.000 "<<endl;
            }
        break; 

        case 3 :
            cout<<" Merk Baju : Gucci "<<endl;
            cout<<" Pilih Size (S, M, E) : ";
            cin>>y;
            if((y=='S') || (y=='s')){
                cout<<" Ukuran S harganya Rp. 200.000 "<<endl;
            }
            else if ((y=='M') || (y=='m')){
                cout<<" Ukuran M harganya Rp. 200.000 "<<endl;
            }
            else if ((y=='E') || (y=='e')){
                cout<<" Ukuran lainnya harganya Rp. 200.000 "<<endl;
             }
        break;

        case 4 :
            cout<<" Merk Baju : Louis Vuttion "<<endl;
            cout<<" Pilih Size (S, M, E) : ";
            cin>>y;
            if((y=='S') || (y=='s')){
                cout<<" Ukuran S harganya Rp. 300.000 "<<endl;
            }
            else if ((y=='M') || (y=='m')){
                cout<<" Ukuran M harganya Rp. 300.000 "<<endl;
            }
            else if ((y=='E') || (y=='e')){
                cout<<" Ukuran lainnya harganya Rp. 350.000 "<<endl;
             }
        break;

        case 5 :
            cout<<" Merk Baju : Kick Denim "<<endl;
            cout<<" Pilih Size (S, M, E) : ";
            cin>>y;
            if((y=='S') || (y=='s')){
                cout<<" Ukuran S harganya Rp. 100.000 "<<endl;
            }
            else if ((y=='M') || (y=='m')){
                cout<<" Ukuran M harganya Rp. 120.000 "<<endl;
            }
            else if ((y=='E') || (y=='e')){
                cout<<" Ukuran lainnya harganya Rp. 130.000 "<<endl;
             }
        break;

        case 6 :
            goto KELUAR;
        break;
    }

    cout<<" Apakah Ingin Cek Harga Lain [Y/N] ? ";
    cin>>menu;
    cout<<endl;

    if((menu=='y') || (menu=='Y')){
         goto BAJU;
     }

    else if ((menu=='n') || (menu=='N')){
         goto KELUAR;
     }

    KELUAR :
    cout<<"===================================================="<<endl;
	cout<<"                  TERIMAKASIH "<<endl;
	cout<<"===================================================="<<endl;
    return 0;

}