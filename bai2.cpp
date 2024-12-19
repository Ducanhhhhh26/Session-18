#include<stdio.h>
struct SinhVien{
	char codeID[20];
	char fullName[50];
	char address[100]; 
	char phoneNumber[15];
	int age;
};
int main(){
	struct SinhVien sv1; 
	printf("Sinh vien thu nhat:\n"); 
	printf("Moi ban nhap ma SV:");
	fgets(sv1.codeID,sizeof(sv1.codeID),stdin); 
	printf("Moi ban nhap ten cua ban:");
	fgets(sv1.fullName,sizeof(sv1.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv1.address,sizeof(sv1.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv1.age);
	printf("thong tin Sinh vien :\n"); 
	printf("Ma Sv:%s\n",sv1.codeID); 
	printf("Ten cua ban :%s\n",sv1.fullName); 
	printf("So dien thoai:%s\n",sv1.phoneNumber); 
	printf("Dia chi:%s\n",sv1.address);
	printf("Tuoi cua ban: %d\n \n \n ",sv1.age);
	}
