#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    FILE *dosyaninAdresi;

    char text2[] = "Murat Pala";

    dosyaninAdresi = fopen("C:\\Users\\murat\\Desktop\\C DERSLER�\\Dosya ��lemleri\\yazilar.txt","w");
    //dosyaninAdresi = fopen("C:\\Users\\murat\\Desktop\\C DERSLER�\\Dosya ��lemleri\\yazilar.txt","a");

    fputc('K',dosyaninAdresi);
    fprintf(dosyaninAdresi,"\n"); // fprintf kullanmak daha mant�kl�!!!
    fprintf(dosyaninAdresi,"%s\n",text2);
    fputs("Kaan Academy",dosyaninAdresi);

    fclose(dosyaninAdresi);


    return 0;
}
