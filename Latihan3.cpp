#ifndef LATIHAN3_H_INCLUDED
#define LATIHAN3_H_INCLUDED

using namespace std;
void terbesar();

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

#endif // LATIHAN3_H_INCLUDED
