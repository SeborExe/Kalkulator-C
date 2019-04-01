# include <stdio.h>
# include <math.h>

int  iloczyn(float a, float b, float *il)
{
 if((a<0||a>1000000)||(b<0||b>1000000)) return 1;
 else *il=a*b;
 return 0;
}
int suma(float a, float b, float *sum)
{
    if((a<0||a>1000000)||(b<0||b>1000000)) return 1;
    else *sum=a+b;
    return 0;
}
int roznica(float a, float b, float *od)
{
    if((a<0||a>1000000)||(b<0||b>1000000)) return 1;
    else *od=a-b;
    return 0;
}
int dzielenie(float a, float b, float *dz)
{
    if((a<0||a>1000000)||(b<0||b>1000000)) return 1;
    else *dz=a/b;
    return 0;
}
int potegowanie(float a, float b, float *pot)
{
    if((a<0||a>1000000)||(b<0||b>1000000)) return 1;
    else *pot=pow(a,b);
    return 0;
}
main()
{
float wynik,a,b;
char bufor[1000001], znak;
 printf("Podaj dzialanie (liczba dodatnia nie wieksza niz 10^6,do potegowania uzyj '^')= ");
 gets(bufor);
 if (sscanf(bufor,"%f%c%f",&a,&znak,&b)==3)
    {
        if (!iloczyn(a,b,&wynik) && znak=='*')
        printf("Iloczyn= %f\n",wynik);

        else if (!suma(a,b,&wynik) && znak=='+')
        printf("Suma= %f\n",wynik);

        else if (!roznica(a,b,&wynik) && znak=='-')
        printf("Roznica= %f\n", wynik);

        else if (!dzielenie(a,b,&wynik) && znak=='/')
        printf("Iloraz= %f\n", wynik);

        else if (!potegowanie(a,b,&wynik) && znak=='^')
        printf("Potega a do b= %f\n", wynik);

        else printf("Niewlasciwe liczby lub dzialanie\n");
    }
 else printf("\nNiewlasciwa liczba argumentow\n");
 return 0;
}
