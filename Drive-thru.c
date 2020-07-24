#include <stdio.h>
#include <stdlib.h>

int main(){
	char resp,order[6];
	int codR,qtdR;
	float xbur=10,xegg=12,xbac=12.50,xmou=15,fries=7,soda=5,orderV[7],final;
	
	printf("Welcome to the Big Mouse\nMenu:\n");
	printf("Product          Value        Code\n");
	printf("X-burguer %12.2f........01\n",xbur);
	printf("X-egg     %12.2f........02\n",xegg);
	printf("X-bacon   %12.2f........03\n",xbac);
	printf("X-mouse   %12.2f........04\n",xmou);
	printf("Fries     %12.2f........05\n",fries);
	printf("Soda      %12.2f........06\n",soda);
	
	do{
		printf("Type the code of the product: ");
		scanf("%i",&codR);
		while(codR<01||codR>06){
			printf("Wrong value!\n");
        	printf("Type the code of the product: ");
		    scanf("%i",&codR);
		}
		printf("Type the amount: ");
		scanf("%i",&qtdR);
		
		if(codR == 01){
			orderV[0]= orderV[0] + (xbur*qtdR);
			order[0] = 'S';
			final += xbur*qtdR;
		}else if(codR == 02){
			orderV[1]= orderV[1] + (xegg*qtdR);
			order[1] = 'S';
			final += xegg*qtdR;
		}else if(codR == 03){
			orderV[2]= orderV[2] + (xbac*qtdR);
			order[2] = 'S';
			final += xbac*qtdR;
		}else if(codR == 04){
			orderV[3]= orderV[3] + (xmou*qtdR);
			order[3] = 'S';
			final += xmou*qtdR;
		}else if(codR == 05){
			orderV[4]+= fries*qtdR;
			order[4] = 'S';
			final += fries*qtdR;
		} else if(codR == 06){
			orderV[5]+= soda*qtdR;
			order[5] = 'S';
			final += soda*qtdR;
        } 
        printf("Continue?(S/N)");
        scanf("%s",&resp);
	}while(resp == 'S');
	
	printf("\n-------Your order-------\nProduct          Value\n");
	
	if(order[0] == 'S'){
		printf("X-burguer %12.2f\n",orderV[0]);
	}
	if(order[1] == 'S'){
		printf("X-egg     %12.2f\n",orderV[1]);
	}
	if(order[2] == 'S'){
		printf("X-bacon   %12.2f\n",orderV[2]);
	}
	if(order[3] == 'S'){
		printf("X-mouse   %12.2f\n",orderV[3]);
	}
	if(order[4] == 'S'){
		printf("Fries     %12.2f\n",orderV[4]);
	}
	if(order[5] == 'S'){
		printf("Soda      %12.2f\n",orderV[5]);
	}
	
	printf("\nTotal value: US$ %.2f",final);
}
