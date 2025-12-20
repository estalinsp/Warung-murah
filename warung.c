 #include <stdio.h>

 // Variabel Void
 void menu_makanan(); 
 void menu_minuman();
 void paket_a();
 void paket_b();
 void paket_c();
 void paket_d();
 void total_bayar();

 // Ascii banner
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

// Variabel Global 
int total = 0;


 int main() {
        int pilihan; 

         printf("\n");
          printf(GREEN 
                  "██╗    ██╗ █████╗ ██████╗ ██╗   ██╗███╗   ██╗ ██████╗ \n"     
                  "██║    ██║██╔══██╗██╔══██╗██║   ██║████╗  ██║██╔════╝ \n"     
                  "██║ █╗ ██║███████║██████╔╝██║   ██║██╔██╗ ██║██║  ███╗\n"    
                  "██║███╗██║██╔══██║██╔══██╗██║   ██║██║╚██╗██║██║   ██║\n"    
                  "╚███╔███╔╝██║  ██║██║  ██║╚██████╔╝██║ ╚████║╚██████╔╝\n"    
                  " ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ \n"    
                  "\n"                                       
                  "███╗   ███╗██╗   ██╗██████╗  █████╗ ██╗  ██╗\n"              
                  "████╗ ████║██║   ██║██╔══██╗██╔══██╗██║  ██║\n"              
                  "██╔████╔██║██║   ██║██████╔╝███████║███████║\n"              
                  "██║╚██╔╝██║██║   ██║██╔══██╗██╔══██║██╔══██║\n"              
                  "██║ ╚═╝ ██║╚██████╔╝██║  ██║██║  ██║██║  ██║\n"              
                  "╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝\n"              
                RESET);                                                  
         
        printf("\n===============[ DESCRIPTION ]===============\n");
        printf("\n\n");
        printf("I hope I will get a better life after this...\n");
        printf("I really want to be a better kid in my neighborhood, but I always fail when I do anything...\n");
        printf("I really want to have real friends and really want to be appreciated by my friends and my environment...\n");
        printf("================================================\n");
        printf("\n");
        // footer banner
        printf("\n===================================================\n");
        printf("Social media:\n");
        printf("IG: https://www.instagram.com/ildaaannnavarroo\n");
        printf("Github: https://github.com/Ildhaaannnnnnn\n");
        printf("Tiktok: https://www.tiktok.com/@ildaaannnavarroo\n");
        printf("\n");
        printf("          Created by Ildhan Savelio navarro\n");
        printf("======================================================\n");


        do  {
            printf("\n=========[ Menu Warung ]=========\n");
            printf("1.Menu makanan\n");
            printf("2.Menu minuman\n");
            printf("3.Paket A\n");
            printf("4.Paket B\n");
            printf("5.Paket C\n");
            printf("6.Paket D\n");
            printf("7.Total pembayaran\n");
            printf("8.Exit\n");
            printf("Pilih: ");
            scanf("%d", &pilihan);



            switch (pilihan)
            {
            case 1: menu_makanan(); break;
            case 2: menu_minuman(); break;
            case 3: paket_a(); break;
            case 4: paket_b(); break;
            case 5: paket_c(); break;
            case 6: paket_d(); break;
            case 7: total_bayar(); break;
            case 8: printf("Terima kasih sudah datang!\n"); break;         
            
            
            default:
                  printf("Input salah!\n");
                  break;
            }


        } while (pilihan != 8);
        


 return 0;
 }


// Menu makanan

