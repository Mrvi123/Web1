//Bai 1:
#include <stdio.h>

void NhapMang(int a[], int n){
	int i;
	for(i = 0; i <= n; i++){
		printf("Nhap gia tri cho a[%d] = ", i);
		scanf("%d", &a[i]);
		}
}

void XuatMang(int a[], int n){
	int i;
	printf("Mang vua nhap la: ");
	for(i = 0; i <= n; i++){
		printf("%d ", a[i]);
	}
}

void MaxNumber(int a[], int n, int max){
	int i;
	max = a[0];
	printf("\nSo lon nhat trong mang la: ");
	for(i = 0; i <= n; i++){
		if(a[i] > a[0]){
			//int max = a[0];
			max = a[i];
		}
	}
		printf("\n%d",max);

		//printf("\nSo lon nhat trong mang: %d", max);
}

void MinNumber(int a[], int min, int n){
	int i;
	min = a[0];
	printf("\nSo nho nhat trong mang la: ");
	for(i = 0; i <= n; i++){
		if(a[i] < a[0]){
			min = a[i];
		}
	}
		printf("\n%d",min);
}

//the number of occurrences
void NumOfOc(int a[], int n, int am, int duong, int zero){
	int i,j;
	am=duong=zero=0;
	for(i = 0; i <= n; i++){
		//for(j = i; j <= (n-1);j--){ // neu khai bao dong nay thi se
		//xuat hien loi khong dem duoc so lan xuat hien cua so am, so khong
		// so duong khi dem se bi sai ket qua, so am va so duong se vuot qua
		// trong khoang gia tri cua so nguyen.
			if(a[i] > 0){
				duong++;
			}else if(a[i] < 0){
				am++;
			} else {
				zero++;
			}
	//	}
	}
		printf("\nSo duong xuat hien %d lan", duong);
		printf("\nSo am xuat hien %d lan", am);
		printf("\nSo khong xuat hien %d lan", zero);

}

main(){
	int n, min, max, sa, sd, sk;// sa: so am; sd: so duong; sk: so khong
	sa=sd=sk=0;

	//Nhap gia tri cho n trong khoang 1<=n<=50
	do{
		printf("Nhap so luong phan tu: ");scanf("%d", &n);
	}while(n<=1 || n>=50);

	int a[n];
	NhapMang(a, n);
	XuatMang(a, n);
	MaxNumber(a, n, max);
	MinNumber(a,min,n);
	NumOfOc(a,n,sa,sd,sk);
	return 0;
}

//Bai 2:
#include <stdio.h>
//ham nhap mang
void NhapMang(int a[], int n){
	int i;
	for(i = 0; i <= n; i++){
		printf("Nhap vao phan tu a[%d] = ",i);
		scanf("%d", &a[i]);
	}

}

//ham xuat mang
void XuatMang(int a[], int n){
	int i;
	for(i = 0; i <= n; i++){
		printf("%d  ",a[i]);
	}
        printf("\n");
}

//ham in chan le
void InChanLe(int a[], int n){
	int i;
	for(i = 0; i <= n-1; i++){
		if(a[i]%2 == 0)printf("%d  ",a[i]);
}
    printf("\n");
	for(i = 0; i < n-1; i++){
		if(a[i]%2!= 0)printf("%d  ",a[i]);
}
}
main()
{
	int n;
	int a[50];
	do{
		printf("Nhap vao n: ");scanf("%d",&n);
	}while(n<=1 || n>=50);

	NhapMang(a,n);
	XuatMang(a,n);
	InChanLe(a,n);
}

