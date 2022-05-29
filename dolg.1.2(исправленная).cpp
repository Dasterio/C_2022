#include <iostream>
#include <string>
using namespace std;

float Month(int i)
{
string z[12]={
"Январь", "Февраль", "Март", "Апрель","Май", "Июнь", "Июль", 
"Август", "Сентябрь","Октябрь", "Ноябрь", "Декабрь",
};
cout<<z[i-1]<<"\n";
return 0;
}
int main()
{
    int i;
    cout << "введите число: ";
    cin >> i;
    Month(i);
    return 0;
}
