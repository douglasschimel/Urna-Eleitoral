#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//vereadores
int moraes=0, jose=0, jr=0, antonia=0, nulos=0;
//prefeitos
int genesio=0, carlos=0, coutinho=0, renata=0, nulos1=0;


void contabiliza_votos_prefeito(int voto){
     int pos1;
     switch(voto){
         case 17: carlos++;
                  pos1=0;
    
              break;
         case 46: renata++;
                  pos1=1;
                
              break;
         case 48: genesio++;
                  pos1=2;
            
              break;
         case 58: coutinho++;
                  pos1=3;
                  
              break;
         case 100: nulos1++;
                   pos1=4;
                
              break;                  
     }     
}


int menu_votacao_prefeito(){
    int voto; 
    printf("Candidatos prefeito 2020\n");                  
    printf("====== == ===== ====\n");
    printf("48 - genesio - PSD\n");
    printf("58 - coutinho. - PSDC\n");
    printf("46 - renata - PDT\n");
    printf("17 - carlos - PRN\n");
    printf("100 - Nulo\n");
    printf("-1 - Sair\n");
    printf("Voto: ");
    scanf("%d", &voto);
    if(voto == -1) return 0;
    
    
    contabiliza_votos_prefeito(voto);
    
    system("cls");
}

void contabiliza_votos_vereador(int voto){
     int pos;
     switch(voto){
         case 13: jose++;
                  pos=0;
    
              break;
         case 43: antonia++;
                  pos=1;
                
              break;
         case 45: moraes++;
                  pos=2;
            
              break;
         case 50: jr++;
                  pos=3;
                  
              break;
         case 100: nulos++;
                   pos=4;
                
              break;                  
     }

	system("cls");
	
	menu_votacao_prefeito();     
}

int menu_votacao_vereador(){
    int voto; 
    printf("Candidatos a Vereador 2020\n");                  
    printf("====== == ===== ====\n");
    printf("45 - Moraes - PSD\n");
    printf("50 - Jr. - PSDC\n");
    printf("43 - Antonia - PDT\n");
    printf("13 - Jose - PRN\n");
    printf("1 - Sair\n");
    printf("Voto: ");
    scanf("%d", &voto);
    
	if(voto == 1){	
		system("cls");
		return 0;	
	}     
	
	if(voto > 1) {
		contabiliza_votos_vereador(voto);	
		return voto;	
	}
    
	
}


void resultado_votos_prefeito(){
     int total1;
     int validos1;
     printf("Resultado eleicoes prefeitos 2020\n");     
     printf("========= ======== ====\n");
     validos1 = genesio+carlos+coutinho+renata;
     total1 = validos1+nulos1;
      
     
     
     if(validos1 > 0){
         if((genesio > carlos) && (genesio > renata) && (genesio > coutinho)){
                   if(genesio>(validos1/2)) printf("\n\tGenesio foi eleito prefeito!!!\n\n");
                   else printf("\n\tGenesio venceu e havera segundo turno!!!\n\n");
         }else{
             if((carlos > genesio) && (carlos > renata) && (carlos > coutinho)){
                   if(carlos>(validos1/2)) printf("\n\tCarlos foi eleito prefeito!!!\n\n");
                   else printf("\n\tCarlos venceu e havera segundo turno!!!\n\n");
             }else{
                   if((renata > genesio) && (renata > carlos) && (renata > coutinho)){
                       if(renata>(validos1/2)) printf("\n\tRenata foi eleita prefeita!!!\n\n");
                       else printf("\n\tRenata venceu e havera segundo turno!!!\n\n");
                   }else{
                       if((coutinho > genesio) && (coutinho > carlos) && (coutinho > renata)){
                           if(coutinho>(validos1/2)) printf("\n\tCoutinho foi eleito vereador!!!\n\n");
                           else printf("\n\tCoutinho venceu e havera segundo turno!!!\n\n");
                       }else{
                           printf("EMPATE!!!");
                       }
                   } 
             }     
         }
     }
     
     
     printf("Total de votos: %d\n", total1);
     printf("Votos validos: %d\n", validos1);
     printf("Votos nao validos: %d\n", nulos1);     
     
     
     system("PAUSE");
     system("cls");
     if(validos1 > 0){
         printf("Genesio\n");     
         printf("=====\n");
         printf("Total de votos: %d (%.2f)\n", genesio, (float) (100/validos1)*genesio);
         
         
         system("PAUSE");
         system("cls");
         
         printf("Carlos\n");     
         printf("=====\n");
         printf("Total de votos: %d (%.2f)\n", carlos, (float) (100/validos1)*carlos);
         
         
         
         system("PAUSE");
         system("cls");
         
         printf("Renata\n");     
         printf("======\n");
         printf("Total de votos: %d (%.2f)\n", renata, (float) (100/validos1)*renata);

         
         
         
         system("PAUSE");
         system("cls");
         
         printf("Coutinho\n");     
         printf("======\n");
         printf("Total de votos: %d (%.2f)\n", coutinho, (float) (100/validos1)*coutinho);
        
         
         
     }
}

