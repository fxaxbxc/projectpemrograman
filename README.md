📅 DAILY ACTIVITY PLANNER

Sistem Pengelolaan dan Pemantauan Kegiatan Harian Berbasis C++

👥 INFORMASI PROYEK

- Nama Proyek: Daily Activity Planner
- Tema Proyek: Sistem Manajemen Kegiatan dan Produktivitas Harian
- Mata Kuliah: Pengenalan Pemrograman
- Bahasa Pemrograman: C++
- Kelompok: 6
- Kelas: ILK A

Anggota Kelompok:

1. Aziz Fahri Afdama Putra
2. Farid Hidayattulloh
3. Naura Cindra Rahmadani
4. Devi Pratiwi
5. Callistha Novira Putri
6. Rahmania Dwi Putri

📝 1. LATAR BELAKANG DAN STUDI KASUS

Dalam kehidupan sehari-hari, setiap individu memiliki berbagai kegiatan yang perlu diselesaikan, mulai dari aktivitas akademik, pekerjaan, hingga kebutuhan pribadi. Banyaknya kegiatan yang harus dilakukan sering kali membuat seseorang mengalami kesulitan dalam mengatur waktu, mengingat jadwal, serta memantau perkembangan kegiatan yang sedang dikerjakan.

Permasalahan tersebut dapat menyebabkan kegiatan menjadi tidak terorganisasi dengan baik, beberapa pekerjaan terlupakan, bahkan kegiatan yang seharusnya dapat diselesaikan tepat waktu justru tertunda.

Berdasarkan permasalahan tersebut, kelompok kami mengembangkan Daily Activity Planner, yaitu sebuah program berbasis konsol menggunakan bahasa pemrograman C++ yang dirancang untuk membantu pengguna mencatat, mengelola, dan memantau kegiatan harian secara lebih terstruktur.

Melalui program ini, pengguna dapat menambahkan kegiatan beserta waktu dan harinya, melihat daftar kegiatan yang telah dicatat, mengetahui jumlah kegiatan yang sudah maupun belum diselesaikan, memperbarui status kegiatan, serta menghapus kegiatan yang sudah tidak diperlukan.

Dengan demikian, Daily Activity Planner diharapkan dapat menjadi solusi sederhana untuk membantu pengguna mengelola aktivitas sehari-hari secara lebih teratur dan meningkatkan produktivitas.

💡 2. SOLUSI DAN FITUR YANG DITAWARKAN

Program Daily Activity Planner menyediakan enam pilihan menu utama yang memiliki fungsi berbeda dalam membantu pengelolaan kegiatan harian.

1. ➕ Tambah Kegiatan

Pengguna dapat memasukkan kegiatan baru ke dalam sistem dengan mengisi beberapa informasi, yaitu:

- Nama kegiatan.
- Waktu pelaksanaan kegiatan.
- Hari pelaksanaan kegiatan.

Setiap kegiatan yang berhasil ditambahkan akan secara otomatis mendapatkan status awal Belum Selesai. Program juga memiliki batas kapasitas penyimpanan maksimal sebanyak 100 kegiatan.

2. 📋 Lihat Daftar Kegiatan

Fitur ini digunakan untuk menampilkan seluruh kegiatan yang telah dimasukkan ke dalam program.

Informasi yang ditampilkan meliputi:

- Nomor urut kegiatan.
- Nama kegiatan.
- Waktu pelaksanaan.
- Hari pelaksanaan.
- Status penyelesaian kegiatan.

Melalui fitur ini, pengguna dapat melihat seluruh aktivitas yang telah direncanakan dalam satu daftar.

3. 📊 Cek Jumlah Kegiatan

Fitur ini berfungsi untuk memberikan informasi mengenai jumlah keseluruhan kegiatan yang tersimpan di dalam sistem.

Program akan melakukan perhitungan secara otomatis terhadap:

- Total seluruh kegiatan.
- Jumlah kegiatan yang sudah selesai.
- Jumlah kegiatan yang belum selesai.

Dengan adanya fitur ini, pengguna dapat memantau perkembangan penyelesaian aktivitasnya.

4. 🔄 Update Status Kegiatan

Pengguna dapat memperbarui status suatu kegiatan berdasarkan nomor kegiatan yang dipilih.

Tersedia dua pilihan status:

- Belum Selesai.
- Selesai.

