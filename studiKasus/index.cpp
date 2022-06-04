Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@ilhamfauzan630 
ilhamfauzan630
/
SortingDataMahasiswa
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
SortingDataMahasiswa/main.cpp
@ilhamfauzan630
ilhamfauzan630 Initial commit
Latest commit a885386 yesterday
 History
 1 contributor
99 lines (85 sloc)  1.7 KB
   
#include <iostream>
using namespace std;

class datamhs{
  public:
    void input();
    void tampil();
    void tukar(int a, int b);
    void tukarnama(int c, int d);
    void proses();
    void caridata();

  private:
    int nim[10];
    int n;
    string namamhs[10];
};

void datamhs::input(){
    cout<<"Input Total Mahasiswa : ";
    cin>>n;
    
  
    for(int i=0; i<n; i++){
        cout<<"Masukan nim  : ";
        cin>>nim[i];
        cout<<"Masukan Nama : "; cin>>namamhs[i];
    }
    cout<<endl;
}

void datamhs::tampil()
{
    cout << "Menampilkan data mahasiswa"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nim : "<< nim[i]<<endl;
        cout << "Nama : "<<namamhs[i]<<endl;
    }
    cout << endl;
}

void datamhs::tukar(int a, int b)
{
    int t;
    t = nim[b];
    nim[b] = nim[a];
    nim[a] = t;
}

void datamhs::tukarnama(int c, int d){
    string p;
    p = namamhs[d];
    namamhs[d] = namamhs[c];
    namamhs[c] = p;
}

void datamhs::proses()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (nim[j] < nim[j - 1]){
                tukar(j, j - 1);
                tukarnama(j, j - 1);
                cout << endl;
            }
        }
    }
    tampil();
    cout << endl;
}

void datamhs::caridata(){
  int cari;  
  cout << "Masukan Nim mahasiswa yang akan dicari : ";
  cin >> cari;

  for (int i = 0; i < n; i++)
    {
        if (nim[i]==cari)
        {
            cout << "data hasil pencarian"<<endl;
            cout << "Nim : "<<nim[i]<<endl;
            cout << "Nama : "<< namamhs[i]<<endl;
        }
    }
}

int main() {
  datamhs sorting;
  sorting.input();
  sorting.proses();
  sorting.caridata();
  

  return 0;
}
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete
