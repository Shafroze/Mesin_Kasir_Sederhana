#include <stdio.h>

#define MAX_ITEMS 100

struct Item {
    char name[50];
    float price;
    int quantity;
};

void print_receipt(struct Item items[], int count, float total_price, float discount, float total_after_discount) {
    printf("\n=== Struk Belanja ===\n");
    printf("%-20s %-10s %-10s %-10s\n", "Nama", "Harga", "Jumlah", "Subtotal");

    for (int i = 0; i < count; i++) {
        float subtotal = items[i].price * items[i].quantity;
        printf("%-20s %-10.2f %-10d %-10.2f\n", items[i].name, items[i].price, items[i].quantity, subtotal);
    }

    printf("\nHarga Sebelum Diskon: Rp %.2f\n", total_price);
    if (discount > 0) {
        printf("Diskon: Rp %.2f\n", discount);
    }
    printf("Total Setelah Diskon: Rp %.2f\n", total_after_discount);
}

int main() {
    struct Item items[MAX_ITEMS];
    int count = 0;
    float total_price = 0.0;
    float discount = 0.0;

    printf("=== Mesin Kasir Sederhana ===\n");

    // Input barang
    while (count < MAX_ITEMS) {
        printf("Masukkan nama barang (atau ketik 'selesai' untuk selesai): ");
        scanf("%s", items[count].name);
        
        if (strcmp(items[count].name, "selesai") == 0) {
            break;
        }

        printf("Masukkan harga barang: ");
        scanf("%f", &items[count].price);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &items[count].quantity);

        total_price += items[count].price * items[count].quantity;
        count++;
    }

    // Input diskon
    printf("Masukkan diskon (%%) jika ada (0 jika tidak ada): ");
    scanf("%f", &discount);

    // Menghitung total setelah diskon
    float discount_amount = (discount / 100) * total_price;
    float total_after_discount = total_price - discount_amount;

    // Menampilkan struk belanja
    print_receipt(items, count, total_price, discount_amount, total_after_discount);

    return 0;
}
