#include <iostream>
#include <string.h>


using namespace std;

int main()
{	
	int jumlah_produk, nomor_produk, total_harga, uang_dibayar, kembalian;
	
	
	cout << "\n    ---- Produk Toko Material ----\n";
	cout<<"============================================="<<endl;
	cout<<"|  nomor   |  produk  |  Jumlah  |   harga  |"<<endl;
	cout<<"============================================="<<endl;
	cout<<"|    1     |   pasir  |  per ton |   50000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    2     |   Kayu   |per batang|   30000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    3     |   Semen  |  per sak |   40000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    4     |   cat    |  per kg  |   35000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    5     |   paku   |  per kg  |   20000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    6     |   lem    |  per btl |   30000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    7     | batubata |  per blk |   50000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	cout<<"|    8     |   batu   |  per ton |   75000  |"<<endl;
	cout<<"|==========|==========|==========|==========|"<<endl;
	
	// produk dan daftar harga
	string produk[] = { "pasir", "kayu", "semen","cat","paku","lem","batubata","batu",};
	int harga_produk[] = {50000, 30000, 40000, 35000, 20000, 30000, 50000, 75000};
	
	// Input pilihan Produk
    cout << "Pilihlah daftar produk diatas\n";
    for (int i = 0; i < 8; ++i) {
    	produk[ i + 1 ];
    }
	
    
    nomor_produk;
    cout << "Masukkan nomor produk (1-8): ";
    cin >> nomor_produk;
    
     // Validasi pilihan Produk
    if (nomor_produk < 1 || nomor_produk > 8) {
        cout << "Pilihan tidak Tersedia,Pilihan 1 Sampai 8.\n";
        return 1;
    }

	
	// Input jumlah Produk
    jumlah_produk;
    cout << "Masukkan jumlah produk: ";
    cin >> jumlah_produk;
    //batas jumla Produk
    if (jumlah_produk < 1 || jumlah_produk > 30)	{
		cout << "produk Minimal 1 Maxsimal 30.\n";
        return 1;
	}
    
    // Hitung total biaya Produk
    total_harga = harga_produk[nomor_produk - 1] * jumlah_produk;
    
    // Cetak pesan konfirmasi
    system("cls"); //untuk menghapus layar screen
    cout << "\n---- Pesanan Produk Matrial ----\n";
    cout << "Produk dipilih : " << produk[nomor_produk - 1] << endl;
    cout << "Jumlah Produk: " << jumlah_produk << endl;
    cout << "Harga per produk: Rp " << harga_produk[nomor_produk - 1] << endl;
    cout << "Total Biaya: Rp " << total_harga << endl;
    cout << "Terima kasih telah melakukan pemesanan!\n";

	//input uang yang dibayarkan 
	cout<<"Masukan Jumlah Uang yang dibayarkan:";
	cin>>uang_dibayar;
	
	// Hitung kembalian
    kembalian = uang_dibayar - total_harga;
    
        // Tampilkan kembalian
    if (kembalian >= 0) {
        cout << "Kembalian: Rp " << kembalian << endl;
    } else {
        cout << "Uang yang dibayarkan kurang!" << endl;
    }
    
	if (kembalian >= 0) {
        cout << "Terima Kasih Telah Membeli "  << endl;
    } else {
        cout<<"Masukan Jumlah Uang yang dibayarkan:";
		cin>>uang_dibayar;
			}
	if (kembalian >= 0) {
        cout << " "<< endl;
    } else {
        cout<<"Anda Kurang Uang Silahkan Pergi"<< endl;
    }
    return 0;
}
