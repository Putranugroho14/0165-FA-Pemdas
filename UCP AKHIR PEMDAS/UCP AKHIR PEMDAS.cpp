#include <iostream>
using namespace std;
class MasukUniversitas {

public:  // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	float totalBiaya;


	void input() {
		cout << "Uang Pendaftaran = " << uangPendaftaran << endl;
		cin >> uangPendaftaran;
		cout << "Uang Semester Pertama = " << uangSemesterPertama << endl;
		cin >> uangSemesterPertama;
		cout << "Uang Bangunan = " << uangBangunan << endl;
		cin >> uangBangunan;
	}
	float TotalBiaya() {
		return uangPendaftaran + uangSemesterPertama + uangBangunan;
	}
	void display() {
		cout << "Uang Pendaftaran = " << uangPendaftaran << endl;
		cout << "Uang Semester Pertama = " << uangSemesterPertama << endl;
		cout << "Uang Bangunan = " << uangBangunan << endl;
		cout << "Total Biaya = " << TotalBiaya << endl;

	}
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;


		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public:
	
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
};
int main() {
	MasukUniversitas pp;
	pp.input();
	pp.display();
	return 0;
	// isi disini untuk fungsi main
}