//Bai 3:
#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//Xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
}
main(){
    int n, s1, s2;
    int a[50];
    s1=s2= 0;

    do{
        printf("Nhap vao n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);

    int i;
    for(i = 0; i<n-1; i++){
        s1 = s1+a[i];
        s2 = s2+a[i]*a[i];
        s1 = s1/n;
        s2 = sqrt(s2);
        printf("\nS1 = %d",s1);
        printf("\nS2 = %d",s2);
    }
//        printf("\nS1 = %d",s1);
//        printf("\nS2 = %d",s2);
}

//Bai 4:
#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

//Xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
        printf("\n");
}

//Tinh tong
void TinhTong(int a1[], int a2[], int a3[], int n){
    int i;
    for(i = 0; i < n; i++){
        a3[i] = a1[i] + a2[i];
        printf("Tong cua hai mang la: %d",a3[i]);
        printf("\n");
    }
}

main(){
    int n;
    int a[50], a1[50], a2[50];

    do{
        printf("Nhap vao n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    NhapMang(a1,n);
    TinhTong(a,a1,a2,n);
    printf("Mang dau tien la:\n");
    XuatMang(a,n);
    printf("Mang thu hai la:\n");
    XuatMang(a1,n);
    printf("Tong cua hai mang la:\n");
    XuatMang(a2,n);
}

//Bai 5:
#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
}

//ham in so day dao nguoc
void InDaoNguoc(int a[], int n){
    int i;
    printf("\n");
    for(i = n-1;i >= 0;i--){//đk o i = n-1 bang true neu
            //dung i = n thi i se nhan mot chi so moi va
            //chi so nay chua duoc nhan gia tri va khi in
            //se ra gia tri bang 0
         printf("%d  ",a[i]);
    }
}

//hoan vi
void HoanVi(int *a, int *b){
    int tam;
    tam = *a;
    *a = *b;
    *b = tam;
}

//sap xep tang dan mang
void SapTang(int a[], int n){
    int i;
    int j;
    printf("\n");
    printf("Mang sap tang la: ");
    for(i = 0; i < n-1; i++){
         for(j = i+1; j<n;j++)
            if(a[i]>a[j])HoanVi(&a[i],&a[j]);
        }
}

//sap giam dan mang
void SapGiam(int a[], int n){
    int i, j;
    printf("\n");
    printf("Mang sap giam la: ");
    for(i = 0; i < n-1; i++){
        for(j = i +1; j< n; j++)
            if(a[i]<a[j])HoanVi(&a[i],&a[j]);
    }
}
main(){
    int n;
    int a[50];

    do{
        printf("Nhap vao n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    printf("Mang ban dau:\n");
    XuatMang(a,n);
    printf("\nMang sau khi dao nguoc:");
    InDaoNguoc(a,n);
    SapTang(a,n);
    XuatMang(a,n);
    SapGiam(a,n);
    XuatMang(a,n);
}


//Bai 6:
#include <stdio.h>
#include <stdbool.h>
//nhap mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
}

//kiem tra doi xung
bool DaoNguoc(int a[], int n){
    int i;
    int tmp;
    printf("\n");
    for(i = 0; i<n/2;i++){
       if(a[i]==a[n-i-1]){
            tmp = a[i];
            a[i] = a[n-i-1];
            a[n-i-1]=tmp;
            return 1;
      }
    }
   return 0;
}

//cap so cong
bool CapCong(int a[],int n){
    int d = a[1]-a[0];
    int i;
    for(i = 1; i < n-2;i++){
        if(a[i]+d != a[i+1])return 0;
    }
        return 1;
}

main(){
    int n;
    int a[50];
    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);
    NhapMang(a,n);
    XuatMang(a,n);

    int kiemTra = DaoNguoc(a,n);
    if(DaoNguoc(a,n)!=0){
        printf("Mang doi xung");
    }else{
        printf("Mang ko doi xung");
    }
    DaoNguoc(a,n);
    XuatMang(a,n);
    DaoNguoc(a,n);
    int capSoCong = CapCong(a,n);
    if(CapCong(a,n) != 0){
        printf("\nMang la cap so cong");
    }else{
        printf("\nKhong phai la cap so cong");
    }
    printf("\n");
    XuatMang(a,n);
}


//Bai 7:
#include <stdio.h>
//nhap mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n;i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i<n;i++){
        printf("%d  ",a[i]);
    }
}

//kiem tra mang tang
int MangTang(int a[], int n){
    int i;
    for(i = 0; i < n-2; i++){
        if(a[i] < a[i+1]) return 1;
    }
    return 0;
}