void menu_makanan() {
      int pilihan, jumlah;

      printf("\n==================[MENU MAKANAN]==================\n");
      printf("====== 1.Nasi putih biasa - Rp 2.000     ======\n");
      printf("====== 2.Nasi uduk - Rp 5.000            ======\n");
      printf("====== 3.Nasi kuning - Rp 6.000          ======\n");
      printf("====== 4.Nasi goreng - Rp 10.000         ======\n");
      printf("====== 5.Nasi Goreng Spesial - Rp 13.000 ======\n");
      printf("====== 6.Mie rebus biasa  - Rp 5.000     ======\n");
      printf("====== 7.Mie rebus spesial - Rp 7.000    ======\n");
      printf("====== 8.Mie goreng biasa - Rp 5.000     ======\n");
      printf("====== 9.Mie goreng spesial - Rp 7.000   ======\n");
      printf("====== 10.Pop mie      - Rp 7.000        ======\n");
      printf("===================================================\n");

      // Tanya dan jawab pesanan
      char pesan;
      printf("\nMau pesan? (y/n): ");
      scanf(" %c", &pesan);

      if(pesan == 'y' || pesan == 'Y') {
         printf("Pilih menu (1-10): ");
         scanf("%d", &pilihan);

         if(pilihan >= 1 && pilihan <= 10) {
            printf("Jumlah: ");
            scanf("%d", &jumlah);

            // hitung harga berdasarkan pilihan client
            switch(pilihan) {
                  case 1: total += 2000 * jumlah; break;
                  case 2: total += 5000 * jumlah; break;
                  case 3: total += 6000 * jumlah; break;
                  case 4: total += 10000 * jumlah; break;
                  case 5: total += 13000 * jumlah; break;
                  case 6: total += 5000 * jumlah; break;
                  case 7: total += 7000 * jumlah; break;
                  case 8: total += 5000 * jumlah; break;
                  case 9: total += 7000 * jumlah; break;
                  case 10: total += 7000 * jumlah; break;

                
            }
            printf("Ditambahkan ke pesanan!\n");
         } else {
            printf("Menu belum tersedia!\n");
         }
      }
}

// Menu minuman 

void menu_minuman() {
      int pilihan, jumlah;
     
      // menu
      printf("\n==================[MENU MINUMAN]==================\n");
      printf("====== 1.Air putih - Gratis                   ======\n");
      printf("====== 2.Teh tawar - Gratis                   ======\n");
      printf("====== 3.Es teh tawar - Rp 2.000              ======\n");
      printf("====== 4.Es teh manis - Rp 4.000              ======\n");
      printf("====== 5.Teh hangat - Rp 4.000                ======\n");
      printf("====== 6.Teh poci - Rp 6.000                  ======\n");
      printf("====== 7.Kopi hitam - Rp 2.000                ======\n");
      printf("====== 8.Kopi goodday - Rp 3.000              ======\n");
      printf("====== 9.Kopi 80 Ribu - Rp 80.000             ======\n");
      printf("====== 10.Susu hangat/dingin - Rp 2.500       ======\n");
      printf("===================================================\n");
      
      // tanya jawab pesanan ke client
      char pesan;

      printf("\nMau pesan? (y/n): ");
      scanf(" %c", &pesan);

      if(pesan == 'y' || pesan == 'Y') {
            printf("Pilih menu: ");
            scanf("%d", &pilihan);

            if(pilihan >= 1 && pilihan <= 10) {
                printf("Jumlah: ");
                scanf("%d", &jumlah);
                
                switch(pilihan) {
                  case 1:
                  case 2:
                  break;

                  case 3: total += 2000 * jumlah; break;
                  case 4: total += 4000 * jumlah; break;
                  case 5: total += 4000 * jumlah; break;
                  case 6: total += 6000 * jumlah; break;
                  case 7: total += 2000 * jumlah; break;
                  case 8: total += 3000 * jumlah; break;
                  case 9: total += 80000 * jumlah; break;
                  case 10: total += 2500 * jumlah; break;

                
                }
                printf("Ditambahkan!\n");
            } else {
                  printf("Menu belum tersedia!\n");
            }
      }

}

