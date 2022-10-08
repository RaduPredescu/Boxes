#include <iostream>
#include "header.h"
int main()
{
    int n;
    std::cin>>n;
    double Max=0.0;
    for(int i=1;i<=n;i++){
        std::string material;
        std::string forma;
        std::cin>>material>>forma;
        if(forma=="CUB"){
            double lat;
            std::cin>>lat;
            cub *x=new cub(lat);
            double s=0;
            if(material=="LEMN")s=x->pret_lemn();
            else s=x->pret_metal();
            if(s>Max)Max=s;
        }
        if(forma=="SFERA"){
            double raza;
            std::cin>>raza;
            sfera *x=new sfera(raza);
            double s=0;
            if(material=="LEMN")s=x->pret_lemn();
            else s=x->pret_metal();
            if(s>Max)Max=s;
        }
        if(forma=="CILINDRU"){
            double raza,inaltime;
            std::cin>>raza>>inaltime;
            cilindru *x=new cilindru(raza,inaltime);
            double s=0;
            if(material=="LEMN")s=x->pret_lemn();
            else s=x->pret_metal();
            if(s>Max)Max=s;
        }
    }
    std::cout<<Max;
}