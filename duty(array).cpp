#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char  Letters[26];
    for(int i=0;i<26;i++){
         Letters[i]=(65+i);
        cout<< Letters[i];
    }
    return 0;
}
