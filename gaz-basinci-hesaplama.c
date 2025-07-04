#include <stdio.h>
#include <stdlib.h>

int main(){
    float R_Constant=8.314, MolSayisi, Sicaklik, Hacim, Basinc;
    
    //Kullanıcıdan mol sayısını al.
    printf("Mol sayisini giriniz.\t");
    scanf("%f", &MolSayisi);

    //Kullanicidan sicaklik degerini al.
    printf("Sicaklik degerini giriniz.\t");
    scanf("%f", &Sicaklik);

    if (Sicaklik > -273) {
        if (Sicaklik < 100) {
        Sicaklik += 273;
        printf("Hacimi giriniz.\t");
            scanf("%f", &Hacim);

            if (Hacim <= 0) {
                printf("Hacim negatif veya sifir olamaz! Sifirdan buyuk bir hacim degeri giriniz:\t");
                scanf("%f", &Hacim);

                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }

            else {
                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }

            
    }
        else {
            printf("Hacimi giriniz.\t");
            scanf("%f", &Hacim);

            if (Hacim <= 0) {
                printf("Hacim negatif veya sifir olamaz! Sifirdan buyuk bir hacim degeri giriniz:\t");
                scanf("%f", &Hacim);

                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }

            else {
                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }
        }
    }
    else {
        printf("Kelvin sayisi negatif olamaz. -273 ve -273'den büyük bir Celcius değeri girin.\n");
        printf("Sicaklik degerini yeniden giriniz:\n ");
        scanf("%f", &Sicaklik);
        Sicaklik += 273;

        printf("Hacimi giriniz.\t");
            scanf("%f", &Hacim);

            if (Hacim <= 0) {
                printf("Hacim negatif veya sifir olamaz! Sifirdan buyuk bir hacim degeri giriniz:\t");
                scanf("%f", &Hacim);

                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }

            else {
                Basinc = MolSayisi * R_Constant * Sicaklik / Hacim ;
            printf("Basincinizin buyuklugu:\t%f", Basinc);
            printf("\n\n");
            }
    }

    system("PAUSE");
    return 0;

}