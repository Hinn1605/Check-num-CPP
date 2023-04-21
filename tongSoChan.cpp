#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

//hàm nhập các phần tử trong mảng
void nhap (float a[], int n)
{
    //sử dụng vòng lặp dowhile để yêu cầu người dùng nhập vào số phần tử của mảng trong khoảng từ 1 -> MAX
    do
    {
        cout << "Nhap so phan tu co trong mang: " << endl;
        cin >> n;
        
        if(n <= 0 || n > MAX)
        {
          cout<<"\nSo phan tu khong hop le, vui long nhap lai!";
        }
    }
    while(n <= 0 || n > MAX);
    
    //sử dụng vòng lặp for để nhập giá trị cho phần tử của mảng
    for(int i = 0; i < n; i++)
    {
      cout << "Nhap a [" << i << "]: ";
      cin >> a[i];
    }
}

// hàm xuất các phần tử trong mảng
void xuat(float a[], int n)
{
    //sử dụng vòng lặp for lặp từ đầu đến cuối mảng, cứ mỗi vòng lặp thì in phần tử a[i] ra màn hình
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<<"\t";
    }
}

/* hàm tính tổng các số dương trong mảng */
float tongam(float a[], int n)
{
    //khai báo biến s = 0 để tính tổng các số âm
    float s = 0;
    //sử dụng vòng lặp for duyệt từng phần tử của mảng, số nào > 0 thì ta cộng dồn cho s
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            s = s + a[i];
        }
    }
     //return s để trả về tổng các số âm trong mảng
    return s;
}
int main()
{
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);
    float tong = tongduong(a, n);
    cout<<"\nTong cac so duong trong mang la: " << tong;
     
}
