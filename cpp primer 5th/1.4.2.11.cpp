#include<iostream>
int main()
{
    int a=0,b=0,k=0;
    std::cout<<"Please enter two numbers"<<std::endl;
    std::cin>>a>>b;
    if(a>b)
    {
        k=a;
        a=b;
        b=k;
    }
    for(;a<=b;a++)
    std::cout<<a<<std::endl;
    return 0;
}
