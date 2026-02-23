#include<stdio.h>
#include<string.h>
void farafinal(char a[])
{
    int n=0;
    while (a[n]!='\0')
        n++;
    if(a[n-1]=='\n')
        a[n-1]='\0';
}
/*int desp(char x[], char y[][256])
{
    int n=0, i=0, j=0;
    strcpy(y[n++], x+i);
    while((x+i)[0])
    {
        if((x+i)[0]==' ')
        {   
            y[n-1][j]='\0';
            j=0;
            strcpy(y[n++], x+i+1);
        }
        else
            j++;
        i++;
    }
    n;
    return n;
}*/
int desp(char x[], char y[][256])
{
    int n=0, i=0, j=0, ok=0;
    do
    {
        if((x+i)[0]==' '||(x+i)[0]=='\0')
        {
            y[n++][j]='\0';
            j=0;
        }
        else
            y[n][j++]=(x+i)[0];
        while((x+i)[0]==' ')
        {
            i++;
            ok=1;
        }
        if(ok)
         {
           i--;
           ok=0;
         }
        i++;
    }while((x+i)[0]);
    return n;
}
int main()
{
    char x[256], y[256][256], cuv[256], aux[256];
    int i=0, j, n=0, tot=0;
    fgets(x, 256, stdin);
    farafinal(x);
    n=desp(x, y);
   for(i=0; i<n; i++) {
    for(j=i+1; j<=n; j++) 
    {
        if(strlen(y[i]) < strlen(y[j])) {
            strcpy(aux, y[i]);
            strcpy(y[i], y[j]);
            strcpy(y[j], aux);
        }
        else if(strlen(y[i]) == strlen(y[j]) && strcmp(y[i], y[j]) > 0) {
            strcpy(aux, y[i]);
            strcpy(y[i], y[j]);
            strcpy(y[j], aux);
        }
    }
}
    for(i=0; i<=n; i++)
        printf("%s\n", y[i]);
    return 0;
}