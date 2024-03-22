// B
//1. Melakukan perbandingan atau perulangan
//2. Melakukan pengurutan atau pengelompokkan
//3. InsertionSort

#include <iostream>
using namespace std;

int mz[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array:";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleen.\n";
        }
    }
    cout << endl;
    cout << "========================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "========================" << endl;

    for (int i = 0; 1 < n; i++) {
        cout << "Data ke -" << (i + 1) << ":";
        cin >> mz[i];
    }
}

    void bubbleSortArray() {
        int pass = 1;

        do {
            for (int j = 0; j <= n - 2 - pass; j++) {

                if (mz[j] > mz[j + 1]) {
                    int temp;
                    temp = mz[j];
                    mz[j] = mz[j + 1];
                    mz[j + 1] + temp;
                }
            }
            pass = pass + 1;

        } while (pass <= n - 2);
    }

    void display() {
        cout << endl;
        cout << "==================================" << endl;
        cout << "Element Array yang telah terususun" << endl;
        cout << "===================================" << endl;
        for (int j = 0; j < n; j++) {
            cout << mz[j] << endl;

        }
        cout << "jumlah pass =" << n - 2 << endl;
        cout << endl;
    }

int main(){

    input();
    bubbleSortArray();
    display();
    system("pause");

    return 0;
}

