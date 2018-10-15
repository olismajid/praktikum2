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
