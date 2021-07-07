#include <stdio.h>

 void busca_todos( int *v, int n, int chave, int *indices ){
    
    int i,j;
    i = 0;
    j = 0;
    while(j<n){
            if(v[j]==chave){
                indices[i] = j;
                i++;
                j++;
            }else{
                j++;
            }
        }
    for(i;i<n;i++){
        indices[i] = -1;
    }
    
    printf("indice = {");
    
    for(i = 0;i<n;i++){
        printf("%d, ",indices[i]);
    
    }
    
    printf("}");
    
}

void main()
{
    int n,chave,x;
    
    printf("quantos elementos o vetor deve ter?");
    scanf("%d",&n);
    
    int v[n],indices[n];
    
    for(int i = 0;i<n;i++){
        printf("que elemento deseja adicionar ao vetor?");
        scanf("%d",&x);
        v[i] = x;
    }
    
    printf("Qual numero deve ser procurado dentro do vetor");
    scanf("%d",&chave);
    
    busca_todos(v,n,chave,indices);
    
    system("pause");
}


