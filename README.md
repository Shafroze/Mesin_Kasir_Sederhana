# Tugas Asistensi P1
Tugas Asistensi Praktikum Dasar Pemrograman modul P1 yang berjudul "Pengenalan Bahasa C".
# Mesin Kasir Sederhana
Program Mesin kasir sederhana.

## Deskripsi Program
Program mesin kasir sederhana ini ditulis dalam bahasa C dan dirancang untuk menerima input dari pengguna mengenai barang yang dibeli, termasuk nama, harga, dan jumlah hingga maksimum 100 item. Setelah input, program menghitung total harga dari semua item dan memungkinkan pengguna untuk memasukkan diskon dalam persen. Program kemudian menghitung dan menampilkan total harga sebelum dan sesudah diskon. Fungsi terpisah digunakan untuk mencetak struk belanja dengan format yang teratur, menampilkan informasi setiap item, subtotal, serta total harga akhir.

## Komponen Program
1. #define MAX_ITEMS 100 | Mendeklarasi sebuah konstanta berupa jumlah barang maksimal yaitu 100
2. Struct Item | Mendefinisikan struktur Item untuk menyimpan informasi barang berupa nama barang, harga barang, dan jumlah barang.
3. int main() | Merupakan blok kode utama pada program mesin kasir. Pada blok ini terdapat fungsi output dan input untuk memasukan nama barang, harga barang, dan jumlah barang dari input pengguna menggunakan fungsi pernyataan loop 'while'. Pada bagian ini juga pengguna dapat memasukkan persentase diskon belanja bila ada.
4. pirnt_receipt | Memiliki fungsi sebagai operator aritmatika utama pada program mesin kasir dimana harga, jumlah, dan diskon barang di hitung. Blok kode ini juga berfungsi sebagai output utama dari program mesin kasir yang akan mengoutput struk belanja (menggunakan loop 'for') yang meliputi detail seperti nama barang, harga barang, jumlah barang, harga total, diskon (menggunakan 'if' karena tidak selalu ada diskon), dan harga setelah diskon dari input yang dibuat pada blok kode utama.