Fitur ini memungkinkan pengguna memperbarui perkembangan aktivitas sesuai dengan kondisi sebenarnya tanpa harus menghapus dan memasukkan ulang data kegiatan.

5. 🗑️ Hapus Kegiatan

Fitur ini digunakan untuk menghapus kegiatan tertentu yang sudah tidak diperlukan.

Pengguna cukup memilih nomor kegiatan yang ingin dihapus. Setelah proses penghapusan dilakukan, program akan mengatur kembali posisi data dalam array agar daftar kegiatan tetap tersusun secara berurutan.

6. 🚪 Keluar

Fitur ini digunakan untuk mengakhiri penggunaan program. Setelah pengguna memilih menu keluar, program akan menampilkan pesan penutup dan menghentikan seluruh proses.

⚙️ 3. PENERAPAN KONSEP PEMROGRAMAN C++

Dalam proses pengembangannya, Daily Activity Planner menerapkan beberapa konsep dasar pemrograman C++ yang telah dipelajari dalam perkuliahan.

A. 📦 Variabel dan Array

Program menggunakan beberapa array untuk menyimpan informasi kegiatan secara terstruktur, yaitu:

- "namaKegiatan[]" untuk menyimpan nama kegiatan.
- "waktuKegiatan[]" untuk menyimpan waktu pelaksanaan.
- "HariKegiatan[]" untuk menyimpan hari pelaksanaan.
- "statusKegiatan[]" untuk menyimpan status penyelesaian kegiatan.

Seluruh array memiliki kapasitas yang sama, yaitu 100 elemen, yang ditentukan melalui konstanta:

"const int MAX_KEGIATAN = 100;"

Data setiap kegiatan saling terhubung berdasarkan indeks yang sama pada masing-masing array.

Selain itu, terdapat variabel "jumlahKegiatan" yang digunakan untuk mencatat jumlah kegiatan yang telah dimasukkan ke dalam sistem.

B. 🧩 Function (Fungsi)

Program dibagi menjadi beberapa fungsi agar setiap bagian memiliki tugas dan tanggung jawab masing-masing. Pembagian ini membuat struktur kode lebih terorganisasi, mudah dipahami, serta memudahkan proses pengembangan dan perbaikan program.

Fungsi-fungsi yang digunakan meliputi:

1. "tampilkanJudul(string judul)"
   Digunakan untuk menampilkan judul atau header pada setiap bagian program.

2. "tampilkanMenu()"
   Digunakan untuk menampilkan pilihan menu utama kepada pengguna.

3. "tambahKegiatan()"
   Berfungsi menerima dan menyimpan data kegiatan baru ke dalam array.

4. "lihatKegiatan()"
   Digunakan untuk menampilkan seluruh data kegiatan beserta informasi dan statusnya.

5. "cekJumlahKegiatan()"
   Berfungsi menghitung jumlah kegiatan berdasarkan status penyelesaiannya.

6. "updateStatus()"
   Digunakan untuk memperbarui status kegiatan berdasarkan pilihan pengguna.

7. "hapusKegiatan()"
   Berfungsi menghapus data kegiatan tertentu dan mengatur kembali susunan data dalam array.

C. 🔁 Perulangan (Looping)

Program menggunakan perulangan "while(true)" pada fungsi utama untuk memastikan menu tetap ditampilkan setelah pengguna menyelesaikan suatu tindakan.

Dengan penerapan perulangan tersebut, pengguna dapat menggunakan berbagai fitur secara berulang tanpa harus menjalankan kembali program dari awal.

Perulangan "for" juga digunakan untuk menampilkan seluruh daftar kegiatan, menghitung jumlah kegiatan berdasarkan status, serta menggeser elemen array ketika data dihapus.

D. 🔀 Percabangan (Conditional Statement)

Program menerapkan percabangan "if-else" untuk menangani berbagai kondisi, seperti:

- Memeriksa apakah kapasitas kegiatan sudah penuh.
- Memeriksa apakah daftar kegiatan masih kosong.
- Menentukan status penyelesaian kegiatan.
- Memvalidasi nomor kegiatan yang dipilih.
- Menentukan tindakan berdasarkan pilihan menu pengguna.

E. ⌨️ Input dan Output

Program menggunakan "cin" dan "cout" sebagai sarana komunikasi antara pengguna dan sistem.

Selain itu, digunakan "getline()" untuk menerima input teks yang terdiri dari beberapa kata, seperti nama kegiatan.

