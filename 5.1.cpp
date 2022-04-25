#include <iostream>

using namespace std ;

float SquaredSum(float a, float b,float result)
{
    result=(a+b)*(a+b);
    return result;
}

int main ()
{
    float c,d,result;
    cout<<"Введите первую  дробь\n";
    cin>>c;
    cout<<"Введите вторую дробь \n";
    cin>>d;
    cout<<"Результат - "<<SquaredSum(c,d,result)<<"\n";
}
