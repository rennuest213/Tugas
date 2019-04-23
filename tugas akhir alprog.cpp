#include <iostream>
#include <conio.h>
using namespace std;
int a, b, c, c1, c2, c3, c4, f, f1, f2, f3, g1, g2, s, s1, s2, s3, s4, s5;
int d=1;
void soal();
main()
{
   cout<<"Simulasi Ujian Tulis Berbasis Komputer Masuk Perguruan Tinggi Negeri (UTBK MPTN)"<<endl;
   cout<<"Untuk menjawab soal tekan 1 untuk opsi A,tekan 2 untuk opsi B, tekan 3 untuk opsi C, tekan 4 untuk opsi D, tekan 5 untuk opsi E\n\n";
   cout<<"Silakan Login Terlebih Dahulu"<<endl;
   cout<<"ID\t: ";
   cin>>a;
   cout<<"Password: ";
   cin>>b;
   system("CLS");
   if (a==18155 && b==123)
   {
       soal();
       s =s1+s2+s3+s4+s5;
   cout << "Nilai Akhir: " << s << endl<<endl;   if (s>=3)
   {
      cout << "Selamat Anda Lulus!" << endl;   }
   else
   {
      cout << "Mohon Maaf Anda Tidak Lulus" << endl;   }
   }
   else
   {
      cout<<"ID atau password salah!"<<endl;
      cout<<"Ingin Daftar? Tekan 1 untuk Ya, tekan 0 untuk Tidak\t";
      cin>>f;
      system("CLS");
      while (!(f==1 || f==0))
      {
          cout<<"Pilihan tidak ada! Tekan 1 untuk Ya, tekan 0 untuk Tidak";
         cin >> f;
         system("CLS");
      }
      if (f==1)
      {
         cout<<"Masukkan ID\t: ";
         cin>>f1;
         cout<<"Masukkan Password: ";
         cin>>f2;
         cout<<"Selamat akun anda sudah terdaftar. Ingin login? Tekan 1 untuk Ya, tekan 0 untuk Tidak";
         cin >> f3;
         system("CLS");
         while (!(f3==1 || f3==0))
         {
            cout<<"Tekan 1 untuk Ya, tekan 0 untuk Tidak";
            cin>>f3;
            system("CLS");
         }
         if (f3==1)
         {
            cout<<"Masukkan ID\t: ";
            cin>>g1;
            cout<<"Masukkan Password: ";
            cin>>g2;
            system("CLS");
            while (!(f1==g1 && f2==g2))
            {
               cout<<"Username atau Password salah"<<endl;
               system("CLS");
               cout<<"Masukkan ID\t: ";
               cin>>g1;
               cout<<"Masukkan Password: ";
               cin>>g2;

            }
            if (f1==g1 && f2==g2)
            {
               soal();
               s =s1+s2+s3+s4+s5;
   cout << "Nilai Akhir: " << s << endl;
   if (s>=3)
   {
      cout << "Selamat Anda Lulus!" << endl;   }
   else
   {
      cout << "Mohon Maaf Anda Tidak Lulus" << endl;   }
            }
         }
         else
         {
            if (f3==0)
            {
               cout << "Terima kasih telah berkunjung" << endl;            }

         }
      }
      else
      {
         if (f==0)
         {
            cout << "Terima kasih telah berkunjung" << endl;         }

      }
   }

    getch();
   return 0;



}
void soal()
{
    cout<< "Selamat Menjalankan Ujian\n\n" << endl;
      cout<<"1. Jika x + y = 3 dengan x dan y merupakan bilangan bulat, maka nilai maksimal dari xy=..."<<endl;
      cout<<"A. 1"<<endl;
      cout<<"B. 2"<<endl;
      cout<<"C. 3"<<endl;
      cout<<"D. 4"<<endl;
      cout<<"E. 5"<<endl;
      cout<<"Jawaban: ";
      cin>>c;
      if (c==2)
      {
         s1=d;
      }
      else
      {
         s1=d-1;
      }
      cout<<"Score: ";cout<<s1<<endl<<endl;
      cout<<"2. Siapakah Vokalis sekaligus pemain piano dari band rock Queen?"<<endl;
      cout<<"A. Robert Plans"<<endl;
      cout<<"B. Rhido Rhoma"<<endl;
      cout<<"C. Freddie Mercury"<<endl;
      cout<<"D. Freddie Venus"<<endl;
      cout<<"E. Freddie Earth"<<endl;
      cout<<"Jawaban: ";
      cin>>c1;
      if (c1==3)
      {
         s2=d;
      }
      else
      {
         s2=d-1;
      }
      cout<<"Score: ";cout<<s2<<endl<<endl;
      cout<<"3. Elektron : Nukleus = Bumi : ..."<<endl;
      cout<<"A. Matahari"<<endl;
      cout<<"B. Bulan"<<endl;
      cout<<"C. Planet"<<endl;
      cout<<"D. Bintang"<<endl;
      cout<<"E. Bekasi"<<endl;
      cout<<"Jawaban: ";
      cin>>c2;
      if (c2==1)
      {
         s3=d;
      }
      else
      {
         s3=d-1;
      }
      cout<<"Score: "<<s3<<endl<<endl;
      cout<<"4.  2,-3,-1,4,1,3,6,5,7,8,9,11,..."<<endl;
      cout<<"A. 12"<<endl;
      cout<<"B. 16"<<endl;
      cout<<"C. 8"<<endl;
      cout<<"D. 13"<<endl;
      cout<<"E. 10"<<endl;
      cout<<"Jawaban: ";
      cin>>c3;
      if (c3==5)
      {
         s4=d;
      }
      else
      {
         s4=d-1;
      }
      cout<<"Score: "<<s4<<endl<<endl;
      cout<<"5. Jika p + q = a dan p - q = -a, dengan a merupakan bilangan bulat positif, maka..."<<endl;
      cout<<"A. p = q"<<endl;
      cout<<"B. p > q"<<endl;
      cout<<"C. p = a"<<endl;
      cout<<"D. p > a"<<endl;
      cout<<"E. q = a"<<endl;
      cout<<"Jawaban: ";
      cin>>c4;
      if (c4==5)
      {
         s5=d;
      }
      else
      {
         s5=d-1;
      }
      cout<<"Score: "<<s5<<endl<<endl;
}
