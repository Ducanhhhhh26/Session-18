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
	struct SinhVien sv2; 
	struct SinhVien sv3;
	struct SinhVien sv4;
	struct SinhVien sv5; 
	printf("Sinh vien thu nhat:\n"); 
	printf("Moi ban nhap ma SV1:");
	fgets(sv1.codeID,sizeof(sv1.codeID),stdin); 
	printf("Moi ban nhap ten cua sv2:");
	fgets(sv1.fullName,sizeof(sv1.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv1.address,sizeof(sv1.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv1.age); 
	printf("\n");
	printf("Sinh vien thu hai:\n") ;

	printf("Moi ban nhap ma SV:");
	fgets(sv2.codeID,sizeof(sv2.codeID),stdin); 
	printf("Moi ban nhap ten cua ban:");
	fgets(sv2.fullName,sizeof(sv2.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv2.address,sizeof(sv2.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv2.phoneNumber,sizeof(sv2.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv2.age); 
	printf("\n");
	printf("Sinh vien thu ba:\n") ;
	
	printf("Moi ban nhap ma SV:");
	fgets(sv3.codeID,sizeof(sv3.codeID),stdin); 
	printf("Moi ban nhap ten cua ban:");
	fgets(sv3.fullName,sizeof(sv3.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv3.address,sizeof(sv3.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv3.phoneNumber,sizeof(sv3.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv3.age); 
	printf("\n");
	printf("Sinh vien thu tu:\n") ; 
	
	printf("Moi ban nhap ma SV:");
	fgets(sv4.codeID,sizeof(sv4.codeID),stdin); 
	printf("Moi ban nhap ten cua ban:");
	fgets(sv4.fullName,sizeof(sv4.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv4.address,sizeof(sv4.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv4.phoneNumber,sizeof(sv4.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv4.age); 
	printf("\n"); 
	printf("Sinh vien thu nam:\n") ; 
	
	printf("Moi ban nhap ma SV:");
	fgets(sv5.codeID,sizeof(sv5.codeID),stdin); 
	printf("Moi ban nhap ten cua ban:");
	fgets(sv5.fullName,sizeof(sv5.fullName),stdin);
	printf("Moi ban nhap dia chi:");
	fgets(sv5.address,sizeof(sv5.address),stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv5.phoneNumber,sizeof(sv5.phoneNumber),stdin);
	printf("Moi ban nhap tuoi cua ban:");
	scanf("%d",&sv5.age); 
	printf("\n");
	 
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
	printf("\n");
	
	printf("Sinh vien thu nhat:\n"); 
	printf("Ma Sv:%s\n",sv1.codeID); 
	printf("Ten cua ban :%s\n",sv1.fullName); 
	printf("So dien thoai:%s\n",sv1.phoneNumber); 
	printf("Dia chi:%s\n",sv1.address);
	printf("Tuoi cua ban: %d\n \n \n ",sv1.age);
	printf("Sinh vien thu hai:\n"); 
	printf("Ma Sv:%s\n",sv2.codeID); 
	printf("Ten cua ban :%s\n",sv2.fullName); 
	printf("So dien thoai:%s\n",sv2.phoneNumber); 
	printf("Dia chi:%s\n",sv2.address);
	printf("Tuoi cua ban: %d\n",sv2.age);
	printf("Sinh vien thu ba:\n \n \n "); 
	printf("Ma Sv:%s\n",sv3.codeID); 
	printf("Ten cua ban :%s\n",sv3.fullName); 
	printf("So dien thoai:%s\n",sv3.phoneNumber); 
	printf("Dia chi:%s\n",sv3.address);
	printf("Tuoi cua ban: %d\n",sv3.age);
	printf("Sinh vien thu tu:\n \n \n"); 
	printf("Ma Sv:%s\n",sv4.codeID); 
	printf("Ten cua ban :%s\n",sv4.fullName); 
	printf("So dien thoai:%s\n",sv4.phoneNumber); 
	printf("Dia chi:%s\n",sv4.address);
	printf("Tuoi cua ban: %d\n \n \n ",sv4.age);
	printf("Sinh vien thu nam:\n"); 
	printf("Ma Sv:%s\n",sv5.codeID); 
	printf("Ten cua ban :%s\n",sv5.fullName); 
	printf("So dien thoai:%s\n",sv5.phoneNumber); 
	printf("Dia chi:%s\n",sv5.address);
	printf("Tuoi cua ban: %d\n",sv5.age); 
	return 0; 
} 