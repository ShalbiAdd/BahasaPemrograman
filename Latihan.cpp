#include <iostream>

using namespace std;

int main(){

    double luas,panjang,lebar;
    cout<<" =========================================== "<<endl;
    cout<<"   Program Menghitung Luas Persegi Panjang "<<endl;
    cout<<" =========================================== "<<endl;
    cout<<" Masukkan Panjang \t\t : ";
    cin>>panjang;
    cout<<" Masukkan Lebar \t\t : ";
    cin>>lebar;

    luas = panjang * lebar;
    cout<<" Luasnya adalah \t\t :"<<luas<<endl;
    cout<<" =========================================== "<<endl;
    return 0;

}