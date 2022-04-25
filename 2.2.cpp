#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int s = 0;
    while (i < 1001)
    {
           
        if (i % 7 == 0) { 
            cout << i << '\n';
            s=i+s;
       }  

       i = i + 4;
    }
    cout << "Сумма  равна "<< s << '\n';
    return 0;
}