//kiem tra mang giam
int MangGiam(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > a[i+1])return 1;
    }
    return 0;
}
main(){
    int n;int a[50];

    do{
        printf("Nhap vao n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);

    int kiemTraTang = MangTang(a,n);
    if(MangTang(a,n) != 0){
        printf("\nMang tang");
    }else{
        printf("\nMang khong tang");
    }

    int kiemTraGiam = MangGiam(a,n);
    if(MangGiam(a,n) != 0){
        printf("\nMang giam");
    }else{
        printf("\nMang khong giam");
    }
}


//Bai 8:
#include <stdio.h>
#include <stdbool.h>
//nhap mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++)
        printf("%d  ",a[i]);
}

//tim gia tri xuat hien trong mang
void Tim_x(int a[], int n, int x){
    int j = 0;
    int i;
    int b[50];
    for(i = 0;i<n;i++){
        if(a[i] == x){
            b[j]=i+1;
            j++;
        }
    }
        if(j!=0){
            for(i = 0; i<j;i++){
                printf("\nGia tri cua x kiem duoc trong mang: %d",b[i]);
                printf("\nSo lan %d xuat hien la: %d",b[i],j);
                //return 1;
            }
        }else{
                printf("x khong xuat hien trong mang");
        }
    }
   // return 0;

//    for(i = 0; i < n-1; i++){
//        if(a[i]==x)b[j]= i +1;j++;
//    }
//        if(j != 0){
//            for(i = 0; i<j-1;i++)
//                printf("%d",b[i]);
//                printf("%d",j);
//                return 1;
//        }else{
//                printf("x khong xuat hien trong mang");
//        }
//        return 0;


main(){
    int n, a[50];

    do{
        printf("Nhap vao n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);

    int x;
    printf("Nhap vao x: ");
    scanf("%d",&x);
    Tim_x(a,n,x);
//    int tim_x = Tim_x(a,n,x);
//    if(Tim_x(a,n,x) != 0){
//        printf("Tim thay");
//    }else{
//        printf("Khong tim thay");
//    }

}


//Bai 9:
#include<stdio.h>
//nhap mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++)
        printf("%d  ",a[i]);
}

//xoa x
void Xoa_x(int a[], int &n, int x){
    int i,j;
    for(i = 0; i<n; i++){
        if(a[i] == x)//khoi dat dau khoi lenh cho nay neu
        //khong thi ket qua van la mang ban dau
             for(j = i; j < n;j++){//tranh viec dung j<n-2
                    //vi nhu vay thi chi duyet toi chi so ke cuoi
                    //trong khi chung ta can duyet het mang
                    //neu dung j<n-2 thi ket qua se sai va ko duoc nhu mong muon
                a[j] = a[j+1];
                n--;
        }
    }
}

main(){
    int n, a[50];

    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);

    int x;
    printf("\nNhap x: ");scanf("%d",&x);
    Xoa_x(a,n,x);
    XuatMang(a,n);
}


//Bai 10:
#include<stdio.h>
//xuat mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++)
        printf("%d  ",a[i]);
}

//chen x vao mang
void Chen_x(int a[], int &n, int x){
    int i;
    for(i= 0; i<n;i++)//bo dau khoi lenh di
            //vi no anh huong toi ket qua
            //neu dung khoi lenh thi chen duoc gia
            //gia tri cho chi so dau, tuy nhien chi so cuoi
            //se bi loi luc nay chi so cuoi co them hai gia tri giong nhau
         a[n-i] = a[n-i-1];
        a[0] = a[n+1] = x;
        n = n+2;
}
main(){
    int n, a[50],x;

    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);
    printf("Nhap x: ");scanf("%d",&x);
    Chen_x(a,n,x);
    XuatMang(a,n);
}


//Bai 11:
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//nhap mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
}

//xuat mang
void XuatMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++)
        printf("%d  ",a[i]);
}

//kiem tra so nguyen to
int Kiemtra_nt(int n){
    int i;
        for(i = 2;i<=sqrt(n);i++)
            if(n%i == 0)return 0;
            return 1;
}
//in so nguyen to
void Xuat_nt(int a[],int n){
    int i;
    for(i = 0;i < n;i++)
        if(Kiemtra_nt(a[i]))printf("%d ",a[i]);
}
main(){
    int n, a[50], x;

    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);
    //printf("Nhap x: ");scanf("%d",&x);
    Xuat_nt(a,n);
}


//Bai 12:
#include <stdio.h>
#include <conio.h>
#include <math.h>
//Ham nhap day so nguyen
void NhapMang(int a[], int n){
    for (int i=0; i<n; i++){
        printf("Phan tu [%d]: ",i+1);
        scanf("%d",&a[i]);
}
}
//Ham xuat day so nguyen
void XuatMang(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
}
//kiem tra chinh phuong
int KiemTra_cp(int n){
    for(int i = 0; i<n;i++)
        if(i*i == n)return 1;
            return 0;
}

