# Linked List
Linked list merupakan sekumpulan node yang saling terhubung yang dihubungkan melalui pointer/link secara berurutan. Sederhanannya, setiap node yang ada akan dihubungkan dengan node lain dengan memanfaatkan pointer. Pada setiap node terdapat dua bagian, bagian awal untuk data(data boleh lebih dari 1), lalu bagian kedua berupa alamat node berikutnya. Linked list juga merupakan dasar dari database, artinya jika kita memahami linked list maka kita memahami dasar dari pembuatan database. Untuk membaca data di linked list kita harus selalu memulai dengan data head berlanjut ke data selanjutnya, tidak seperti array yang bisa membaca data dengan spesifik index tertentu. Untuk gambaran pengunaan linked list bisa lihat link berikut [visualisasi-linked-list](https://visualgo.net/en/list?slide=1)
## Materi yang perlu dipelajari sebelum linked list
1. dasar-dasar pemograman (pada kasus ini terutama bahasa C).
1. struct, dengan struct memungkinkan kita bekerja dengan satu record yang terdapat banyak field. Karena itulah untuk membuat node kita memerlukan struct.
1. pointer, dengan pointer kita bisa membuat data secara dinamis sekaligus untuk menghubungkan antar node kita memerlukan pointer.
## Jenis-jenis Linked list
### Single Linked List
> single linked list merupakan jenis linked list yang paling simple, yang mana datanya dimulai dari head berlanjut ke data berikutnya sampai node terakhir yang mengarah ke alamat `NULL`, yang artinya data berakhir. <br>  
![image](https://media.geeksforgeeks.org/wp-content/uploads/singly-linkedlist.png)
### Double Linked List
> dengan menggunakan double linked list kita tidak hanya bisa pindah ke alamat selanjutnya (*next*), tapi juga ke alamat sebelumnya (*previous*) dan data terakhir akan mengarah ke alamat `NULL` 
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png)
### Circular Linked List
> circular linked list itu seperti single linked list, tetapi tidak ada data terakhir. Hal tersebut terjadi karena data terakhir akan dihubungkan dengan data pertama hingga membentuk suatu *circle*.
![image](https://media.geeksforgeeks.org/wp-content/uploads/CircularLinkeList.png)