Program juga menerapkan "cin.ignore()" untuk membersihkan karakter sisa input sebelum menerima data teks.

F. 🛡️ Validasi Input

Untuk mengurangi kesalahan selama penggunaan, program menerapkan validasi input, khususnya pada pilihan menu utama.

Penggunaan "cin.fail()", "cin.clear()", dan "cin.ignore()" membantu program menangani input yang tidak sesuai dengan tipe data yang diharapkan.

🔄 4. GAMBARAN ALUR PROGRAM

Secara umum, alur kerja Daily Activity Planner dimulai ketika pengguna menjalankan program dan disambut dengan tampilan awal.

Selanjutnya, program menampilkan enam pilihan menu utama. Pengguna dapat memilih salah satu fitur sesuai kebutuhan.

Setiap pilihan akan mengarahkan pengguna ke proses yang berbeda, kemudian program kembali menampilkan menu utama agar pengguna dapat melanjutkan pengelolaan kegiatan.

Program akan berhenti ketika pengguna memilih menu Keluar.

Alur menu utama:

1. ➕ Tambah Kegiatan — Memasukkan data kegiatan baru.
2. 📋 Lihat Daftar Kegiatan — Menampilkan seluruh kegiatan yang tersimpan.
3. 📊 Cek Jumlah Kegiatan — Menampilkan rekapitulasi jumlah kegiatan.
4. 🔄 Update Status Kegiatan — Mengubah status penyelesaian kegiatan.
5. 🗑️ Hapus Kegiatan — Menghapus kegiatan yang tidak diperlukan.
6. 🚪 Keluar — Mengakhiri program.

🎯 5. TUJUAN DAN MANFAAT PROYEK

Pengembangan Daily Activity Planner memiliki beberapa tujuan, antara lain:

1. Membantu pengguna mencatat dan mengorganisasi kegiatan sehari-hari secara sistematis.
2. Mempermudah pemantauan kegiatan yang sudah maupun belum diselesaikan.
3. Mengurangi risiko terlupanya aktivitas yang telah direncanakan.
4. Memberikan gambaran mengenai perkembangan penyelesaian kegiatan melalui fitur rekapitulasi.
5. Mengimplementasikan konsep dasar pemrograman C++ ke dalam sebuah program yang memiliki kegunaan praktis.

Dari sisi pembelajaran, proyek ini juga menjadi sarana bagi anggota kelompok untuk memahami penerapan variabel, array, fungsi, perulangan, percabangan, serta pengolahan input dan output dalam membangun sebuah aplikasi sederhana.

🚀 6. PENGEMBANGAN SELANJUTNYA

Daily Activity Planner masih memiliki peluang untuk dikembangkan menjadi sistem pengelolaan aktivitas yang lebih lengkap.

Beberapa pengembangan yang berpotensi diterapkan pada versi berikutnya antara lain:

- 📅 Penambahan fitur kalender untuk melihat kegiatan berdasarkan tanggal.
- 🔔 Pengingat kegiatan berdasarkan waktu pelaksanaan.
- 🔍 Fitur pencarian kegiatan berdasarkan nama atau hari.
- ✏️ Fitur edit informasi kegiatan tanpa perlu menghapus data.
- 💾 Penyimpanan data menggunakan file agar kegiatan tidak hilang ketika program ditutup.
- 📈 Statistik produktivitas untuk memberikan gambaran perkembangan aktivitas pengguna.

Pengembangan tersebut diharapkan dapat meningkatkan fungsionalitas program sekaligus memberikan pengalaman penggunaan yang lebih baik.

🏁 7. PENUTUP

Daily Activity Planner merupakan bentuk implementasi konsep dasar pemrograman C++ ke dalam sebuah aplikasi sederhana yang berorientasi pada kebutuhan sehari-hari.

Melalui proyek ini, kelompok kami tidak hanya mempelajari cara menyusun kode program, tetapi juga memahami bagaimana konsep-konsep pemrograman dapat dikombinasikan untuk menghasilkan solusi terhadap permasalahan sederhana di lingkungan sekitar.

Kami berharap program ini dapat menjadi langkah awal dalam mengembangkan kemampuan berpikir logis, pemecahan masalah, serta kerja sama tim dalam bidang pemrograman.

✨ Plan Your Day, Manage Your Tasks, Achieve Your Goals! 🚀
