#include<stdio.h>
#include<string.h>
struct SinhVien{
	char id[20];
	char fullName[30];
	int age;
	char phoneNumer[30]; 
}; 
void updateSinhVien(struct SinhVien sv1[],int n, char id[]);
	

int main(){
	char findID[50]; 
	struct SinhVien sv[50]={
		{
			"abc01",
			"nguyen van a",
			18,
			"0123912739",
			 
		},
		{
			"abc0123",
			"nguyen van b",
			19,
			"01321912739",
			 
		},
		{
			"abc02",
			"nguyen van c",
			20,
			"01098912739",
			 
		},
		{
			"abc04",
			"nguyen van d",
			21,
			"0923912739",
			 
		},
		{
			"abc05",
			"nguyen van e",
			18,
			"01912739",
			 
		},
	}; 
	printf("Moi ban nhap ID cua sinh vien can update:");
	fgets(findID, sizeof(findID),stdin); 
	updateSinhVien(sv,5,findID); 
	return 0; 
	} 
	void updateSinhVien(struct SinhVien sv1[],int n, char findID[]){
		int flag = -1; 
		for(int i =0;i<n;i++){
			if(strcmp(findID,sv1[i].id)){
				flag = i;
				break; 
			}
		}
		if(flag == -1){
			printf("Khong co ID thoa man"); 
		}else{
			sv1[flag].fullName="le minh D";
			strcpy(sinhVien[flag].name,"le minh D");
			printf("ten sinh vien moi: %s",sinhVien[flag].name);
		} 
		printf("Ten sinh vien vi tri moi:%s",sinhvien[flag]. ) 
	}
	
	
 
