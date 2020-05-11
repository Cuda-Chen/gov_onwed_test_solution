#include <iostream>

using namespace std;

// 計算階乘函式
int fatorial(int n)
{
    int result = 1;
    if(n <= 1)
    {
        return result;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

// 計算e(自然對數的底數)函式
double calculate_e(int n)
{
    double result = 0; // 結果
    for(int i = 0; i < n; i++)
    {
        result += 1. / fatorial(i); // 將每個級數相加
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << calculate_e(n) << endl;

    return 0;
}
