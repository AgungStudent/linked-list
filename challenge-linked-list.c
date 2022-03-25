#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};
struct node *head = NULL;

void awal() {
  // isi data di node awal
  system("cls");
  struct node *ptr;
  int item;

  ptr = (struct node *)malloc(sizeof(struct node *));
  if (ptr == NULL) {
    printf("OVERFLOW!");
  } else {
    printf("Masukkan data : ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("Data berhasil tersimpan di NODE awal!\n");
  }
}

void akhir() {
  // isi data di node akhir
  system("cls");
  struct node *ptr, *temp;
  int item;

  ptr = (struct node *)malloc(sizeof(struct node *));
  if (ptr == NULL) {
    printf("OVERFLOW!");
  } else {
    printf("Masukkan data : ");
    scanf("%d", &item);
    ptr->data = item;
    if (head == NULL) {
      ptr->next = NULL;
      head = ptr;
      printf("Berhasil menyimpan NODE!");
    } else {
      temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = ptr;
      ptr->next = NULL;
      printf("Berhasil menyimpan NODE akhir!");
    }
  }
  printf("\n");
}

void sembarang() {
  system("cls");
  struct node *ptr, *temp;
  int item, loc;

  ptr = (struct node *)malloc(sizeof(struct node *));
  if (ptr == NULL) {
    printf("OVERFLOW!");
  } else {
    printf("Masukkan data : ");
    scanf("%d", &item);
    ptr->data = item;
    printf("Mau simpan dilokasi berapa? ");
    scanf("%d", &loc);
    // atasi bug ketika data kosong atau jika loc < 0
    if (head == NULL || loc < 0) {
      printf("Tidak bisa simpan datamu!");
			return;
    }

    temp = head;
    for (int i = 0; i < loc; i++) {
      temp = temp->next;
      if (temp == NULL) {
        printf("Tidak bisa simpan datamu!");
        return;
      }
    }
    ptr->next = temp->next;
    temp->next = ptr;
    printf("Berhasil ditambahkan");
  }
}
void hapusAwal() {
  system("cls");
  struct node *ptr;
  if (head == NULL) {
    printf("List kosong!");
  } else {
    ptr = head;
    head = ptr->next;
    free(ptr);
    printf("Data awal berhasil dihapus");
  }
}
void hapusAkhir() {
  system("cls");
  struct node *ptr, *prev;
  if (head == NULL) {
    printf("List Kosong!");
  } else {
    // check if head last node
    if (head->next == NULL) {
      head = NULL;
    } else {
      ptr = head;
      while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
      }
      prev->next = NULL;
      free(ptr);
    }
    printf("Data paling akhir berhasil dihapus!");
  }
}
void hapusSembarang() {
  system("cls");
  struct node *temp, *prev;
  int loc;
  printf("Mau hapus dilokasi berapa? ");
  scanf("%d", &loc);
	
	// tidak bisa hapus data jika data kosong dan jika loc <= 0. Agar terhindar dari bug
  if (head == NULL || loc <= 0) {
    printf("Tidak bisa hapus data!");
    return;
  }

  temp = head;
  prev = head;
  for (int i = 0; i < loc; i++) {
    prev = temp;
    temp = temp->next;
    if (temp == NULL) {
      printf("Tidak bisa hapus data!");
      return;
    }
  }
  prev->next = temp->next;
  free(temp);
  printf("Data berhasil dihapus!");
}
void cetak() {
  // untuk mencetak linked list
  system("cls");
  struct node *ptr;
  ptr = head;
  if (ptr == NULL) {
    printf("Listnya kosong boskuhh!");
  } else {
    printf("Cetak isi list...");
    while (ptr != NULL) {
      printf("\n%d", ptr->data);
      ptr = ptr->next;
    }
  }
}

int main() {
  int pilihan = 0;
  while (pilihan != 8) {
    system("cls");
    printf("** Menu Latihan Linked List **\n");
    printf("======================================");
    printf("\n1. Input Data Awal \n2. Input Data Akhir \n3. Input Data "
           "Sembarang \n4. Hapus data awal \n5. Hapus Data Akhir\n6. Hapus "
           "Data Sembarang\n7. Lihat Data Linked List \n8. KELUAR\n");
    printf("Pilihanmu? ");
    scanf("%d", &pilihan);
    switch (pilihan) {
    case 1:
      awal();
      break;

    case 2:
      akhir();
      break;

    case 3:
      sembarang();
      break;
    case 4:
      hapusAwal();
      break;
    case 5:
      hapusAkhir();
      break;
    case 6:
      hapusSembarang();
      break;
    case 7:
      cetak();
      break;

    case 8:
      exit(0);
      break;

    default:
      printf("Silakan pilih input yang benar!\n");
    }

    getch();
  }
}
