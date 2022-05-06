#include <iostream>

using namespace std;

int main()
{
   int n[] = {4, 3, 2, 9,5,12,16,8,22,19};
    int max = n[0], min = n[0];
    for (int i=0; i<10; i++){
        if (n[i]>max) max = n[i];
        if (n[i]<min) min = n[i];
    }
    cout << max <<  "\n";
    cout << min << "\n";
}
