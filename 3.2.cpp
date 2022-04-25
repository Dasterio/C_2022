#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a=1, b, c;
    ifstream GG("Dasti");
    while (1){
    GG>>c;
    cout<<a<<"."<<c<<"\n";
    a++;
    if (GG.eof()) break;
    }
    GG.close();    
    return 0;
}

