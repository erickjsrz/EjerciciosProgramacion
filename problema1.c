#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, tam;
    int p=1, v=0, c=0, e=0;
    char palabras[100];
    FILE *archivo;
    
    archivo=fopen("Problema1.txt","w");
    if(fopen!=NULL){
        printf("Ingrese el numero de palabras: ");
            scanf("%d",&n);

        for(i=0;i<n;i++){
            printf("\nIngrese la primera palabra %d: ",i+1);
                scanf("%s",&palabras);
            tam=strlen(palabras);
            printf("Cadena Inversa: ");
                for(j=tam-1;j>=0;j--){
                    printf("%c",palabras[j]);
                    fprintf(archivo,"%c",palabras[j]);
                }
            printf("\n");
            fputs("\n",archivo);
            for(j=0;j<tam;j++){
                if (palabras[j] == ' ') {
                    p++;
                    e++;
                } 
                else if (palabras[j] == 'a' || palabras[j] == 'e' || palabras[j] == 'i' || palabras[j] == 'o' || palabras[j] == 'u' ||
                       palabras[j] == 'A' || palabras[j] == 'E' || palabras[j] == 'I' || palabras[j] == 'O' || palabras[j] == 'U') {
                    v++;
                } 
                else if ((palabras[j] >= 'a' && palabras[j] <= 'z') || (palabras[j] >= 'A' && palabras[j] <= 'Z')) {
                c++;
                }
            }

            printf("# de Plabras: %d\n",p);
            printf("# de Vocales: %d\n",v);
            printf("# de Consontantes: %d\n",c);
            printf("# de Espacios: %d\n",e);

            fprintf(archivo,"Palabras: %d\n",p);
            fprintf(archivo,"Vocales: %d\n",v);
            fprintf(archivo,"Consonantes: %d\n",c);
            fprintf(archivo,"Espacios: %d\n\n",e);

        }
        fclose(archivo);
    }
    else{
        printf("Error en la apertura :c");
    }
    return 0;
}
