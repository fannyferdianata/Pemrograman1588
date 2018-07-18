#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
/*FANNY FERDIANATA*/
/*S1 INFORMATIKA 10*/
/*17.11.1588*/
class formulir_pendaftaran_mahasiswa_baru

{

private:

char nama[25], alamat[20], tempat_lahir[20], tanggal_lahir[20],

pendidikan[8], no_telepon[15], jenis_kelamin[5];

public:

void input_data()

{

system("CLS");

cout<<" =========================================="<<endl;

cout<<" |   Formulir Pendaftaran Mahasiswa Baru   |"<<endl;

cout<<" =========================================="<<endl;

cout<<" Nama           : "; cin.getline(nama,sizeof(nama));

cout<<" Alamat         : "; cin.getline(alamat,sizeof(alamat));

cout<<" Tempat Lahir   : "; cin.getline(tempat_lahir,sizeof(tempat_lahir));

cout<<" Tanggal Lahir  : "; cin.getline(tanggal_lahir,sizeof(tanggal_lahir));

cout<<" Pendidikan     : "; cin.getline(pendidikan,sizeof(pendidikan));

cout<<" No. Telepon    : "; cin.getline(no_telepon,sizeof(no_telepon));

cout<<" Jenis Kelamin  : "; cin.getline(jenis_kelamin,sizeof(jenis_kelamin));

}

void output_data()

{

cout<<" ======================================"<<endl;

cout<<" |      Cetak Biodata Mahasiswa        |"<<endl;

cout<<" ======================================"<<endl;

cout<<" Nama           : "<<nama<<endl;

cout<<" Alamat         : "<<alamat<<endl;

cout<<" Tempat Lahir   : "<<tempat_lahir<<endl;

cout<<" Tanggal Lahir  : "<<tanggal_lahir<<endl;

cout<<" Pendidikan     : "<<pendidikan<<endl;

cout<<" No. Telepon    : "<<no_telepon<<endl;

cout<<" Jenis Kelamin  : "<<jenis_kelamin<<endl;

}

};

class nilai

{

private:

int raport,uas,usbn,upk,un;

public:

void input_nilai()

{

cout<<" ======================================"<<endl;

cout<<" |           Nilai Mahasiswa           |"<<endl;

cout<<" ======================================"<<endl;

cout<<" RAPORT      : "; cin>>raport;

cout<<" UAS         : "; cin>>uas;

cout<<" USBN        : "; cin>>usbn;

cout<<" UPK         : "; cin>>upk;

cout<<" UN          : "; cin>>un;

}

void output_nilai()

{

cout<<" ======================================"<<endl;

cout<<" |     Cetak Nilai Mahasiswa           |"<<endl;

cout<<" ======================================"<<endl;

cout<<" RAPORT       : "<<raport<<endl;

cout<<" UAS          : "<<uas<<endl;

cout<<" USBN         : "<<usbn<<endl;

cout<<" UPK          : "<<upk<<endl;

cout<<" UN           : "<<un<<endl;

}

};

main()

{

formulir_pendaftaran_mahasiswa_baru m;

nilai c;

m.input_data();

c.input_nilai();

system("CLS");

m.output_data();

c.output_nilai();

getch();

};
