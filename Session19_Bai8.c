#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void hienThiSinhVien(struct SinhVien danhSach[], int soLuong);
void sapXepSinhVienTheoTen(struct SinhVien danhSach[], int soLuong);
int main(){
    struct SinhVien danhSach[50]={
        {1, "Nguyen Van E", 11, "0123456789"},
        {2, "Nguyen Van C", 12, "0987654321"},
        {3, "Nguyen Van D", 13, "0912345678"},
        {4, "Nguyen Van B", 14, "0923456781"},
        {5, "Nguyen Van A", 15, "0934567812"}
    };
    int soLuong=5;
    printf("Danh sach sinh vien truoc khi sap xep theo ten:\n");
    hienThiSinhVien(danhSach, soLuong);
    sapXepSinhVienTheoTen(danhSach, soLuong);
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    hienThiSinhVien(danhSach, soLuong);

    return 0;
}
void hienThiSinhVien(struct SinhVien danhSach[], int soLuong){
    for(int i=0; i<soLuong; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n",
               danhSach[i].id, danhSach[i].name, danhSach[i].age, danhSach[i].phoneNumber);
    }
}
void sapXepSinhVienTheoTen(struct SinhVien danhSach[], int soLuong){
    for(int i=0; i<soLuong-1; i++){
        for(int j=0; j<soLuong-i-1; j++){
            if (strcmp(danhSach[j].name, danhSach[j+1].name) > 0){
                struct SinhVien temp=danhSach[j];
                danhSach[j] = danhSach[j+1];
                danhSach[j+1]=temp;
            }
        }
    }
}
