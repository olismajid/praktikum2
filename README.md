# praktikum2

##latihan1.cpp : program menghitung bilangan terbesar dari 3 bilang

**Alur algoritma**
1. Mendeklarasikan variabel 'int A, B, C' sebagai variable input.
2. Membaca input dari keyboard 'cin >> A >> B >> C'
3. Membandingkan nilai variable **A** dan **B**
4. Kondisi **True**, maka bandingkan nilai variable **A** dengan **C**
5. Kondisi **False**, maka bandingkan nilai variable **B** dengan **C**

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/olismajid/praktikum2/master/flowchart.png)

**Screenshoot**
![Screenshoot](https://raw.githubusercontent.com/olismajid/praktikum2/master/SS.png)

**code program lengkap**
'''c++
#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Masukkan bilangan 1: ";
    cin >> A;

    cout << "Masukkan bilangsn 2: ";
    cin >> B;

    cout << "Masukkan bilangan 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
    else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah; " << B << endl;
        else
            cout << "Bilangan terbesar adalah; " << C << endl;
    }
}



### latihan2.cpp :program menghitung bilangan terbesar dari 4 bilang

**Alur algoritma**
1. Mendeklarasikan variabel 'int A, B, C' sebagai variable input.
2. Membaca input dari keyboard 'cin >> A >> B >> C >> D'
3. Membandingkan nilai variable **A** dan **B**
4. Kondisi **True**, maka bandingkan nilai variable **A** dengan **D**
5. Kondisi **False**, maka bandingkan nilai variable **B** dengan **D**

****Screenshoot**
![Screenshoot](https://raw.githubusercontent.com/olismajid/praktikum2/master/scrensoot.png)

**code program lengkap**
'''c++
#include <iostream>
using namespace std;
int main()
{
int A, B, C, D, terbesar;
cout<<"Masukkan bilangan 1 : ";
 cin>>A;
cout<<"Masukkan bilangan 2 : ";
 cin>>B;
cout<<"Masukkan bilangan 3 : ";
 cin>>C;
cout<<"Masukkan bilangan 4 : ";
 cin>>D;

{
if(A > B)
terbesar = A;

else
terbesar = B;

if(C > D)
terbesar = B;

else
terbesar = B;

cout<<endl;
cout<<"Nilai Terbesar = "<<terbesar;cout<<endl;}

    return 0;
}
