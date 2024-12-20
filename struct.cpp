#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int n;
int x;

void dMenu(){
system("cls");
cout<<"Aplikasi CRUD Mahasiswa"<<"\n";       
cout<<"1. Masukan data"<<"\n";            
cout<<"2. Tampilkan data"<<"\n";            
cout<<"3. Ubah data"<<"\n";           
cout<<"4. Hapus data"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

mahasiswa sikc[30];

int pos=-1;

void input_data(){
  system("cls");
  cout << "Masukkan jumlah data: ";
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = 0; i < n; i++) {
    pos++;
    system("cls"); // Membersihkan layar
    cout << "Masukkan data ke-" << i + 1 << ":\n";
    cout << "Masukkan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukkan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukkan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukkan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
}

void tampil_data(int n){
  system("cls");
  cout<<"Data yang telah dimasukan: "<<endl;
  for(int i=0; i<n; i++){
      cout << "Data ke-" << i + 1 << ":\n";
      cout << "NIM    : " << sikc[i].nim << "\n";
      cout << "Nama   : " << sikc[i].nama << "\n";
      cout << "Alamat : " << sikc[i].alamat << "\n";
      cout << "IPK    : " << sikc[i].ipk << "\n\n";
  }
}

void ubah_data(int p){
  cout << "Masukkan Index data yang ingin diubah: ";
  cin >> x;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  system("cls");
  fflush(stdin);
  cout << "Masukkan Nama: ";
  getline(cin, sikc[p].nama);
  cout << "Masukkan Alamat: ";
  getline(cin, sikc[p].alamat);
  cout << "Masukkan IPK: ";
  cin >> sikc[p].ipk;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Data berhasil diubah!\n";
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    input_data();
    break;
   case '2':
    tampil_data(n);
    getch();
    break;  
   case '3':
    tampil_data(n);
    ubah_data(x);
    getch();
    break;  
   case '4':
    
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}