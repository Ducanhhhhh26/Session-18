#include<stdio.h>
#include<string.h>
struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[50] = {
        {1, "Nguyen Van a", 18, "0879245112"},
        {2, "NGuyen Van b", 18, "0726849618"},
        {3, "NGuyen Van c", 18, "08254826875"},
        {4, "NGuyen Van d", 18, "0999999999"},
        {5, "NGuyen Van e", 18, "09875298787"}
    };
    int n = 5;
    if(n<50){   
    printf("Nhap id sinh vien moi:\n");
    scanf("%d",&sv[n].id); 
    printf("Nhap ten: ");
    fflush(stdin);
    fgets(sv[n].name, sizeof(sv[n].name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d",&sv[n].age);
    printf("Nhap so dien thoai: ");
    scanf("%s", sv[n].phoneNumber);
    n++;
}
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}

