/*
	Name: Luan Lopes
	Copyright: 
	Author: Luan Lopes
	Date: 30/09/22 
	Description: Elaboração de um algoritimo de eleição com os seguintes candidatos e numeros:
	 Ciro Gomes - 12; 
	 Felipe Davila - 30; 
	 Jair Bolsonaro - 22; 
	 Lula - 13; 
	 Simone Tebet - 15;
	 Soraya Thronicke - 44;
	 nulo - 1; 
	 branco - 2;
	 encerrar - 0.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int voto, votoCiro_Gomes = 0, votoFelipe_Davila = 0, votoJair_Bolsonaro = 0, votoLula = 0, votoSimone_Tebet = 0, votoSoraya_Thronicke = 0, votoNulo = 0, votoBranco = 0, contador = 1;
	
	
	while(voto != 0){
		system("cls");
		
		printf("***ELEICOES PARA PRESIDENTE DA REPÚBLICA***\n");
		printf("VOTO DE NUMERO %d\n",contador);
		
		printf("Digite [12] para Ciro Gomes\n");
		printf("Digite [30] para Felipe Davila\n");
		printf("Digite [22] para Jair Bolsonaro\n");
		printf("Digite [13] para Lula\n");
		printf("Digite [15] para Simone Tebet\n");
		printf("Digite [44] para Soraya Thronicke\n");
		printf("Digite [1] para Nulo\n");
		printf("Digite [2] para Branco\n");
		printf("Digite [0] para ENCERRAR A VOTACAO\n\n");
		
		
		printf("Digite o numero do seu candidato a presidente da Republica: ");
		scanf("%d",&voto);
		contador++	;
		
		switch(voto){
			case 12:
				votoCiro_Gomes++;
				break;
				case 30:
					votoFelipe_Davila++;
					break;
					case 22:
						votoJair_Bolsonaro++;
						break;
						case 13:
							votoLula++;
							break;
							case 15:
								votoSimone_Tebet++;
								break;
								case 44:
									votoSoraya_Thronicke++;
									break;
									case 1:
										votoNulo++;
										break;
										case 2:
											votoBranco++;
											break;
		}	
	}
	
	printf("***RESULTADO DOS VOTOS DA ELEICOES PARA PRESIDENTE DA REPÚBLICA***\n");
	printf("O candidato Ciro Gomes obteve %d votos\n",votoCiro_Gomes);
	printf("O candidato Felipe Davila obteve %d votos\n",votoFelipe_Davila);
	printf("O candidato Jair Bolsonaro obteve %d votos\n",votoJair_Bolsonaro);
	printf("O candidato Lula obteve %d votos\n",votoLula);
	printf("O candidato Simone Tebet obteve %d votos\n",votoSimone_Tebet);
	printf("A candidata Soraya Thronick obteve %d votos\n",votoSoraya_Thronicke);
	printf("Votos nulos %d\n",votoNulo);
	printf("Votos Brancos %d\n",votoBranco);
	
	
	
	printf("***RESULTADO DAS ELEICOES PARA PRESIDENTE DA REPÚBLICA***\n");
	
	if((votoCiro_Gomes > votoFelipe_Davila)
		 && (votoCiro_Gomes > votoJair_Bolsonaro)
		 	&&(votoCiro_Gomes > votoLula)
		 		&&(votoCiro_Gomes > votoSimone_Tebet)
		 			&&(votoCiro_Gomes > votoSoraya_Thronicke)){
		 				
		 				printf("Ciro Gomes eh o novo Presidente da Republica!!!!");
					}
					else if((votoFelipe_Davila > votoCiro_Gomes)
						 && (votoFelipe_Davila > votoJair_Bolsonaro)
						 	&&(votoFelipe_Davila > votoLula)
						 		&&(votoFelipe_Davila > votoSimone_Tebet)
						 			&&(votoFelipe_Davila > votoSoraya_Thronicke)){
						 				
						 				printf("Felipe Davila eh o novo Presidente da Republica!!!!");
									} 
									else if((votoJair_Bolsonaro > votoCiro_Gomes)
										 && (votoJair_Bolsonaro > votoFelipe_Davila)
										 	&&(votoJair_Bolsonaro > votoLula)
										 		&&(votoJair_Bolsonaro > votoSimone_Tebet)
										 			&&(votoJair_Bolsonaro > votoSoraya_Thronicke)){
										 				
										 				printf("Jair Bolsonaro é reeleito pra Presidente da Republica!!!!");
													}
													else if((votoLula > votoCiro_Gomes)
														 && (votoLula > votoFelipe_Davila)
														 	&&(votoLula > votoJair_Bolsonaro)
														 		&&(votoLula > votoSimone_Tebet)
														 			&&(votoLula > votoSoraya_Thronicke)){
														 				
														 				printf("Lula volta para a Presidencia da Republica!!!!");
																	}
																	else if((votoSimone_Tebet > votoCiro_Gomes)
																		 && (votoSimone_Tebet > votoFelipe_Davila)
																		 	&&(votoSimone_Tebet > votoJair_Bolsonaro)
																		 		&&(votoSimone_Tebet > votoLula)
																		 			&&(votoSimone_Tebet > votoSoraya_Thronicke)){
																		 				
																		 				printf("Simone Tebet eh o novo Presidente da Republica!!!!");
																					}
																					else if((votoSoraya_Thronicke > votoCiro_Gomes)
																						 && (votoSoraya_Thronicke > votoFelipe_Davila)
																						 	&&(votoSoraya_Thronicke > votoJair_Bolsonaro)
																						 		&&(votoSoraya_Thronicke > votoLula)
																						 			&&(votoSoraya_Thronicke > votoSimone_Tebet)){
																						 				
																						 				printf("Soraya Thronicke eh o novo Presidente da Republica!!!!");
																									}
}

