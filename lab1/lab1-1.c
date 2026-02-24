#include <stdio.h>
#include <string.h>
FILE *fin;
int convert(char a[])//conversie sir de caractere=>int
{
    int x=0, i, p=1, n;
    n=strlen(a);
    for(i=n-1; i>=0; i--)
    {   
        x=x+p*(a[i]-'0');
        p=p*10;
    }
    return x;
}
void farafinal(char a[])
{
    int n=0;
    while (a[n]!='\0')
        n++;
    if(a[n-1]=='\n')
        a[n-1]='\0';
}
int main()
{
    fin=fopen("in.txt", "r");
    char a[256];
    int x, y=0;
    fgets(a, 256, fin);
    farafinal(a);
    x=convert(a);
    while(fgets(a, 256, fin))
    {
        y=y+x;
        farafinal(a);
        x=convert(a);
    }
    y=y+x;
    printf("%d\n", y);
    fclose(fin);
    return 0;
}