//xuat so chinh phuong
void Xuat_cp(int a[], int n){
    printf("\n");
    printf("So chinh phuong la:\n
           ");
    for(int i = 0; i<=n;i++)
        if(KiemTra_cp(a[i]))printf("%d  ",a[i]);
}
main(){
 int n, a[50];

    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);
    Xuat_cp(a,n);
}


//Bai 13:
#include <stdio.h>
#include <conio.h>
#include <math.h>
//Ham nhap day so nguyen
void NhapMang(int a[], int n){
    for (int i=0; i<n; i++){
        printf("Phan tu [%d]: ",i+1);
        scanf("%d",&a[i]);
    }
}
//Ham xuat day so nguyen
void XuatMang(int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
}

//kiem tra uoc chung lon nhat
int UCLN(int a, int b){
    if(a == 0 || b == 0){
        return a+b;
    }
    while(a!=b){
        if(a>b)a=a-b;
        else b=b-a;
    }
    return a;
}

int UCLN_day(int a[], int n){
    int tam = a[0];
    for(int i =1;i<n;i++){
        tam = UCLN(tam,a[i]);
    }
    return tam;
}


main() {
int a[20], n;
    do {
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    } while (n<1 || n>20);
NhapMang(a,n);
printf("\nDay so vua nhap: ");
XuatMang(a,n);
int ucln = UCLN_day(a,n);
printf("\nUoc chung lon nhat la:%d",UCLN_day(a,n));

}

//Bai 14:
#include <stdio.h>
#include <conio.h>
#include <math.h>
//Ham nhap day so nguyen
void NhapMang(int a[], int n){
    for (int i=0; i<n; i++){
        printf("Phan tu [%d]: ",i+1);
        scanf("%d",&a[i]);
    }
}
//Ham xuat day so nguyen
void XuatMang(int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("\t%d",a[i]);
    }
}

