#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Masukkan Jumlah Baris yang Anda Mau : ";
    cin>>n;

   for (int i = n; i >= 1; i--){

        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
   }
}