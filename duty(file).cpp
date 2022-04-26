#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     ofstream GG("Dasti");
    for (int a =1;a<=10;a++)
    {
        for (int b =1;b <=a; b++)
        {
           GG <<"*";
            }
            if (a==10)
        {
            }else{
            
        GG << "\n";}
    }   
    
    GG.close();
}
