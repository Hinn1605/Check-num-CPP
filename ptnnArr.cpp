/*
    - Khởi tạo giá trị min = a[0]
    - Duyệt lần lượt các phần tử của mảng. Phần tử nào có giá trị nhỏ hơn min thì tiến hành gán giá trị đó cho min
    - Sau khi duyệt hết các phần tử của mảng a, tiến hành trả về giá trị của min
    - Hàm min sẽ có kiểu trả về là int (hoặc long cũng được)
    - Có 2 tham số truyền vào: tên mảng và số lượng phần tử
*/

#include <iostream>
using namespace std;

// khai báo MAX = 300
#define MAX 300

// hàm nhập với 1 tham số là 1 mảng số thực với số phần tử n
void nhap(float a[], int n)
{
    // dùng dowhile để yêu cầu nhập vào số phần tử
    do
    {
        cout << "Nhap so phan tu n: "; cin >> n;
        if  (n <= 0 || n >= MAX)
        {
            cout << "\nSo phan tu khong hop le, vui long kiem tra lai";
        }
    }
    while (n <= 0 || n > MAX);

    // dùng vòng lặp for để yêu cầu nhập giá trị cho từng phần tử
    for (int i = 0; i <= n; i++)
    {
        cout << "Nhap a[" << i << "]= "; cin >> a[i];
    }
}

// hàm tìm phần tử nhỏ nhất trong mảng
float isMin(float a[], int n)
{
    // gán phần tử đầu tiên cho biến min
    float min = a[0];

    /*
    - dùng for để so sánh với từng phần tử trong mảng
    - phần tử nào nhỏ hơn min thì gán nó cho min
    */
    for (int i = 0; i <= n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    // cứ như vậy đến cuối vòng lặp sẽ được min là phần tử nhỏ nhất
    return min;
}


// hàm xuất
void xuat(float a[], int n)
{
    // xuất các phần tử trong mảng
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    // xuất phần tử nhỏ nhất trong mảng
    cout << "\nPhan tu nho nhat la: " << isMin(a,n);
}
int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);
} 