void *resultado_votos_vereador(){
     int total;
     int validos;
     printf("Resultado eleicoes vereadores 2020\n");     
     printf("========= ======== ====\n");
     validos = moraes+jose+jr+antonia;
     total = validos+nulos;
            
     if(validos > 0){
         if((moraes > jose) && (moraes > antonia) && (moraes > jr)){
                   if(moraes>(validos/2)) printf("\n\tMoraes foi eleito vereador!!!\n\n");
                   else printf("\n\tMoraes venceu e havera segundo turno!!!\n\n");
         }else{
             if((jose > moraes) && (jose > antonia) && (jose > jr)){
                   if(jose>(validos/2)) printf("\n\tJose foi eleito vereador!!!\n\n");
                   else printf("\n\tJose venceu e havera segundo turno!!!\n\n");
             }else{
                   if((antonia > moraes) && (antonia > jose) && (antonia > jr)){
                       if(antonia>(validos/2)) printf("\n\tAntonia foi eleita vereadora!!!\n\n");
                       else printf("\n\tAntonia venceu e havera segundo turno!!!\n\n");
                   }else{
                       if((jr > moraes) && (jr > jose) && (jr > antonia)){
                           if(jr>(validos/2)) printf("\n\tJr foi eleito vereador!!!\n\n");
                           else printf("\n\tJr venceu e havera segundo turno!!!\n\n");
                       }else{
                           printf("EMPATE!!!");
                       }
                   } 
             }     
         }
     }
     
     
     printf("Total de votos: %d\n", total);
     printf("Votos validos: %d\n", validos);
     printf("Votos nao validos: %d\n", nulos);     
     
     
     system("PAUSE");
     system("cls");
     if(validos > 0){
         printf("Moraes\n");     
         printf("=====\n");
         printf("Total de votos: %d (%.2f)\n", moraes, (float) (100/validos)*moraes);
         
         
         system("PAUSE");
         system("cls");
         
         printf("Jose\n");     
         printf("=====\n");
         printf("Total de votos: %d (%.2f)\n", jose, (float) (100/validos)*jose);
                
         
         system("PAUSE");
         system("cls");
         
         printf("Antonia\n");     
         printf("======\n");
         printf("Total de votos: %d (%.2f)\n", antonia, (float) (100/validos)*antonia);
     
         
         system("PAUSE");
         system("cls");
         
         printf("jr\n");     
         printf("======\n");
         printf("Total de votos: %d (%.2f)\n", jr, (float) (100/validos)*jr);        
         system("PAUSE");
        system("cls");
     }
     
}

char cpf;

void inicia_votacao(){
	
	
	
	int voto = menu_votacao_vereador();
	if(voto > 1) { 
		inicia_votacao();
	}
	else{
		resultado_votos_vereador();
    	resultado_votos_prefeito();
	}
}

int verifica_cpf(){ 
    printf("insira seu cpf\n");                  
    printf("====== == ===== ====\n");
    scanf("%d", &cpf);
    system("PAUSE");
        system("cls");
     
     	inicia_votacao();
	 
	
	
    
}

main(){
	
    int sair=1;
	verifica_cpf();   
    //inicia_votacao();
 
    
    /* criando arquivo */
    
    int voto;
    FILE *resultado_votos_vereador;
	resultado_votos_vereador = fopen ("vereadores.txt", "w");
	
	if(resultado_votos_vereador = NULL)
	{
		printf("erro na ao abrir arquivo!");
		return 1;
	}
	
	
	fprintf(resultado_votos_vereador, "%s");
	fclose(resultado_votos_vereador);
	
	
	FILE *resultado_votos_prefeito;
	resultado_votos_prefeito = fopen ("prefeito.txt", "w");
	
	if(resultado_votos_prefeito = NULL)
	{
		printf("erro na ao abrir arquivo!");
		return 1;
	}
	
	fprintf(resultado_votos_prefeito, "%s");
	fclose(resultado_votos_prefeito);
	
    
    
    system("PAUSE");
           
}	



	

