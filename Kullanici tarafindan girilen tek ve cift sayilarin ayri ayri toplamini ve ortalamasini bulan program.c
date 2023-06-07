//kullanici tarafindan girilen n farkli sayi icinden tek ve cift olanlarýn ayri ayri ortalamasini alan program
#include<stdio.h>
int main()
{
	int n,i,sayi,cadet=0,tadet=0,ttop=0,ctop=0;
	float tort,cort;
	printf("kac sayi gireceksiniz? : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("sayi giriniz: ");
		scanf("%d",&sayi);
		if (sayi%2==0)
		{
			ctop=ctop+sayi;
			cadet++;
	    }
	    else
	    {
		    ttop=ttop+sayi;
	        tadet++;
		}
	}
	if(tadet>0)
	{
		tort=float(ttop)/float(tadet);
		printf("tek sayilar adedi %d, top %d ve ort %.2f \n",tadet,ttop,tort);
	}
	else
	{
		printf("hic tek sayi yok \n");
	}
	if(cadet>0)
	{
		cort=float(ctop)/float(cadet);
		printf("cift sayilar adedi %d, top %d ve ort %.2f \n",cadet,ctop,cort);
	}
	else
	{
		printf("hic cift sayi yok \n");
	}
	return 0;
}
