#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15]; 
}; 
int main(){
//	fflush(stdin);
	struct SinhVien sv1={"Nguyen Duc Anh", 18, "0393189244"};
	printf("Ten sinh vien: %s\n", sv1.name);
	printf("So dien thoai cua sinh vien: %s\n", sv1.phoneNumber);
	printf("Tuoi sinh vien: %d\n", sv1.age);
}
