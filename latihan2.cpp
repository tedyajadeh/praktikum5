#include<iostream>

 using namespace std;

 void terbesar();
 void urut_data();

 int main() {

     int a;

     do {

        //system("clear");
        cout << "============================\n";
        cout << "         MENU PILIHAN       \n";
        cout << "============================\n";
        cout << "1. Cari nilai terbesar data \n";
        cout << "2. Urutkan data\n";
        cout << "0. Keluar\n";
        cout << "============================\n";
        cout << "\nMasukkan pilihan: ";
        cin >> a;

        switch(a) {
            case 1:
                terbesar();
                break;
            case 2:
                urut_data();
                break;

        }

     }while(a != 0);


 }

 void terbesar(){
     cout << "\Menu terbesar terpilih\n\n";
     cout << "Masukkan nilai N: ";
     int n;
     cin >> n;

     int max=0, a=0;
     for (int i=0; i<n; i++) {
        cout << "Masukkan bilangan ke-" << (i+1) << "; ";
        cin >> a;

        if (max < a)
            max = a;
     }
     cout << "Nilai terbesar adalah: " << max;
     cout << "\n\n";
 }

 void urut_data() {
     int A,B,C;

     cout << "Masukkan bilangan A: "; cin >>A;
     cout << "Masukkan bilangan B: "; cin >>B;
     cout << "Masukkan bilangan C: "; cin >>C;

     if (A<B) {
        if (B<C)
            cout << "Urutkan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutkan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutkan bilangan: " << C << ", " << A << ", " << B << endl;
        }
     } else {
         if (A<C)
            cout << "Urutkan bilangan: " << B << ", " << A << ", " << C << endl;
         else {
            if (B,C)
                cout << "Urutkan bilangan: " << B << ", " << C << ", " << A << endl;
            else
                cout << "Urutkan bilangan: " << C << ", " << B << ", " << A << endl;
         }
         }
     }

