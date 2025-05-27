#include<iostream>
using namespace std;
int main(){
	int password;
	string usn;
	int kapasitas;
	string lokasi;
	string fasilitas;
	string matkul;
	string dosen;
	int waktu;
	string butuh;
	string user;
	int pw;
	int semester;
	char mhs;
	
	
	cout<<"Masukkan username: ";
	cin>>usn;
	cout<<"Masukkan password: ";
	cin>>password;
	
	cout<<"kapasitas kelas: ";
	cin>>kapasitas;
	cout<<"lokasi : ";
	cin>>lokasi;
	cout<<"fasilitas : ";
	cin>>fasilitas;
	
	cout<<kapasitas<<","<<lokasi<<","<<fasilitas<<endl;
	
	cout<<"masukkan matakuliah: ";
	cin>>matkul;
	cout<<"masukkan nama dosen: ";
	cin>>dosen;
	cout<<"masukkan wwaktu kuliah: ";
	cin>>waktu;
	cout<<"masukkan kebutuhan: ";
	cin>>butuh;
	cout<<matkul<<","<<dosen<<","<<waktu<<","<<butuh<<endl;
	
	cout<<"LOGIN SIMERU"<<endl;
	user = mhs;
	pw = 1994;
	cout<<"masukkkan username: ";
	cin>>user;
	cout<<"masukkan password: ";
	cin>>pw;
	
	if (user == user , pw == pw){
		cout<<"anda login sebagai pengunjung"<<endl;
	}else {
		cout<<" anda admin"<<endl;
	}
	
	
	cout<<"pilih semester: ";
	cin>>semester;
	cout<<"menampilkan jadwal: "<<matkul<<","<<dosen<<","<<waktu<<endl;
	cout<<" ingin mengubah? jalankan ulang program nya wkwkwk"<<endl;
	return 1;
	
}
