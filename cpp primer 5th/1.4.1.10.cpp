#include<iostream>
int main(){
    int a=0,b=0,k=0;
    std::cout<<"Please enter two numbers"<<std::endl;
    std::cin>>a>>b;
    while (a<b){
        while ((a+k)<=b)
        {
            std::cout<<a+k<<std::endl;
            ++k;
        }
    while (a>b){
        while((b+k)<=a)
        {
            std::cout<<b+k<<std::endl;
            ++k;
        }
    }
    }
    return(0);
}
