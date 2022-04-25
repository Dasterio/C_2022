#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b;
    
    ofstream GG("Dasti");
    cin >> a >> b;
    for (int i = a; i <= b ; i++)
    {
        GG << i * 3 << "\n";
    }
    GG.close();
}
