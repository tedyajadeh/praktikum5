# praktikum5

##latihan1.cpp : Membuat fungsi sederhana

**Alur algoritma**
1. Mendeklarasikan variabel 'int sum(int a,int b);' sebagai variable input.
2. Membaca input dari keyboard 'cin >> a >> b;'
3. Membandingkan nilai variable int a, b;
				cin >> a >> b;
    				cout << sum(a, b);

    				int c = sum(a, 10);
    				cout << c;

    				cout << bagi(a,b);



**code program lengkap**
'''c++
#include<iostream>

using namespace std;

//deklarasi fungsi
int sum(int,int);

int bagi(int a, int b) {
    return a/b;
}

//fungsi utama
int main(){

    //menmanggil fungsi
    cout<<sum(1,99);

    int a, b;
    cin >> a >> b;
    cout << sum(a, b);

    int c = sum(a, 10);
    cout << c;

    cout << bagi(a,b);

    return 0;
}

/*fungsi didefinisikan setelah fungsi utama
 */

 int sum(int num1, int num2){
    int num3 = num1*num2;
    return num3;
}


###latihan2.cpp :  Mengembangkan aplikasi dengan membuat fungsi dari hasil praktikum sebelumnya menjadi satu aplikasi dengan menampilkan menu pilihan.

**Alur algoritma**
1. Mendeklarasikan variabel 'void terbesar,urut_data;' sebagai variable input.
2. Membaca input dari keyboard 'cin >> a'
3. Membandingkan nilai variable  cout << "Nilai terbesar adalah: " << max;
   				 cout << "\n\n";


**code program lengkap**
'''c++
#include<iostream>


using namespace std;

void terbesar();
void urut_data();

int main() {

    int a;

    do {

        //system("clear");
        cout << "===============================\n";
        cout << "         MENU PILIHAN          \n";
        cout << "===============================\n";
        cout << "1. Cari nilai terbesar data \n";
        cout << "2. Urutkan data\n";
        cout << "0. Keluar\n";
        cout << "===============================\n";
        cout << "\nMasukan pilihan: ";
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
    cout << "\nMenu terbsar terpilih\n\n";
    cout << "Masukan nilai N: ";
    int n;
    cin >> n;

    int max=0, a=0;
    for (int i=0; i<n; i++) {
        cout << "Masukan bilangan ke-" << (i+1) << "; ";
        cin >> a;

        if (max < a)
            max = a;
    }
    cout << "Nilai terbesar adalah: " << max;
    cout << "\n\n";
}

void urut_data() {
    int A,B,C;

    cout << "Masukan bilangan A: "; cin >>A;
    cout << "Masukan bilangan B: "; cin >>B;
    cout << "Masukan bilangan C: "; cin >>C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: " << B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << B << ", " << A << endl;
        }
        }
    }

###latihan3.cpp : Kembangkan aplikasi dengan menggunakan file header (memisahkan fungsi kedalam file terpisah).

**Alur algoritma**
1. Mendeklarasikan variabel 'void terbesar,urut_data;' sebagai variable input.
2. Membaca input dari keyboard 'cin >> a'
3. Membandingkan nilai variable cout << "Nilai terbesar adalah: " << max;
    				cout << "\n\n"; 
				#endif // LATIHAN3_H

**code program lengkap**
'''c++
#ifndef LATIHAN3_H
#define LATIHAN3_H


using namespace std;

void terbesar(); {


int main() {

    int a;

    do {

        //system("clear");
        cout << "===============================\n";
        cout << "         MENU PILIHAN          \n";
        cout << "===============================\n";
        cout << "1. Cari nilai terbesar data \n";
        cout << "2. Urutkan data\n";
        cout << "0. Keluar\n";
        cout << "===============================\n";
        cout << "\nMasukan pilihan: ";
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
    cout << "\nMenu terbsar terpilih\n\n";
    cout << "Masukan nilai N: ";
    int n;
    cin >> n;

    int max=0, a=0;
    for (int i=0; i<n; i++) {
        cout << "Masukan bilangan ke-" << (i+1) << "; ";
        cin >> a;

        if (max < a)
            max = a;
    }
    cout << "Nilai terbesar adalah: " << max;
    cout << "\n\n";
}

};

#endif // LATIHAN3_H
