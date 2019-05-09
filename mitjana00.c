//Autor: dc1819daw2
//Data i hora: 201811261428

#include <stdio.h>

int main() {
	int i=0;
	float suma=0.0;
	float mitjana=0.0;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s'; 

	printf("CÃ€LCUL DE LA MITJANA DE N VALORS\n");
<<<<<<< HEAD
        printf("Operacio? finalitzada amb èxitt\n");
=======
        printf("La mitjana ha estat trobada amb èxixt\n"); 
>>>>>>> 1d1f7899e277bcc706352628348c2036e7a86718
	while(consulta=='s') {
		i++;
		printf("DÃ²na la dada %i: ",i);
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (s/n): ");
		scanf(" %c",&consulta); 
	}
	mitjana=suma/numero_repeticions;
	printf("La mitjana resultant Ã©s: %.2f\n",mitjana);	
	return 0;
}
