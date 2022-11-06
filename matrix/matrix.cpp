#include <iostream>
using namespace std;
int main()
{
    float a[3][4] = { {5, 2, 0, 10 },{3, 5, 2, 5},{20, 0, 0, 0} };
    float b[4][2] = { {1.20, 0.50}, {2.80, 0.40}, {5, 1}, {2.00, 1.50} };
    float c[3][2] = { {0,0}, {0,0}, {0,0} };

    for (int strA = 0; strA < 3; strA++)
    {
        for (int colB = 0; colB < 2; colB++)
            for (int strB = 0; strB < 4; strB++)
                c[strA][colB] += a[strA][strB] * b[strB][colB];
    }


}

