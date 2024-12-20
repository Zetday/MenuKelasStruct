#include <iostream>
#include <conio.h>
using namespace std;
int n;

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


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    
    break;
   case '2':
    
    /* code */ 
    break;  
   case '3':
    
    /* code */
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