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
# Penjelasan Kelas Penyimpanan di C++

| **Kelas Penyimpanan** | **Kenapa Diperlukan** | **Cara Kerja** | **Perhatian Penggunaan** | **File Header** | **Kapan Penggunaannya** | **Kelebihan** | **Kekurangan** | **Versi C++ yang Mendukung** |
|-----------------------|-----------------------|-----------------|--------------------------|------------------|-------------------------|---------------|----------------|-----------------------------|
| **`auto`**             | Mengizinkan compiler mendeklarasikan tipe variabel otomatis berdasarkan ekspresi yang diberikan. | Compiler menentukan tipe berdasarkan ekspresi. | Tidak bisa digunakan untuk pointer atau referensi tanpa tipe eksplisit. | Tidak ada | Untuk tipe data yang kompleks atau tidak diketahui. | Menyederhanakan deklarasi variabel. | Bisa mengaburkan maksud kode. | C++11 dan lebih baru |
| **`static`**           | Menjaga variabel memiliki waktu hidup yang persisten di seluruh program. | Variabel mempertahankan nilai meskipun keluar dari blok atau fungsi. | Penggunaan berlebihan bisa membingungkan. | Tidak ada | Untuk variabel dengan status antar panggilan fungsi atau di ruang lingkup file. | Memungkinkan pemrograman modular. | Bisa mengganggu debugging dan pemeliharaan kode. | C++98 dan lebih baru |
| **`const`**            | Menjamin nilai variabel tetap konstan selama eksekusi. | Nilai tidak bisa diubah setelah inisialisasi. | Hati-hati pada pointer yang konstannya pada data atau pointer itu sendiri. | Tidak ada | Untuk nilai yang tidak boleh diubah. | Menghindari perubahan yang tidak diinginkan. | Membatasi fleksibilitas. | C++98 dan lebih baru |
| **`register`**         | Mempercepat akses variabel dengan menyimpannya di register CPU. | Variabel disimpan di register CPU jika memungkinkan. | Tidak bisa digunakan untuk pointer atau referensi. | Tidak ada | Untuk variabel yang sering diakses. | Mengurangi latensi akses. | Sudah jarang digunakan di C++ modern. | C++98 hingga C++11 |
| **`extern`**           | Menyediakan akses ke variabel atau fungsi di luar file. | Mengakses variabel atau fungsi di file lain. | Penggunaan berlebihan dapat menyebabkan konflik link. | Tidak ada | Untuk program modular yang melibatkan banyak file. | Membantu pemrograman modular dan berbagi data. | Dapat menyebabkan masalah dengan linker. | C++98 dan lebih baru |
| **`thread_local`**     | Menyediakan variabel dengan salinan unik per thread. | Variabel memiliki salinan per thread. | Hanya untuk data yang relevan untuk satu thread. | `<thread>` | Untuk aplikasi multithreaded. | Menjamin thread-safe data. | Menggunakan lebih banyak memori. | C++11 dan lebih baru |
| **`mutable`**          | Memungkinkan perubahan pada variabel dalam objek `const`. | Variabel dalam objek `const` dapat dimodifikasi. | Bisa mengurangi konsistensi objek `const`. | Tidak ada | Untuk objek `const` yang memerlukan perubahan variabel internal. | Memungkinkan perubahan data dalam objek `const`. | Membuat objek `const` terlihat tidak konsisten. | C++98 dan lebih baru |
| **`constexpr`**        | Memungkinkan evaluasi ekspresi atau fungsi saat kompilasi. | Fungsi atau ekspresi dihitung pada waktu kompilasi. | Harus dapat dihitung pada waktu kompilasi. | Tidak ada | Untuk konstanta atau fungsi yang nilainya sudah diketahui saat kompilasi. | Meningkatkan kinerja dengan evaluasi kompilasi. | Tidak fleksibel untuk ekspresi kompleks. | C++11 dan lebih baru |
| **`inline`**           | Mengurangi overhead pemanggilan fungsi dengan mengganti pemanggilan fungsi dengan isinya. | Fungsi digantikan dengan isi fungsi pada kompilasi. | Fungsi yang besar atau terlalu kompleks tidak cocok untuk `inline`. | Tidak ada | Untuk fungsi kecil yang sering dipanggil. | Mengurangi overhead pemanggilan fungsi. | Bisa menyebabkan duplikasi kode di setiap tempat pemanggilan. | C++98 dan lebih baru |
| **`volatile`**         | Menandai variabel yang bisa berubah tanpa sepengetahuan compiler, seperti pada hardware atau thread lain. | Variabel diperlakukan secara khusus oleh compiler. | Harus digunakan dengan hati-hati, terutama pada perangkat keras atau interaksi antar thread. | Tidak ada | Untuk variabel yang dapat berubah tanpa pengaruh program normal (misalnya pada I/O hardware atau interaksi thread). | Menjamin akses langsung ke variabel hardware. | Bisa mengurangi optimisasi dan efisiensi. | C++98 dan lebih baru |

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

