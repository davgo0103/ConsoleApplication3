// ConsoleApplication3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
using namespace std;
#include <iostream>

void Select_Sort(int a[], int n) {
    int i, j, max, temp;
    for (i = n - 1; i > 0; i--) {
        max = i;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[max])
                max = j;
        }
        temp = a[max];
        a[max] = a[i];
        a[i] = temp;

        for (j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}

void Insert_Sort(int a[], int n) {
    int i, j,up;
    for (i =1 ; i <n ; i++) {
        up = a[i];
        j = i;
        while (j>0 && a[j-1]>up)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = up;

        for (j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}


int main()
{
    int abc[] = { 37,61,19,41,81,25,56,41,49 };
    Insert_Sort(abc, 9);
    std::cout << "Hello World!\n";
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
