#include<stdio.h>
int main()
{
      int su,bilet,kola,misir;
      float sf,bf,mf,kf,tf;
      printf("Sinemamiza hosgeldiniz...");

      printf("Urunlerimizin fiyatlari asagidaki gibidir: \n");

      printf("Biletler: 20 TL\nSu: 5 TL\nMisir: 10 TL\nKola: 20 TL\n");

      printf("Urunlerinizin adetlerini giriniz:\n");

      do{
      printf("Kac adet bilet aldiniz?");
      scanf("%d",&bilet);
      if(bilet<0)
      {
            printf("Gecersiz bir sayi girdiniz lutfen pozitif bir sayi giriniz:\n");
      }
      }while(bilet<0);
      do{
      printf("Kac adet su aldiniz?");
      scanf("%d",&su);
      if(su<0)
      {
            printf("Gecersiz bir sayi girdiniz lutfen pozitif bir sayi giriniz:\n");
      }
      }while(su<0);
      do{
      printf("Kac adet misir aldiniz?");
      scanf("%d",&misir);
      if(misir<0)
      {
            printf("Gecersiz bir sayi girdiniz lutfen pozitif bir sayi giriniz:\n");
      }
      }while(misir<0);
      do{
      printf("Kac adet kola aldiniz?");
      scanf("%d",&kola);
      if(kola<0)
      {
            printf("Gecersiz bir sayi girdiniz lutfen pozitif bir sayi giriniz:\n");
      }
      }while(kola<0);

      kf=kola*20;
      sf=su*5;
      bf=bilet*20;
      mf=misir*10;
      tf=mf+sf+bf+kf;

      printf("Alinan biletlerin toplam fiyati: %.2f\n",bf);
      printf("Alinan sularin toplam fiyati: %.2f\n",sf);
      printf("Alinan misirlarin toplam fiyati: %.2f\n",mf);
      printf("Alinan kolalarin toplam fiyati: %.2f\n",kf);
      printf("Urunlerin toplam fiyati: %.2f\n",tf);
      printf("Bizi tercih ettiginiz icin tesekkur eder, Yine bekleriz...");
}
