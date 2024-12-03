#include<stdio.h>

int main(){
	int number[100][100];
    int ans;
   	int a,b;
   	int tong=0;
   	int tich=1;
   	int size;
   	int find;
   	int found=0;
   	int temp[100];
	do{
		printf("\nMENU\n");
	    printf("1.nhap kich co va gia tri cac phan tu\n");
	    printf("2.in gia tri cac phan tu theo ma tran\n");
	    printf("3.in cac phan tu nam tren duong bien va tinh tich\n");
	    printf("4.in cac phan tu nam tren duong cheo chinh\n");
	    printf("5.in ra cac phan tu nam tren duong cheo phu\n");
	    printf("6.sap xep duong cheo chinh theo thu tu tang dan\n");
	    printf("7.tim kiem mot phan tu va in vi tri cua phan tu trong mang\n");
	    printf("8.thoat\n");
	    printf("lua chon cua ban?\n");
	    scanf("%d",&ans);
	    switch(ans){
	    	case 1:
	    		printf("nhap so hang: ");
	    		scanf("%d",&a);
	    		printf("nhap so cot: ");
	    		scanf("%d",&b);
	    		for(int i=0;i<a;i++){
	    			for(int j=0;j<b;j++){
	    				printf("nhap phan tu [%d][%d]: ",i+1,j+1);
	    				scanf("%d",&number[i][j]);
					}
				}break;
			case 2:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						printf("%d\t",number[i][j]);
					}
					printf("\n");
				}break;
			case 3:
				printf("cac phan tu nam tren duong bien: ");
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(i==0 || i==a-1 || j==0 || j==b-1){
							printf("%d\t",number[i][j]);
							tong+=number[i][j];
						}
					}
				}
				printf("\ntong cac phan tu tren duong bien la: %d\n",tong);
				break;
			case 4:
				if(a!=b){
					printf("mang khong co duong cheo chinh!!");
					break;
				}
				printf("cac phan tu nam tren duong cheo chinh la: ");
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
					    if(i==j){
					    	printf("%d\t",number[i][j]);
						}
					}
				}break;
			case 5:
				if(a!=b){
					printf("mang khong co duong cheo phu!!");
					break;
				}
				printf("cac phan tu nam tren duong cheo phu la: ");
				for(int i=0;i<a;i++){
					    int j=a-i-1;
					    printf("%d\t",number[i][j]);
					}
				break;
			case 6: 
				if(a!=b){
					printf("mang khong co duong cheo chinh!!");
					break;
				}
				size = a;
				temp[size];
				for(int i=0;i<a;i++){
					temp[i]=number[i][i];
				}
				for(int i=0;i<size-1;i++){
					for(int j=i+1;j<size;j++){
						if(temp[i]>temp[j]){
							int t=temp[i];
							temp[i]=temp[j];
							temp[j]=t;
						}
					}
				}
				printf("duong cheo chinh sau khi duoc sap xep: ");
				for(int i=0;i<a;i++){
					printf("%d\t",temp[i]);
				}break;
			case 7:
				printf("nhap phan tu can tim: ");
				scanf("%d",&find);
				printf("phan tu can tim nam o vi tri: ");            
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(number[i][j]==find){
							printf("hang %d cot %d\n",i+1,j+1);
							found=1;
						}
					}
				}
				if(!found){
					printf("phan tu %d khong ton tai!\n",find);
				}
				break;
		}
	}while(ans!=8);
	return 0;
}
