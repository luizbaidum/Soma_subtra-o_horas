#include <stdio.h>
#include <stdlib.h>

int main (){
	int cont, cont1, reiniciar;
	int horas, minutos;
	float t_horas, hora_final;
	int t_total;
				
	printf("|| Calculadora de horas GAF II v.1.0 ||\n");
	printf("||       Criado por Luiz Baidum      ||\n");
	printf("\nATENCAO >> Para subtracao, inserir sinal de menos (-) antes das horas e antes dos minutos.\n");
	
	do {
		
	t_horas = 0;
	t_total = 0;
	hora_final = 0;
		
	printf("\nInsira a quantidade de linhas da conta: ");
	scanf("%d", &cont1);
		
	for (cont=1;cont<=cont1; cont++) { 
	
	printf("\nInsira a hora e seus minutos (como exemplo: H MM): ");
	scanf("%d %d", &horas, &minutos);
	
	horas = horas * 60;
	
	t_horas=horas+minutos+t_horas;
	}
	
	if (t_horas > 0) {
		while (t_horas > 59) {
			hora_final = hora_final + 1;
			t_horas = t_horas - 60;
		}
	} else if (t_horas < 0) {
		while (t_horas < -59) {
			hora_final = hora_final - 1;
			t_horas = t_horas + 60;
	} } else {
		printf("\nZERO\n");
	}
	
	minutos = t_horas;
	
	printf("\nRESULTADO da CONTA:");
	printf("\nHora(s) = %.0f", hora_final);
	printf("\nMinuto(s) = %d\n", minutos);
	printf("\n");
		
	system("pause");
	
	printf("\nDeseja reiniciar o programa? Digite 1 e pressione enter para reiniciar.\n");
	scanf("\n%d", &reiniciar);
	
	} while (reiniciar == 1);
	
return 0;	
}
