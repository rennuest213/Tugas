#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

void judul();
void setcolor(unsigned short);
void loading();

typedef struct HitungNilai Nilai;
struct HitungNilai
{
	int t1, t2, total, benar;
	int n1, j1, n2, j2;
};

class biodata
{
protected:
	char nama[20], jur[20];
	int nim;
public:
	void getBiodata()
	{
		judul();
		setcolor(15);
		cout<<"\n\tPengisian Biodata Diri\n\n";
		cout<<"\tNama            : ";
		cin.ignore();
		gets(nama);
		cout<<"\tNomor Ujian     : ";
		cin>>nim;
		cout<<"\tJurusan         : ";
		cin.ignore();
		gets(jur);
		cout<<"\n\t";
		loading();
	}

	int retnim() {return nim;}
};

class jawaban
{
protected:
	char jwb1[2], jwb2[25];
	char x1[2], x2[2], x3[2], x4[2], x5[2], x6[2], x7[2], x8[2], x9[2], x10[2];
	char y1[25], y2[8], y3[10], y4[7], y5[7];
public:
	jawaban()
	{
		strcpy(x1, "c");
		strcpy(x2, "b");
		strcpy(x3, "d");
		strcpy(x4, "e");
		strcpy(x5, "a");
		strcpy(x6, "c");
		strcpy(x7, "d");
		strcpy(x8, "e");
		strcpy(x9, "c");
		strcpy(x10, "b");
		strcpy(y1, "international networking");
		strcpy(y2, "average");
		strcpy(y3, "collision");
		strcpy(y4, "kernel");
		strcpy(y5, "bitmap");
	}

	void jawab_pilgan()
	{
		cout<<"Jawaban : ";
		cin>>jwb1;
		strlwr(jwb1);
	}

	void jawab_isian()
	{
		cout<<"Jawaban : ";
		gets(jwb2);
		strlwr(jwb2);
	}

	~jawaban() {}
};

class soal : public jawaban
{
protected:
	Nilai getNilai;
public:
	soal() {getNilai.j1 = 0; getNilai.j2 = 0;}