void paket_a(){
       int jumlah;
        
       // Menu
       printf("\n========= PAKET A: SARAPAN HEMAT =========\n");
       printf("Harga:  Rp 15.000 per paket\n");
       printf("Isi paket:\n");
       printf(" - Nasi putih\n");
       printf(" - Telur dadar\n");
       printf(" - Tempe goreng\n");
       printf(" - Es teh manis\n");

     printf("\nMau berapa paket?: ");
     scanf("%d", &jumlah);

     // Algoritma
     if(jumlah > 0) {
        int subtotal = 15000 * jumlah;
        total += subtotal;

        printf("Paket A: %d ditambahkan!\n", jumlah);
        printf("Subtotal: Rp %d\n", subtotal);
     } else{
         printf("Jumlah tidak valid!\n");
     }
}

void paket_b() {
        int jumlah;

          // Menu
        printf("\n=========PAKET B: MAKAN SIANG =========\n");
        printf("Harga: Rp 20.000\n");
        printf("Isi paket:\n");
        printf(" - Nasi goreng spesial\n");
        printf(" - Telur ceplok\n");
        printf(" - Kerupuk\n");
        printf(" - Es jeruk\n");
         
        printf("\nMau berapa paket?: ");
        scanf("%d", &jumlah);
        
        // Algoritma
        if(jumlah > 0) {
            int subtotal = 20000 * jumlah;
            total += subtotal;

            printf("Paket B: %d Ditambahkan!\n", jumlah);
            printf("Subtotal: Rp %d\n", subtotal);
        } else {
            printf("Jumlah tidak valid!\n");
        }
}

void paket_c() {
     int jumlah;

     // menu
     printf("\n=========PAKET C: MALAM NIKMAT=========\n");
     printf("Harga: Rp 25.000\n");
     printf("Isi paket:\n");
     printf(" - Mie goreng spesial\n");
     printf(" - Daging sapi\n");
     printf(" - Teh poci\n");
     printf(" - Pisang\n");

     printf("\nMau berapa paket?: ");
     scanf("%d", &jumlah);

     // Algoritma
     if(jumlah > 0) {
             int subtotal = 25000 * jumlah;
             total += subtotal;

            printf("Paket C: %d Ditambahkan!\n", jumlah);
            printf("Subtotal: Rp %d\n", subtotal);
            printf("Total sementara: Rp %d\n", total);
     } else {
        printf("Jumlah tidak valid!\n");
     }

}

void paket_d() {
      int jumlah;

      // Menu
      printf("\n=========PAKET D: SPECIAL FAMILY=========\n");
      printf("Harga: Rp 50.000\n");
      printf("Isi paket (untuk 4 orang):\n");
      printf("  - Nasi Putih 4 porsi\n");
      printf("  - Ayam Goreng 8 potong\n");
      printf("  - Tempe/Tahu Goreng\n");
      printf("  - Sayur Sop\n");
      printf("  - Es Teh 4 gelas\n");

      printf("\nMau berapa paket?: ");
      scanf("%d", &jumlah);

      // Algoritma
      if(jumlah > 0) {
            int subtotal = 50000 * jumlah;
            total += subtotal;

            printf("Paket D: %d ditambahkan!\n", jumlah);
            printf("Subtotal: Rp %d\n", subtotal);
      } else {
            printf("Jumlah tidak valid!\n");
      }
}

void total_bayar() {
      printf("\n===============[TOTAL PEMBAYARAN]===============\n");

      if(total == 0) {
            printf("Belum ada pesana!\n");
      } else {
           printf("Total belanja: Rp %d\n", total);

           // bonus
           if(total >= 100000) {
              printf("Bonus paket A!\n");
           } else if(total >= 50000) {
             printf("Bonus: Diskon 10%%!\n");
             int diskon = total * 10 / 100;
             printf("Diskon: Rp %d\n", diskon);
             total -= diskon;
           }
          
           printf("\n================================================\n");
           printf("Total bayar: Rp %d\n", total);
           printf("===================================================\n");
           printf("Terima kasih sudah beli di warung murah!\n");
              
           // Reset untuk pelanggan baru
           printf("\nEnter untuk transaksi baru...");
           getchar(); // hilangkan buffer
           getchar(); // Tunggu buffer

           total = 0; // Reset total
      }

}