//ham kiem tra boi chung
int UCLN(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

//boi chung nho nhat
int BCNN(int a, int b){
    return (a*b)/UCLN(a,b);
}

//in boi chung nho nhat
int BCNN_in(int a[], int n){
    int tmp = BCNN(a[0],a[1]);
    for(int i = 0;i<n;i++)
    if(BCNN(tmp,a[i]))
        tmp = BCNN(tmp,a[i]);
        return tmp;
}
main() {
int a[20], n;
    do {
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    } while (n<1 || n>20);
NhapMang(a,n);
printf("\nDay so vua nhap: ");
XuatMang(a,n);
printf("\nBoi chung nho nhat la: %d",BCNN_in(a,n));
getch();
}



void GhiFile(int a[], int n){
    FILE *f;
    f = fopen("tep.txt","w");
    if(f!=NULL){
        printf("Mo tep thanh cong");
    }
    fprintf(f,"%d",n);
    int i;
    for(i = 0; i<n; i++){
        fprintf(f,"%d",a[i]);
    }
    fclose(f);
}

void DocFile(FILE *f){
    int a[50],n;
    f = fopen("tep.txt","r");
    if(f!=NULL){
        printf("Mo thanh cong");
    }
    fscanf(f,"%d",&n);
    printf("Cac so chan doc tu tep la");
    int i;
    for(i = 0;i<n;i++){
        fscanf(f,"%d",&a[i]);
        if(a[i]%2==0)printf("%d",a[i]);
    }
    fclose(f);
}

//Bai 15
#include <stdio.h>
//Nhap Mang
void NhapMang(int a[], int n){
    int i;
    for(i = 0; i<n; i++){
        printf("Nhap vao phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }

}

//In Mang
void XuatMang(int a[], int n){
    int i;
    printf("\n");
    printf("Mang xuat ra la: ");
    for(i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
}

//Kiem Tra So Lon Nhat
int KiemTra(int a[],int n){
    int i;
    int max = a[0];
    //Kiem tra lon nhat
    printf("\n");
    for(i = 0; i<n;i++)
        if(a[0]<a[i])max = a[i];
        return max;
}

//Kiem Tra So Nho Nhat
int KiemTra2(int a[], int n){
    int i;
    int min = a[0];
    for(i = 0; i<n;i++)
        if(a[0]>a[i])min = a[i];
        return min;
}

//Trung Binh Cong
float TrungBinh(int a[], int n){
    float trungBinh;
    int dem = 0;
    int sum = 0;
    int i;
    for(i = 0; i<n; i++){
        dem++;
        sum = sum + a[i];
    }
        trungBinh = (float)sum/dem;
        return trungBinh;
}

//Tim phan tu x trong day
void Tim_x(int a[], int n, int x){
    int i;
    int dem = 0;
    for(i = 0;i<n;i++)
        if(a[i] == x)dem++;
        printf("Tim thay %d",x);
        printf("\nX xuat hien %d lan trong day", dem);
}

//Chen mot phan tu x vao vi tri k
int Chen_x(int a[], int &n, int k, int x){
    int i;
    if(k < 0 || k > n)return 0;
    for(i = n; i>=k;i--)
        a[i] = a[i-1];
        a[k-1] = x;
        n++;
    return 1;
}

//Xoa mot phan tu x tai vi tri k
void Xoa_x(int a[], int &n, int k){
    int i;
    for(i = k-1; i<n;i++){
        a[i] = a[i+1];
    }
        n--;
}

//Thay the x bang y
void Thay_x(int a[], int n, int x, int y){
    int i;
    for(i = 0; i<n;i++)
        if(x==a[i]){//neu trong mang co mot chi so co gia tri bang x thi thay the gia tri tai tri
                // so do bang gia tri y (deu nhap tu ban phim)
            a[i] = y;
        }
}

//Sap xep day giam dan
void Giam_dan(int a[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
        for( j = 0; j < n - i -1; j++){
            if(a[j] < a[j + 1]){
                //doi vi tri
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

//sap xep day tang dan
void Tang_dan(int a[], int n){
    int i,j;
    for(i = 0; i<n-1;i++){
        for(j = 0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int tmp;
                tmp = a[j];
                a[j] = a[j + 1];
                a[j+1] = tmp;
            }
        }
    }
}

//kiem tra cap so cong
int CapSoCong(int a[], int n){
    int i;
    int d = a[1] - a[0];
    for(i = 0; i<n-1;i++)//giai thich lai cai nay: so sau lon hon so truoc ma phan tu cuoi cung la gioi
        //han nen khong co phan tu nao phia sau, vi vay chi can chay toi n -1
        if(d!=a[i+1]-a[i])return 0;
        return 1;
}

//kiem tra cap so nhan
int CapSoNhan(int a[], int n){
    int i;
    int k = a[1]/a[0];
    for(i = 0; i<n-1;i++)//giai thich lai cai nay
        if(k!=a[i+1]/a[i])return 0;
        return 1;
}

//kiem tra day co phai day tang
int KiemTraTang(int a[], int n){
    int i;
    for(i = 0; i<n; i++)
        if(a[i+1]>a[i])return 1;
    return 0;
}
main(){
    int n, a[50];
    int x,k, y, max;
    do{
        printf("Nhap n: ");scanf("%d",&n);
    }while(n<=1 || n>=50);

    NhapMang(a,n);
    XuatMang(a,n);

    printf("So lon nhat trong day: %d\n",KiemTra(a,n));
    printf("So nho nhat trong day: %d\n",KiemTra2(a,n));
    printf("\nTrung binh cua day so la: %.2f",TrungBinh(a,n));
    printf("\nNhap x: ");scanf("%d",&x);
    Tim_x(a,n,x);
    printf("\nNhap x: ");scanf("%d",&x);
    printf("Nhap k: ");scanf("%d",&k);
    Chen_x(a,n,k,x);
    XuatMang(a,n);

    //Xoa x
    printf("\nNhap k: ");scanf("%d",&k);
    Xoa_x(a,n,k);
    XuatMang(a,n);
    printf("\nNhap x: ");scanf("%d",&x);
    printf("\nNhap y: ");scanf("%d",&y);
    Thay_x(a,n,x,y);
    XuatMang(a,n);
    Giam_dan(a,n);
    XuatMang(a,n);
    Tang_dan(a,n);
    XuatMang(a,n);

    //kiem tra cap so cong
    if(CapSoCong(a,n)!=0){
        printf("\nDay do la cap so cong");
    }else{
        printf("\nDay khong la cap so cong");
    }

    //kiem tra cap so nhan
    if(CapSoNhan(a,n)!=0){
        printf("\nDay la cap so nhan");
    }else{
        printf("\nDay khong la cap so nhan");
    }

    //kiem tra day tang
    if(KiemTraTang(a,n)!= 0){
        printf("\nDay so tang");
    }else{
        printf("\nDay so giam");
    }
}
