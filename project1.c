#include <stdio.h>

int main()
{
    int i=0, j=0, temp=0;
    long int girilenSayi=0,tempSayi=0;
    int basamakSayisi=0,tempBasamak=0, rakamToplami=0;

    printf("Hesaplanmak istenen sayi: ");
    scanf("%ld",&girilenSayi);
    tempSayi = girilenSayi;

    while(tempSayi>0) //SAYININ BASAMAK SAYISINI BULUYORUZ.
    {
        basamakSayisi++;
        tempBasamak++;
        tempSayi/=10;
    }

    int sayi[basamakSayisi];

    while(tempBasamak>=0) //SAYIYI PARCALAYIP INT SAYI DIZISINE ATAMA YAPIYORUZ.
    {
        sayi[tempBasamak-1] = girilenSayi%10;
        girilenSayi = girilenSayi/10;
        tempBasamak--;
    }

    printf("\nSayi %d basamakli.\n\n",basamakSayisi);

    for(i=0; i<basamakSayisi; i++)
    {
        rakamToplami += sayi[i];
    }

    for(i=0; i<basamakSayisi; i++)
    {
        if(i==basamakSayisi-1)
        {
            printf("%d",sayi[i]);
        }
        else
        {
            printf("%d+",sayi[i]);
        }
    }

    printf(" sayilarinin toplami: %d",rakamToplami);

    for(i=0; i<basamakSayisi-1;i++)
    {
        for(j=i+1; j<basamakSayisi; j++)
        {
            if(sayi[i] < sayi[j])
            {
                temp = sayi[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                sayi[i] = sayi[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                sayi[j] = temp; // Dizi[j] ye ise dizi[i] değerini kaydediyoruz. Bu değeri gecicide saklamıştık
            }
        }
    }

    printf("\n\nYazilabilecek EN BUYUK sayi: ");

    for(i=0; i<basamakSayisi; i++)
    {
        printf("%d",sayi[i]);
    }

    for(i=0; i<basamakSayisi-1;i++)
    {
        for(j=i+1; j<basamakSayisi; j++)
        {
            if(sayi[i] > sayi[j])
            {
                temp = sayi[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                sayi[i] = sayi[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                sayi[j] = temp; // Dizi[j] ye ise dizi[i] değerini kaydediyoruz. Bu değeri gecicide saklamıştık
            }
        }
    }

    printf("\n\nYazilabilecek EN KUCUK sayi: ");

    for(i=0; i<basamakSayisi; i++)
    {
        printf("%d",sayi[i]);
    }

    printf("\n");




}
