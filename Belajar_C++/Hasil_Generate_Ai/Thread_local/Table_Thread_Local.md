# Penjelasan `thread_local` di C++

## Apa Itu `thread_local`?
`thread_local` adalah salah satu kelas penyimpanan di C++ yang digunakan untuk mendeklarasikan variabel sehingga setiap thread memiliki salinan variabelnya sendiri. Artinya, nilai variabel tersebut akan unik dan terisolasi di setiap thread.

---

## Tabel Penjelasan `thread_local`

| **Aspek**                | **Detail**                                                                                                                                                                                                                     |
|--------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Definisi**             | `thread_local` adalah spesifier yang digunakan untuk membuat variabel lokal untuk setiap thread, artinya nilai variabel tidak dibagi antara thread yang berbeda.                                                             |
| **Konteks Penggunaan**   | Cocok untuk situasi di mana setiap thread membutuhkan salinan variabelnya sendiri tanpa berbagi data dengan thread lain, misalnya counter per-thread, buffer per-thread, atau log per-thread.                                  |
| **Scope (Lingkup)**      | Variabel `thread_local` dapat digunakan dalam scope lokal (fungsi), global, atau sebagai anggota statis kelas.                                                                                                               |
| **Inisialisasi**         | Inisialisasi dilakukan hanya sekali per thread, saat thread pertama kali mengakses variabel.                                                                                                                                |
| **Kekurangan**           | - Memiliki overhead memori yang lebih besar karena setiap thread menyimpan salinan variabel. <br> - Tidak cocok jika variabel harus berbagi data antar-thread.                                                              |
| **Keunggulan**           | - Memberikan isolasi data antar-thread tanpa memerlukan sinkronisasi eksplisit seperti mutex. <br> - Mengurangi risiko *race condition* pada data yang hanya relevan untuk thread tertentu.                                 |
| **Default Nilai**        | Sama seperti variabel biasa, variabel `thread_local` akan diberi nilai default (misalnya `0` untuk tipe numerik).                                                                                                            |
| **Bahasa Pendukung**     | `thread_local` tersedia mulai dari C++11 dan versi selanjutnya.                                                                                                                                                              |
| **Lokasi Memori**        | Variabel `thread_local` disimpan di area memori khusus untuk setiap thread, bukan di heap atau stack utama.                                                                                                                  |

---

## Contoh Penggunaan `thread_local`

### **1. Counter Per-Thread**
Kode berikut menunjukkan bagaimana `thread_local` digunakan untuk menghitung jumlah iterasi per-thread tanpa interferensi antar-thread.

```cpp
#include <iostream>
#include <thread>

// inisalisasi variabel dengan kelas penyimpanan thread local
thread_local int perhitungan = 0;

// membuat fungsi thread
void fungsiThread(){
    perhitungan++;
    std::cout << "ID thread : " << std::this_thread::get_id() << " perhitungan : " << perhitungan << std::endl; // mengambil id thread
}

int main(){
    std::thread t1(fungsiThread); // memasukan fungsi thread ketiga
    std::thread t2(fungsiThread); // memasukan fungsi thread kedua

    t1.join(); // fungsi untuk menungu menyelesaikan thread
    t2.join(); // fungsi untuk menungu menyelesaikan thread

    std::cin.get();
    return 0;
}
```