#include <iostream>

using namespace std;

// Fungsi untuk menghitung total belanja
double hitungTotalBelanja(double harga_barang, int jumlah_barang)
{
  return harga_barang * jumlah_barang;
}

int main()
{
  int jumlah_jenis_barang;

  // Menanyakan jumlah jenis barang yang dibeli
  cout << "Berapa jenis barang yang Anda beli? ";
  cin >> jumlah_jenis_barang;

  // Memanggil fungsi hitungTotalBelanja() sebanyak jumlah jenis barang yang dibeli
  double total_harga = 0;
  for (int i = 1; i <= jumlah_jenis_barang; i++) {
    double harga_barang;
    int jumlah_barang;

    // Menanyakan input harga barang dan jumlah barang ke user
    cout << "Masukkan harga barang ke-" << i << ": ";
    cin >> harga_barang;

    cout << "Masukkan jumlah barang ke-" << i << ": ";
    cin >> jumlah_barang;

    // Menghitung dan menambahkan total harga barang ke-i ke total_harga
    total_harga += hitungTotalBelanja(harga_barang, jumlah_barang);
  }

  // Menampilkan total harga semua barang
  cout << "Total harga semua barang adalah: Rp." << total_harga << endl;

  return 0;
}
