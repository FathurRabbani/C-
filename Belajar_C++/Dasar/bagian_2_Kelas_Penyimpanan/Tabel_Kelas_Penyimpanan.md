# Tabel Kelas Penyimpanan dalam C++

| **Kelas Penyimpanan** | **Kegunaan**                                                                                     | **Lingkup**             | **Umur Variabel**            |
|------------------------|-----------------------------------------------------------------------------------------------|-------------------------|------------------------------|
| **`auto`**            | Menentukan tipe variabel secara otomatis berdasarkan nilai yang diberikan. (C++11 ke atas)    | Lokal                  | Selama blok eksekusi        |
| **`register`**        | Menyimpan variabel di register CPU untuk akses cepat (saran ke compiler, tidak wajib).        | Lokal                  | Selama blok eksekusi        |
| **`static`**          | Variabel mempertahankan nilainya di antara pemanggilan fungsi atau selama program berjalan.   | Lokal/Global           | Selama program berjalan      |
| **`extern`**          | Digunakan untuk mendeklarasikan variabel global yang didefinisikan di file lain.              | Global                 | Selama program berjalan      |
| **`mutable`**         | Membolehkan variabel anggota diubah meskipun objeknya `const`.                                | Dalam kelas            | Selama objek hidup          |
| **`thread_local`**    | Variabel spesifik untuk setiap thread dalam program multi-threaded.                           | Lokal/Global           | Selama thread berjalan       |
| **`const`**           | Menentukan variabel yang nilainya tetap (tidak bisa diubah setelah inisialisasi).             | Lokal/Global           | Sesuai lingkup blok         |
| **`volatile`**        | Memberitahu compiler bahwa nilai variabel bisa berubah di luar kendali program (misalnya, interrupt). | Lokal/Global    | Sesuai lingkup blok         |
| **`constexpr`**       | Menentukan bahwa nilai harus dievaluasi saat kompilasi.                                       | Lokal/Global           | Selama program berjalan      |
| **`inline`**          | Memberitahu compiler untuk mengurangi overhead fungsi dengan menyisipkan kode langsung.       | Lokal/Global           | Selama program berjalan      |

---

### Penjelasan Singkat Kelas Penyimpanan:
1. **`auto`**: Menghilangkan kebutuhan untuk menentukan tipe data eksplisit, memungkinkan fleksibilitas tipe data berdasarkan konteks.
2. **`register`**: Meningkatkan kinerja dengan menyarankan penyimpanan variabel di register CPU.
3. **`static`**: Berguna untuk membuat variabel atau fungsi yang berbagi nilai secara global tetapi dengan lingkup terbatas pada file atau fungsi tertentu.
4. **`extern`**: Mempermudah penggunaan variabel global antar file.
5. **`mutable`**: Berguna saat Anda perlu memodifikasi variabel dalam konteks objek `const`.
6. **`thread_local`**: Sangat penting untuk pengaturan thread dalam pemrograman paralel.
7. **`const`**: Melindungi nilai variabel agar tidak berubah.
8. **`volatile`**: Berguna dalam pemrograman hardware untuk variabel yang bisa diubah oleh sinyal eksternal.
9. **`constexpr`**: Membantu meningkatkan efisiensi dengan memastikan nilai dihitung pada waktu kompilasi.
10. **`inline`**: Mengurangi overhead fungsi kecil dengan menggabungkan kode langsung ke tempat pemanggilan.

Tabel ini dapat digunakan untuk memahami dan memilih kelas penyimpanan yang tepat sesuai kebutuhan program. Kalau ada yang kurang jelas, tinggal tanyain aja! 😊