	void show_pilgan()
	{
		judul();
		setcolor(15);
		cout<<"\nSOAL PILIHAN GANDA";
		cout<<"\n\n1. Dibawah ini yang merupakan HIGH LEVEL LANGUAGE, kecuali ...\n";
		cout<<"\n\ta. Bahasa Fortran";
		cout<<"\n\tb. COBOL";
		cout<<"\n\tc. Assembly";
		cout<<"\n\td. Bahasa C";
		cout<<"\n\te. Bahasa Pascal\n\n";
		jawab_pilgan();

		if(strcmp(x1, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n2. Untuk mematikan komputer OS Windows yaitu dengan perintah ...\n";
		cout<<"\n\ta. Start";
		cout<<"\n\tb. Shutdown";
		cout<<"\n\tc. Exit";
		cout<<"\n\td. Sleep";
		cout<<"\n\te. Standby\n\n";
		jawab_pilgan();

		if(strcmp(x2, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n3. Software animasi dibawah ini yang memakai script adalah ...\n";
		cout<<"\n\ta. 3DS Max";
		cout<<"\n\tb. Maya";
		cout<<"\n\tc. After Effects";
		cout<<"\n\td. Flash";
		cout<<"\n\te. Cinema 4D\n\n";
		jawab_pilgan();

		if(strcmp(x3, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n4. Domain go.id berarti ...\n";
		cout<<"\n\ta. Domain tersebut milik suatu perkumpulan";
		cout<<"\n\tb. Domain tersebut milik pribadi perorangan";
		cout<<"\n\tc. Domain tersebut milik suatu perusahaan";
		cout<<"\n\td. Domain tersebut milik suatu kampus";
		cout<<"\n\te. Domain tersebut milik pemerintahan\n\n";
		jawab_pilgan();

		if(strcmp(x4, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n5. Nama domain host/server www.asus.co.tw berlokasi di ...\n";
		cout<<"\n\ta. Taiwan";
		cout<<"\n\tb. Singapura";
		cout<<"\n\tc. Indonesia";
		cout<<"\n\td. Jerman";
		cout<<"\n\te. Brazil\n\n";
		jawab_pilgan();

		if(strcmp(x5, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n6. Windows Server 2003 mulai dikerjakan pada ...\n";
		cout<<"\n\ta. Awal tahun 2000";
		cout<<"\n\tb. Awal tahun 2003";
		cout<<"\n\tc. Akhir tahun 2000";
		cout<<"\n\td. Pertengahan tahun 2003";
		cout<<"\n\te. Awal tahun 2001\n\n";
		jawab_pilgan();

		if(strcmp(x6, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n7. Media komunikasi Wireline adalah media komunikasi yang menggunakan ...\n";
		cout<<"\n\ta. Infra Red";
		cout<<"\n\tb. Bluetooth";
		cout<<"\n\tc. 3G";
		cout<<"\n\td. Kabel";
		cout<<"\n\te. Satelit\n\n";
		jawab_pilgan();

		if(strcmp(x7, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n8. Untuk mendeteksi apakah hubungan komputer dengan jaringan sudah berjalan dengan baik, utilitas yang digunakan adalah ...\n";
		cout<<"\n\ta. Tail";
		cout<<"\n\tb. Tracert";
		cout<<"\n\tc. Route-Pr";
		cout<<"\n\td. Route";
		cout<<"\n\te. Ping\n\n";
		jawab_pilgan();

		if(strcmp(x8, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n9. Salah satu Server Web yang terkenal dilingkungan Linux adalah ...\n";
		cout<<"\n\ta. PHP";
		cout<<"\n\tb. MySql";
		cout<<"\n\tc. Apache";
		cout<<"\n\td. Perl";
		cout<<"\n\te. GNU\n\n";
		jawab_pilgan();

		if(strcmp(x9, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		cout<<"\n\n10. Yang membedakan jaringan WAN dan LAN adalah ...\n";
		cout<<"\n\ta. Perbedaan Segment";
		cout<<"\n\tb. Jarak Antar Jaringan";
		cout<<"\n\tc. Peralatan";
		cout<<"\n\td. Pemberian Informasi";
		cout<<"\n\te. Sistem Jaringan\n\n";
		jawab_pilgan();

		if(strcmp(x10, jwb1) == 0)
			getNilai.n1 = 1;
		else
			getNilai.n1 = 0;

		getNilai.j1 = getNilai.j1 + getNilai.n1;

		getNilai.n1 = getNilai.j1++;
		getNilai.t1 = getNilai.n1 * 6;

		cout<<"\n\t";
		system("pause");
	}

	void show_isian()
	{
		judul();
		setcolor(15);
		cout<<"\nSOAL ISIAN";
		cout<<"\n\n1. Internet singkatan dari ...\n\n";
		cin.ignore();
		jawab_isian();

		if(strcmp(y1, jwb2) == 0)
			getNilai.n2 = 1;
		else
			getNilai.n2 = 0;

		getNilai.j2 = getNilai.j2 + getNilai.n2;

		cout<<"\n\n2. Untuk menghitung rata-rata pada suatu baris data pada Excel digunakan formula ...\n\n";
		jawab_isian();

		if(strcmp(y2, jwb2) == 0)
			getNilai.n2 = 1;
		else
			getNilai.n2 = 0;

		getNilai.j2 = getNilai.j2 + getNilai.n2;

		cout<<"\n\n3. Terjadinya tabrakan pengiriman data pada suatu jaringan komputer dikenal dengan istilah ...\n\n";
		jawab_isian();

		if(strcmp(y3, jwb2) == 0)
			getNilai.n2 = 1;
		else
			getNilai.n2 = 0;

		getNilai.j2 = getNilai.j2 + getNilai.n2;

		cout<<"\n\n4. Merupakan inti dari OS Linux yang mengatur penggunaan memori, input-bundel, dan proses-proses disebut ...\n\n";
		jawab_isian();

		if(strcmp(y4, jwb2) == 0)
			getNilai.n2 = 1;
		else
			getNilai.n2 = 0;

		getNilai.j2 = getNilai.j2 + getNilai.n2;

		cout<<"\n\n5. Gambar olahan yang disusun dari titik-titik gambar(pixel) disebut ...\n\n";
		jawab_isian();

		if(strcmp(y5, jwb2) == 0)
			getNilai.n2 = 1;
		else
			getNilai.n2 = 0;

		getNilai.j2 = getNilai.j2 + getNilai.n2;

		getNilai.n2 = getNilai.j2++;
		getNilai.t2 = getNilai.n2 * 8;

		getNilai.total = getNilai.t1 + getNilai.t2;
		getNilai.benar = getNilai.n1 + getNilai.n2;

		cout<<"\n\t";
		system("pause");
	}

	~soal() {}
};

class bundel : public soal, public biodata
{
public:
	void mulaiUjian()
	{
		getBiodata();
		show_pilgan();
		show_isian();
	}

	void lihatNilai()
	{
		judul();
		setcolor(11);
		cout<<"\n\tLihat Nilai\n\n";
		cout<<"\n\tNama              : "<<nama;
		cout<<"\n\tNomor ujian     : "<<nim;
		cout<<"\n\tJurusan         : "<<jur;
		cout<<"\n\n\tJumlah Benar  : "<<getNilai.benar;
		cout<<"\n\tNilai Anda      : "<<getNilai.total<<"\n\n\t";
		system("pause");
	}

	void kunciJawaban()
	{
		judul();
		setcolor(11);
		cout<<"\nPilihan Ganda\n";
		cout<<"\t1. "<<x1<<"\t\t6. "<<x6;
		cout<<"\n\t2. "<<x2<<"\t\t7. "<<x7;
		cout<<"\n\t3. "<<x3<<"\t\t8. "<<x8;
		cout<<"\n\t4. "<<x4<<"\t\t9. "<<x9;
		cout<<"\n\t5. "<<x5<<"\t\t10. "<<x10;
		cout<<"\n\n\nIsian\n";
		cout<<"\t1. "<<y1;
		cout<<"\n\t2. "<<y2;
		cout<<"\n\t3. "<<y3;
		cout<<"\n\t4. "<<y4;
		cout<<"\n\t5. "<<y5<<"\n\n\t";
		system("pause");
	}

	void keluar()
	{
		system("cls");
		cout<<"\n\n\t\t\t-----------------------Terima Kasih-------------------------\n\n\t";
		system("pause");
		exit(0);
	}
};

void write_dataPeserta();
void display_nilai();
void display_kunci();
void tampilan_awal();

int main()
{
	char pil;

	bundel b1;

	judul();
	tampilan_awal();

	while(1)
	{
		judul();
		setcolor(15);
		cout<<"\n\t1. Mulai Ujian\n";
		cout<<"\t2. Lihat Nilai\n";
		cout<<"\t3. Kunci Jawaban\n";
		cout<<"\t4. Keluar\n";
		cout<<"\n\tPilih Menu : ";
		cin>>pil;

		switch(pil)
		{
			case '1': write_dataPeserta();
			break;
			case '2': display_nilai();
			break;
			case '3': display_kunci();
			break;
			case '4': b1.keluar();
			break;
		}
	}
	return 0;
}

void write_dataPeserta()
{
	bundel b1;
	ofstream outFile;
	outFile.open("data.txt",ios::binary|ios::app);
	b1.mulaiUjian();
	outFile.write(reinterpret_cast<char *> (&b1), sizeof(bundel));
	outFile.close();
}

void display_nilai()
{
	int login;
	bundel b1;
	bool flag=false;
	ifstream inFile;

	judul();
	setcolor(15);
	cout<<"\n\tLihat Nilai\n\n";
	cout<<"\tMasukkan Nomor Ujian : ";
	cin>>login;
	loading();

	inFile.open("data.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File Tidak Ada !! Tekan Sembarang Tombol...";
		return;
	}
	while(inFile.read(reinterpret_cast<char *> (&b1), sizeof(bundel)))
	{
		if(b1.retnim()==login)
		{
			b1.lihatNilai();
			flag=true;
		}
	}
    inFile.close();
	if(flag==false)
	{
		judul();
		cout<<"\n\n\n\tMaaf Anda Belum Terdaftar Sebagai Peserta Ujian\n\n\t";
		system("pause");
	}
}

void display_kunci()
{
	int login;
	bundel b1;
	bool flag=false;
	ifstream inFile;

	judul();
	setcolor(15);
	cout<<"\n\tKunci Jawaban\n\n";
	cout<<"\tMasukkan Nomor Ujian : ";
	cin>>login;
	loading();

	inFile.open("data.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File Tidak Ada !! Tekan Sembarang Tombol...";
		return;
	}
	while(inFile.read(reinterpret_cast<char *> (&b1), sizeof(bundel)))
	{
		if(b1.retnim()==login)
		{
			b1.kunciJawaban();
			flag=true;
		}
	}
    inFile.close();
	if(flag==false)
	{
		judul();
		setcolor(15);
		cout<<"\n\n\n\tMaaf Anda Belum Terdaftar Sebagai Peserta Ujian\n\n\t";
		system("pause");
	}
}

void tampilan_awal()
{
	setcolor(11);
	cout<<"\t\t\t\t\t+--------------------------------+\n";
	cout<<"\t\t\t\t\t|                                |\n";
	cout<<"\t\t\t\t\t|                                |\n";
	cout<<"\t\t\t\t\t|          Mata Kuliah :         |\n";
	cout<<"\t\t\t\t\t|       Teknik Informatika       |\n";
	cout<<"\t\t\t\t\t|                                |\n";
	cout<<"\t\t\t\t\t|                                |\n";
	cout<<"\t\t\t\t\t+--------------------------------+\n\n\t";
	setcolor(15);
	system("pause");
}

void judul()
{
	system("cls");
	setcolor(10);
	cout<<"\n\n\t\t\t\t\t+------------U T B K------------+\n\n";
	cout<<"\t\t\t\t\t==================================\n";
	cout<<"\t\t\t\t\t|       Teknik Informatika       |\n";
	cout<<"\t\t\t\t\t|   Universitas Singaperbangsa   |\n";
	cout<<"\t\t\t\t\t|            Karawang            |\n";
	cout<<"\t\t\t\t\t|              2019              |\n";
	cout<<"\t\t\t\t\t==================================\n";
}

void setcolor(unsigned short color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,color);
}

void loading()
{
	system("cls");
     cout<<endl;
     cout<<"\t\t\t\tPlease wait";
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"\t\tLoading";
     for(int i=0;i<20;i++)
     {
         cout<<". ";
         Sleep(60);
     }
     cout<<endl;
     system("cls");
}
