#include <stdio.h>
#include <stdlib.h>
void elimina(int n,int v[]){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i]==v[j]){
                for(k=j+1;k<n;k++){
                    v[k-1]=v[k];
                    n--;
                }
            }
        }
    }
    printf("Vetor sem repeticoes");
    for(i=0;i<n;i++){
        printf("\t%d",v[i]);
    }
}
int main()
{
    int n,i=0;
    printf("Digite o numero de valores\n");
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Digite o valor %d ",(i+1));
        scanf("%d",&v[i]);
    }
    elimina(n,v);
    return 0;
}
