#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>

//VARIAVEIS MAIS USADAS
float numero_geral_medalhas[93];
float numero_medalhas_ouro[93];	
float numero_medalhas_prata[93];
float numero_medalhas_bronze[93];
int i,j;
int escolha;
int equipes;
int total=93;
int continuar;


//APRESENTAÇÃO DO PROJETO

void escrevertitulo(){
	setlocale(LC_ALL,"Portuguese");


printf("Olá!! Seja Bem-vindo!"); 
printf("\n\n**************************************************************");
printf("\n\nEste programa tem como objetivo: Analisar e Ordenar o desempenho");
printf("\ndas equipes participantes dos JOGOS OLIMPICOS DE TOQUIO 2020");
printf("\n\n**************************************************************");

//Paises participantes das olimpiadas
 printf("\n\nPAISES MEDALHISTA NAS OLIMPIADAS DE TOQUIO");
printf("\n\n[1]EUA         [2]CHINA          [3]JAPÃO          [4]GR -BRETANHA   [5]ATLESTAS DA RUS [6]AUSTRÁLIA      [7]HOLANDA");
printf("\n[8]FRANÇA      [9]ALEMANHA       [10]ITÁLIA        [11]CANADÁ        [12]BRASIL         [13]NOVA ZEL NDIA [14]CUBA");
printf("\n[15]HUNGRIA    [16]COREIA DO SUL [17]POLÔNIA       [18]REP TCHECA    [19]QUÊNIA         [20]NORUEGA       [21]JAMAICA");
printf("\n[22]ESPANHA    [23]SUÉCIA        [24]SUÍÇA         [25]DINAMARCA     [26]CROÁCIA        [27]IR            [28]SÉRVIA");
printf("\n[29]BÉLGICA    [30]BULGÁRIA      [31]ESLOVÊNIA     [32]UZBEQUISTÃO   [33]GEÓRGIA        [34]TAIWAN        [35]TURQUIA");
printf("\n[36]GRÉCIA     [37]UGANDA        [38]EQUADOR       [39]IRLANDA       [40]ISRAEL         [41]CATAR         [42]BAHAMAS");
printf("\n[43]KOSOVO     [44]UCR NIA       [45]BELARUS       [46]ROMÊNIA       [47]VENEZUELA      [48]ÍNDIA         [49]HONG KONG");
printf("\n[50]ESLOVÁQUIA [51]FILIPINAS     [52]ÁFRICA DO SUL [53]ÁUSTRIA       [54]EGITO          [55]INDONÉSIA     [56]ETIÓPIA");
printf("\n[57]PORTUGAL   [58]TUNÍSIA       [59]ESTÔNIA       [60]FIJI          [61]LETÔNIA        [62]TAIL NDIA     [63]BERMUDAS");
printf("\n[64]MARROCOS   [65]PORTO RICO    [66]COLÔMBIA 	   [67]AZERBAIJÃO    [68]REP DOMINICANA [69]ARMÊNIA       [70]QUIRGUISTÃO");
printf("\n[71]MONGÓLIA   [72]ARGENTINA     [73]SAN MARINO    [74]JORDÂNIA      [75]MALÁSIA        [76]NIGÉRIA       [77]ARÁBIA SAUDITA");
printf("\n[78]BAHREIN    [79]LITUÂNIA      [80]MACEDÔNIA DO N[81]NAMÍBIA       [82]TURCOMENISTÃO  [83]CAZAQUISTÃO   [84]MÉXICO");
printf("\n[85]FINLÂNDIA  [86]BOTSUANA      [87]BURKINA FASO  [88]C DO MARFIM   [89]GANA           [90]GRANADA       [91]KUWAIT");
printf("\n[92]MOLDÁVIA   [93]SÍRIA");
printf("\n\n**************************************************************\n\n");

system("PAUSE");

}

//MENU DE ESCOLHAS 

void escrevermenu(){
	
	
	
printf("\n\n**************************************************************");
printf("\n\nEscolha uma das opções abaixo");
printf("\n\n+-------------------------------------------------------------------------------------------+");
printf("\n|1)DETERMINAR A QUANTIDADE DE MEDALHAS DE CADA EQUIPE                                       |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|2)DETERMINAR A MÉDIA DO QUADRO GERAL DE MEDALHAS DAS 93 EQUIPES                            |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|3)DETERMINAR A MÉDIA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS DAS 93 EQUIPES                |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|4)DETERMINAR A MEDIANA DO QUADRO GERAL DE MEDALHAS DAS 93 EQUIPES                          |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|5)DETERMINAR A MEDIANA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS DAS 93 EQUIPES              |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|6)DETERMINAR A VARI NCIA DO QUADRO GERAL DE MEDALHAS DAS 93 EQUIPES                        |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|7)DETERMINAR A VARI NCIA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS DAS 93 EQUIPES            |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|8)DETERMINAR A DISTRIBUIÇÃO DE FREQUENCIA DO QUADRO GERAL DE MEDALHAS DAS 93 EQUIPES       |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|9)DETERMINAR A DISTRIBUIÇAO DE FREQUENCIA DO QUADRO DAS TRÊS MEDALHAS DAS 93 EQUIPES       |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|10)DETERMINAR MAIOR VALOR E MENOR VELOR DO QUADRO GERAL DE MEDALHAS DAS 93 EQUIPES         |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|11)DETERMINAR MAIOR VALOR E MENOR VELOR DO QUADRO DAS TRÊS MEDALHAS DAS 93 EQUIPES         |");
printf("\n+-------------------------------------------------------------------------------------------+");
printf("\n|0)ENCERRAR O PROGRAMA.                                                                     |");
printf("\n+-------------------------------------------------------------------------------------------+\n\n");

}

//OPÇÃO 1: QUANTIDADE DE MEDALHAS CADA TIME

void quantidadedemedalhas(){
	
int equipes;

float numero_geral_medalhas [93]={113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

float numero_medalhas_ouro [93]= {39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 
float numero_medalhas_prata [93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze [93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};

 printf("\n\nPAISES MEDALHISTA NAS OLIMPIADAS DE TOQUIO");
printf("\n\n[1]EUA         [2]CHINA          [3]JAPÃO          [4]GR -BRETANHA   [5]ATLESTAS DA RUS [6]AUSTRÁLIA      [7]HOLANDA");
printf("\n[8]FRANÇA      [9]ALEMANHA       [10]ITÁLIA        [11]CANADÁ        [12]BRASIL         [13]NOVA ZEL NDIA [14]CUBA");
printf("\n[15]HUNGRIA    [16]COREIA DO SUL [17]POLÔNIA       [18]REP TCHECA    [19]QUÊNIA         [20]NORUEGA       [21]JAMAICA");
printf("\n[22]ESPANHA    [23]SUÉCIA        [24]SUÍÇA         [25]DINAMARCA     [26]CROÁCIA        [27]IR            [28]SÉRVIA");
printf("\n[29]BÉLGICA    [30]BULGÁRIA      [31]ESLOVÊNIA     [32]UZBEQUISTÃO   [33]GEÓRGIA        [34]TAIWAN        [35]TURQUIA");
printf("\n[36]GRÉCIA     [37]UGANDA        [38]EQUADOR       [39]IRLANDA       [40]ISRAEL         [41]CATAR         [42]BAHAMAS");
printf("\n[43]KOSOVO     [44]UCR NIA       [45]BELARUS       [46]ROMÊNIA       [47]VENEZUELA      [48]ÍNDIA         [49]HONG KONG");
printf("\n[50]ESLOVÁQUIA [51]FILIPINAS     [52]ÁFRICA DO SUL [53]ÁUSTRIA       [54]EGITO          [55]INDONÉSIA     [56]ETIÓPIA");
printf("\n[57]PORTUGAL   [58]TUNÍSIA       [59]ESTÔNIA       [60]FIJI          [61]LETÔNIA        [62]TAIL NDIA     [63]BERMUDAS");
printf("\n[64]MARROCOS   [65]PORTO RICO    [66]COLÔMBIA 	   [67]AZERBAIJÃO    [68]REP DOMINICANA [69]ARMÊNIA       [70]QUIRGUISTÃO");
printf("\n[71]MONGÓLIA   [72]ARGENTINA     [73]SAN MARINO    [74]JORDÂNIA      [75]MALÁSIA        [76]NIGÉRIA       [77]ARÁBIA SAUDITA");
printf("\n[78]BAHREIN    [79]LITUÂNIA      [80]MACEDÔNIA DO N[81]NAMÍBIA       [82]TURCOMENISTÃO  [83]CAZAQUISTÃO   [84]MÉXICO");
printf("\n[85]FINLÂNDIA  [86]BOTSUANA      [87]BURKINA FASO  [88]C DO MARFIM   [89]GANA           [90]GRANADA       [91]KUWAIT");
printf("\n[92]MOLDÁVIA   [93]SÍRIA");
printf("\n\n**************************************************************\n\n");
printf("\nDigite o número da equipe: ");
scanf("%d",&equipes);

	switch(equipes){	
	case 1:
	printf("\nA equipe EUA obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[0],numero_medalhas_ouro[0],numero_medalhas_prata[0],numero_medalhas_bronze[0]);	
}
	switch(equipes){
	case 2:
	printf("\nA equipe China obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[1],numero_medalhas_ouro[1],numero_medalhas_prata[1],numero_medalhas_bronze[1]);
}
	switch(equipes){
	case 3:
	printf("\nA equipe Japão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[2],numero_medalhas_ouro[2],numero_medalhas_prata[2],numero_medalhas_bronze[2]);
}
	switch(equipes){
	case 4:
	printf("\nA equipe Grã-Bretanha obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[3],numero_medalhas_ouro[3],numero_medalhas_prata[3],numero_medalhas_bronze[4]);;
}
	switch(equipes){
	case 5:
	printf("\nA equipe Atletas da Rússia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[4],numero_medalhas_ouro[4],numero_medalhas_prata[4],numero_medalhas_bronze[4]);
}
	switch(equipes){
	case 6:
	printf("\nA equipe Austrália obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[5],numero_medalhas_ouro[5],numero_medalhas_prata[5],numero_medalhas_bronze[5]);
}
	switch(equipes){
	case 7:
	printf("\nA equipe Holanda obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[6],numero_medalhas_ouro[6],numero_medalhas_prata[6],numero_medalhas_bronze[6]);
}
	switch(equipes){
	case 8:
	printf("\nA equipe França obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[7],numero_medalhas_ouro[7],numero_medalhas_prata[7],numero_medalhas_bronze[7]);
}
	switch(equipes){
	case 9:
	printf("\nA equipe Alemanha obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[8],numero_medalhas_ouro[8],numero_medalhas_prata[8],numero_medalhas_bronze[8]);
}
	switch(equipes){
	case 10:
	printf("\nA equipe Itália obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[9],numero_medalhas_ouro[9],numero_medalhas_prata[9],numero_medalhas_bronze[9]);
}
	switch(equipes){
	case 11:
	printf("\nA equipe Canadá obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[010],numero_medalhas_ouro[010],numero_medalhas_prata[010],numero_medalhas_bronze[10]);
}
	switch(equipes){
	case 12:
	printf("\nA equipe Brasil obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[11],numero_medalhas_ouro[011],numero_medalhas_prata[011],numero_medalhas_bronze[11]);
}
	switch(equipes){
	case 13:
	printf("\nA equipe Nova Zelândia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[12],numero_medalhas_ouro[12],numero_medalhas_prata[012],numero_medalhas_bronze[012]);
}
	switch(equipes){
	case 14:
	printf("\nA equipe Cuba obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[13],numero_medalhas_ouro[013],numero_medalhas_prata[013],numero_medalhas_bronze[013]);
}
	switch(equipes){
	case 15:
	printf("\nA equipe Hungria obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[014],numero_medalhas_ouro[014],numero_medalhas_prata[014],numero_medalhas_bronze[014]);
}
	switch(equipes){
	case 16:
	printf("\nA equipe Coreia do Sul obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[015],numero_medalhas_ouro[015],numero_medalhas_prata[015],numero_medalhas_bronze[015]);
}
	switch(equipes){
	case 17:
	printf("\nA equipe Polônia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[016],numero_medalhas_ouro[016],numero_medalhas_prata[016],numero_medalhas_bronze[016]);
}
	switch(equipes){
	case 18:
	printf("\nA equipe República Tcheca obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[17],numero_medalhas_ouro[17],numero_medalhas_prata[17],numero_medalhas_bronze[17]);
}
	switch(equipes){
	case 19:
	printf("\nA equipe Quênia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[18],numero_medalhas_ouro[18],numero_medalhas_prata[18],numero_medalhas_bronze[18]);
}
	switch(equipes){
	case 20:
	printf("\nA equipe Noruega obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[19],numero_medalhas_ouro[19],numero_medalhas_prata[19],numero_medalhas_bronze[19]);
}
	switch(equipes){
	case 21:
	printf("\nA equipe Jamaica obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[020],numero_medalhas_ouro[020],numero_medalhas_prata[020],numero_medalhas_bronze[020]);
}
	switch(equipes){
	case 22:
	printf("\nA equipe Espanha obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[021],numero_medalhas_ouro[021],numero_medalhas_prata[021],numero_medalhas_bronze[021]);
}
	switch(equipes){
	case 23:
	printf("\nA equipe Suécia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[022],numero_medalhas_ouro[022],numero_medalhas_prata[022],numero_medalhas_bronze[022]);
}
	switch(equipes){
	case 24:
	printf("\nA equipe Suíça obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[023],numero_medalhas_ouro[023],numero_medalhas_prata[023],numero_medalhas_bronze[023]);
}
	switch(equipes){
	case 25:
	printf("\nA equipe Dinamarca obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[024],numero_medalhas_ouro[024],numero_medalhas_prata[024],numero_medalhas_bronze[024]);
}
	switch(equipes){
	case 26:
	printf("\nA equipe Croácia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[025],numero_medalhas_ouro[025],numero_medalhas_prata[025],numero_medalhas_bronze[025]);
}
	switch(equipes){
	case 27:
	printf("\nA equipe Irã obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[26],numero_medalhas_ouro[26],numero_medalhas_prata[26],numero_medalhas_bronze[26]);
}
	switch(equipes){
	case 28:
	printf("\nA equipe Sérvia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[27],numero_medalhas_ouro[27],numero_medalhas_prata[27],numero_medalhas_bronze[27]);
}
	switch(equipes){
	case 29:
	printf("\nA equipe Bélgica obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[28],numero_medalhas_ouro[28],numero_medalhas_prata[28],numero_medalhas_bronze[28]);
}
	switch(equipes){
	case 30:
	printf("\nA equipe Bulgária obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[29],numero_medalhas_ouro[29],numero_medalhas_prata[29],numero_medalhas_bronze[29]);
}
	switch(equipes){
	case 31:
	printf("\nA equipe Eslovênia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[030],numero_medalhas_ouro[030],numero_medalhas_prata[030],numero_medalhas_bronze[030]);
}
	switch(equipes){
	case 32:
	printf("\nA equipe Uzbequistão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[031],numero_medalhas_ouro[031],numero_medalhas_prata[031],numero_medalhas_bronze[031]);
}
	switch(equipes){
	case 33:
	printf("\nA equipe Geórgia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[032],numero_medalhas_ouro[032],numero_medalhas_prata[032],numero_medalhas_bronze[032]);
}
	switch(equipes){
	case 34:
	printf("\nA equipe Taiwan obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[033],numero_medalhas_ouro[033],numero_medalhas_prata[033],numero_medalhas_bronze[033]);
}
	switch(equipes){
	case 35:
	printf("\nA equipe Turquia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[034],numero_medalhas_ouro[034],numero_medalhas_prata[034],numero_medalhas_bronze[034]);
}
	switch(equipes){
	case 36:
	printf("\nA equipe Grécia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[035],numero_medalhas_ouro[035],numero_medalhas_prata[035],numero_medalhas_bronze[035]);
}
	switch(equipes){
	case 37:
	printf("\nA equipe Uganda obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[36],numero_medalhas_ouro[36],numero_medalhas_prata[36],numero_medalhas_bronze[36]);
}
	switch(equipes){
	case 38:
	printf("\nA equipe Equador obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[37],numero_medalhas_ouro[37],numero_medalhas_prata[37],numero_medalhas_bronze[37]);
}
	switch(equipes){
	case 39:
	printf("\nA equipe Irlanda obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[38],numero_medalhas_ouro[38],numero_medalhas_prata[38],numero_medalhas_bronze[38]);
}
	switch(equipes){
	case 40:
	printf("\nA equipe Israel obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[39],numero_medalhas_ouro[39],numero_medalhas_prata[39],numero_medalhas_bronze[39]);
} 
	switch(equipes){
	case 41:
	printf("\nA equipe Catar obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[040],numero_medalhas_ouro[040],numero_medalhas_prata[040],numero_medalhas_bronze[040]);
}
	switch(equipes){
	case 42:
	printf("\nA equipe Bahamas obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[041],numero_medalhas_ouro[041],numero_medalhas_prata[041],numero_medalhas_bronze[041]);
}
	switch(equipes){
	case 43:
	printf("\nA equipe Kosovo obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[042],numero_medalhas_ouro[042],numero_medalhas_prata[042],numero_medalhas_bronze[042]);
}
	switch(equipes){
	case 44:
	printf("\nA equipe Ucrânia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[043],numero_medalhas_ouro[043],numero_medalhas_prata[043],numero_medalhas_bronze[043]);
}
	switch(equipes){
	case 45:
	printf("\nA equipe Belarus obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[044],numero_medalhas_ouro[044],numero_medalhas_prata[044],numero_medalhas_bronze[044]);
}
	switch(equipes){
	case 46:
	printf("\nA equipe Romênia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[45],numero_medalhas_ouro[45],numero_medalhas_prata[45],numero_medalhas_bronze[45]);
}
	switch(equipes){
	case 47:
	printf("\nA equipe Venezuela obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[46],numero_medalhas_ouro[46],numero_medalhas_prata[46],numero_medalhas_bronze[46]);
}
	switch(equipes){
	case 48:
	printf("\nA equipe Índia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[47],numero_medalhas_ouro[47],numero_medalhas_prata[47],numero_medalhas_bronze[47]);
}
	switch(equipes){
	case 49:
	printf("\nA equipe Hong Kong obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[48],numero_medalhas_ouro[48],numero_medalhas_prata[48],numero_medalhas_bronze[48]);
}
	switch(equipes){
	case 50:
	printf("\nA equipe Eslováquia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[49],numero_medalhas_ouro[49],numero_medalhas_prata[49],numero_medalhas_bronze[49]);
}
	switch(equipes){
	case 51:
	printf("\nA equipe Filipinas obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[50],numero_medalhas_ouro[050],numero_medalhas_prata[050],numero_medalhas_bronze[050]);
	
}
	switch(equipes){
	case 52:
	printf("\nA equipe África do Sul obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[051],numero_medalhas_ouro[051],numero_medalhas_prata[051],numero_medalhas_bronze[051]);
}
	switch(equipes){
	case 53:
	printf("\nA equipe Áustria obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[052],numero_medalhas_ouro[052],numero_medalhas_prata[052],numero_medalhas_bronze[052]);
}
	switch(equipes){
	case 54:
	printf("\nA equipe Egito obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[053],numero_medalhas_ouro[053],numero_medalhas_prata[053],numero_medalhas_bronze[053]);
}
	switch(equipes){
	case 55:
	printf("\nA equipe Indonésia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[054],numero_medalhas_ouro[054],numero_medalhas_prata[054],numero_medalhas_bronze[054]);
}
	switch(equipes){
	case 56:
	printf("\nA equipe Etiópia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[55],numero_medalhas_ouro[55],numero_medalhas_prata[55],numero_medalhas_bronze[55]);
}
	switch(equipes){
	case 57:
	printf("\nA equipe Portugal obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[56],numero_medalhas_ouro[56],numero_medalhas_prata[56],numero_medalhas_bronze[56]);
}
	switch(equipes){
	case 58:
	printf("\nA equipe Tunísia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[57],numero_medalhas_ouro[57],numero_medalhas_prata[57],numero_medalhas_bronze[57]);
}
	switch(equipes){
	case 59:
	printf("\nA equipe Estônia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[58],numero_medalhas_ouro[58],numero_medalhas_prata[58],numero_medalhas_bronze[58]);
}
	switch(equipes){
	case 60:
	printf("\nA equipe Fiji obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[59],numero_medalhas_ouro[59],numero_medalhas_prata[59],numero_medalhas_bronze[59]);
}
	switch(equipes){
	case 61:
	printf("\nA equipe Letônia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[060],numero_medalhas_ouro[060],numero_medalhas_prata[060],numero_medalhas_bronze[060]);
}
	switch(equipes){
	case 62:
	printf("\nA equipe Tailândia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[061],numero_medalhas_ouro[061],numero_medalhas_prata[061],numero_medalhas_bronze[061]);
}
	switch(equipes){
	case 63:
	printf("\nA equipe Bermudas obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[062],numero_medalhas_ouro[062],numero_medalhas_prata[065],numero_medalhas_bronze[062]);
}
	switch(equipes){
	case 64:
	printf("\nA equipe Marrocos obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[063],numero_medalhas_ouro[063],numero_medalhas_prata[063],numero_medalhas_bronze[63]);
}
	switch(equipes){
	case 65:
	printf("\nA equipe Porto Rico obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[064],numero_medalhas_ouro[064],numero_medalhas_prata[064],numero_medalhas_bronze[064]);
}
	switch(equipes){
	case 66:
	printf("\nA equipe Colômbia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[65],numero_medalhas_ouro[65],numero_medalhas_prata[65],numero_medalhas_bronze[65]);
}
switch(equipes){
	case 67:
	printf("\nA equipe Azerbaijão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[66],numero_medalhas_ouro[66],numero_medalhas_prata[66],numero_medalhas_bronze[66]);
}
switch(equipes){
	case 68:
	printf("\nA equipe República Dominicana obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[67],numero_medalhas_ouro[67],numero_medalhas_prata[67],numero_medalhas_bronze[67]);
}
switch(equipes){
	case 69:
	printf("\nA equipe Armênia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[68],numero_medalhas_ouro[68],numero_medalhas_prata[68],numero_medalhas_bronze[68]);
}
switch(equipes){
	case 70:
	printf("\nA equipe Quirguistão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[69],numero_medalhas_ouro[69],numero_medalhas_prata[69],numero_medalhas_bronze[69]);
}
switch(equipes){
	case 71:
	printf("\nA equipe Mongólia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[070],numero_medalhas_ouro[070],numero_medalhas_prata[070],numero_medalhas_bronze[070]);
}
switch(equipes){
	case 72:
	printf("\nA equipe Argentina obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[071],numero_medalhas_ouro[071],numero_medalhas_prata[071],numero_medalhas_bronze[071]);
}
switch(equipes){
	case 73:
	printf("\nA equipe San Marino obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[072],numero_medalhas_ouro[072],numero_medalhas_prata[072],numero_medalhas_bronze[072]);
}
switch(equipes){
	case 74:
	printf("\nA equipe Jordânia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[73],numero_medalhas_ouro[073],numero_medalhas_prata[073],numero_medalhas_bronze[073]);
}
switch(equipes){
	case 75:
	printf("\nA equipe Malásia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[074],numero_medalhas_ouro[074],numero_medalhas_prata[074],numero_medalhas_bronze[074]);
}
switch(equipes){
	case 76:
	printf("\nA equipe Nigéria obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[75],numero_medalhas_ouro[75],numero_medalhas_prata[75],numero_medalhas_bronze[75]);
}
switch(equipes){
	case 77:
	printf("\nA equipe Arábia Saudita obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[76],numero_medalhas_ouro[76],numero_medalhas_prata[76],numero_medalhas_bronze[76]);
}
switch(equipes){
	case 78:
	printf("\nA equipe Bahrein obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[77],numero_medalhas_ouro[77],numero_medalhas_prata[77],numero_medalhas_bronze[77]);
}
switch(equipes){
	case 79:
	printf("\nA equipe Lituânia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[78],numero_medalhas_ouro[78],numero_medalhas_prata[78],numero_medalhas_bronze[78]);
}
switch(equipes){
	case 80:
	printf("\nA equipe Macedônia do Norte obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[79],numero_medalhas_ouro[79],numero_medalhas_prata[79],numero_medalhas_bronze[79]);
}
switch(equipes){
	case 81:
	printf("\nA equipe Namíbia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[80],numero_medalhas_ouro[80],numero_medalhas_prata[80],numero_medalhas_bronze[80]);
}
switch(equipes){
	case 82:
	printf("\nA equipe Turcomenistão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[81],numero_medalhas_ouro[81],numero_medalhas_prata[81],numero_medalhas_bronze[81]);
}
switch(equipes){
	case 83:
	printf("\nA equipe Cazaquistão obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[82],numero_medalhas_ouro[82],numero_medalhas_prata[82],numero_medalhas_bronze[82]);
}
switch(equipes){
	case 84:
	printf("\nA equipe México obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[83],numero_medalhas_ouro[83],numero_medalhas_prata[83],numero_medalhas_bronze[83]);
}
switch(equipes){
	case 85:
	printf("\nA equipe Finlândia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[84],numero_medalhas_ouro[84],numero_medalhas_prata[84],numero_medalhas_bronze[84]);
}
switch(equipes){
	case 86:
	printf("\nA equipe Botsuana obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[85],numero_medalhas_ouro[85],numero_medalhas_prata[85],numero_medalhas_bronze[85]);
}
switch(equipes){
	case 87:
	printf("\nA equipe Burkina Faso obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[86],numero_medalhas_ouro[86],numero_medalhas_prata[86],numero_medalhas_bronze[86]);
}
switch(equipes){
	case 88:
	printf("\nA equipe Costa do Marfim obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[87],numero_medalhas_ouro[87],numero_medalhas_prata[87],numero_medalhas_bronze[87]);
}
switch(equipes){
	case 89:
	printf("\nA equipe Gana obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[88],numero_medalhas_ouro[88],numero_medalhas_prata[88],numero_medalhas_bronze[88]);
}
switch(equipes){
	case 90:
	printf("\nA equipe Granada obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[89],numero_medalhas_ouro[89],numero_medalhas_prata[89],numero_medalhas_bronze[89]);
}
switch(equipes){
	case 91:
	printf("\nA equipe Kuwait obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[90],numero_medalhas_ouro[90],numero_medalhas_prata[90],numero_medalhas_bronze[90]);
}
switch(equipes){
	case 92:
	printf("\nA equipe Moldávia obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[91],numero_medalhas_ouro[91],numero_medalhas_prata[91],numero_medalhas_bronze[91]);
}
switch(equipes){
	case 93:
	printf("\nA equipe Síria obteve %2.0f medalhas gerais, %2.0f medalhas de ouro, %2.0f medalhas de prata e %2.0f medalhas de bronze\n\n",numero_geral_medalhas[92],numero_medalhas_ouro[92],numero_medalhas_prata[92],numero_medalhas_bronze[92]);
}


system("PAUSE");

}




void insereosarquivo(){	

int i;
int k;

float numero_geral_medalhas [93]={113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

float numero_medalhas_ouro [93]= {39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 
float numero_medalhas_prata [93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze [93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};

//char nome_dos_paises[93]: {EUA,China,Japão,Grã-Bretanha,Comitê Olímpico Russo,Austrália,Holanda,França,Alemanha,Itália,Canadá,Brasil,Nova Zelândia,Cuba,Hungria,Coreia do Sul,Polônia,República Tcheca,Quênia,Noruega,Jamaica,Espanha,Suécia,Suíça,Dinamarca,Croácia,Irã,Sérvia,Bélgica,Bulgária,Eslovênia,Uzbequistão,Geórgia,Taiwan,Turquia,Grécia,Uganda,Equador,Irlanda,Israel,Catar,Bahamas,Kosovo,Ucrânia,Belarus,Romênia,Venezuela,Índia,Hong Kong,Eslováquia,Filipinas,África do Sul,Áustria,Egito,Indonésia,Etiópia,Portugal,Tunísia,Estônia,Fiji,Letônia,Tailândia,Bermudas,Marrocos,Porto Rico,Colômbia,Azerbaijão,República Dominicana,Armênia,Quirguistão,Mongólia,Argentina,San Marino,Jordânia,Malásia,Nigéria,Arábia Saudita,Bahrein,Lituânia,Macedônia do Norte,Namíbia,Turcomenistão,Cazaquistão,México,Finlândia,Botsuana,Burkina Faso,Costa do Marfim,Gana,Granada,Kuwait,Moldávia,Síria};

FILE *projetofinal;
	projetofinal = fopen("projetofinal.txt", "w");
	for (i=0; i<94; i++){
		fprintf(projetofinal, "%f %f %.1f %.1f %.1f", numero_geral_medalhas[i], numero_medalhas_ouro[i], numero_medalhas_prata[i], numero_medalhas_bronze[i]);
	}	
	
	fclose(projetofinal);
}

void lerarquivos(){
	
	
int i;
int k;

float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1};

float numero_medalhas_ouro[93]= {39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};

FILE *projetofinal;
	if((projetofinal = fopen("projetofinal.txt", "w"))==NULL){
		printf("ERRO\n Não foi possível abrir o arquivo.\n\n");
		exit(1);
}
	printf("Saber os paises e suas medalhas\n");
	for(k=0; k<94; k++){
		fscanf(projetofinal,"%d %d %f %f %f\n", &numero_geral_medalhas[k], &numero_medalhas_ouro[k], &numero_medalhas_prata[k], &numero_medalhas_bronze[k]);
		printf("%d      %d    %.1f     %.1f      %.1f\n",numero_geral_medalhas[k], numero_medalhas_ouro[k], numero_medalhas_prata[k], numero_medalhas_bronze[k]);
	}	
	
	fclose(projetofinal);
	
}
//OPÇÃO DOIS: MEDIA DO QUADRO GERAL

void mediasgeral(){

float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

float total=93; 
float mediaqdg, somadoquadrogeral = 0; 
int i;

for (i=0;i<total;i++) {
        somadoquadrogeral = somadoquadrogeral + numero_geral_medalhas[i];
    }
        mediaqdg = (float) somadoquadrogeral/total;
        printf("--------------------------------------------\n");
        printf("A média do quadro de medalhas gerais é igual a %0.2f\n",mediaqdg);
		printf("--------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("PAUSE");
}

//OPÇÃO TRES: MEDIA DO QUADRO DAS 3 MEDALHAS

void mediasrestantes(){
	
float numero_medalhas_ouro[93]=	{39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};

	
float mediavetqgm; 
float total=93; 
float mediaqdg, mediaqdmo, mediaqdmp, mediaqdmb, somadoquadrodemedalhadeouro, somadoquadrodemedalhadeprata, somadoquadrodemedalhadebronze = 0; 
int i; 

//Media medalha de ouro
for (i=0;i<total;i++) {
       somadoquadrodemedalhadeouro = somadoquadrodemedalhadeouro + numero_medalhas_ouro[i];
    
        mediaqdmo = (float) somadoquadrodemedalhadeouro/total;
    }
//Media medalha de prata   
for (i=0;i<total;i++) {
       somadoquadrodemedalhadeprata = somadoquadrodemedalhadeprata + numero_medalhas_prata[i];
    
        mediaqdmp = (float) somadoquadrodemedalhadeprata/total;
}

//Media medalha de bronze
for (i=0;i<total;i++) {
       somadoquadrodemedalhadebronze = somadoquadrodemedalhadeprata + numero_medalhas_bronze[i];
    
        mediaqdmb = (float) somadoquadrodemedalhadebronze/total;
}
	
	printf("\nA MÉDIA DAS MEDALHAS SÃO: \n");
	printf("\n--------------------------------------------\n");
	printf("MÉDIA DE MEDALHAS DE OURO: %f", mediaqdmo);
	printf("\n--------------------------------------------\n");
	printf("MÉDIA DE MEDALHAS DE PRATA: %f", mediaqdmp);
	printf("\n--------------------------------------------\n");
	printf("MÉDIA DE MEDALHAS DE BRONZE: %f\n", mediaqdmb);
	printf("--------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	system("PAUSE");
}

//OPÇÃO 4: Mediana quadro medalha geral

void medianaqg(){
	
	float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};
	
	float medianaqg=0;
	float medqg=0;
	
	for(i=0;i<total-1;i++){
        for(j=i+1;j<total;j++){
        	
            if(numero_geral_medalhas[i] > numero_geral_medalhas[j]){
            	
                medqg = numero_geral_medalhas[i];
                numero_geral_medalhas[i] = numero_geral_medalhas[j];
                numero_geral_medalhas[j] = medqg;
            }
        }
    }
    if(total%2){
         medianaqg = numero_geral_medalhas[total/2];
    } else {
         medianaqg = (numero_geral_medalhas[total/2-1]+numero_geral_medalhas[total/2])/2;
	}
	
    if(total%2){
         medianaqg = numero_geral_medalhas[total/2];
    } else {
         medianaqg = (numero_geral_medalhas[total/2-1]+numero_geral_medalhas[total/2])/2;
    }
    
	
	printf("\n--------------------------------------------");
	printf("\nMediana: %f ", medianaqg);		
	printf("\n--------------------------------------------\n\n\n\n\n");
	system("PAUSE");
}

//OPÇÃO 5: Mediana quadro das 3

void medianaqd3(){
	
	float numero_medalhas_ouro[93]=	{39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

	float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};
	
	
	int i=0, j=0;
	float medianaqmo,medianaqmp,medianaqmb=0;
	float medqmo,medqmp,medqmb=0;
	
//MEDIANA MEDALHA DE OURO

 	for(i=0;i<total-1;i++){
    for(j=i+1;j<total;j++){
        	
    if(numero_medalhas_ouro[i] > numero_medalhas_ouro[j]){
            	
        medqmo = numero_medalhas_ouro[i];
        numero_medalhas_ouro[i] = numero_medalhas_ouro[j];
        numero_medalhas_ouro[j] = medqmo;
            }
        }
    }
    if(total%2){
         medianaqmo = numero_medalhas_ouro[total/2];
    } else {
         medianaqmo = (numero_medalhas_ouro[total/2-1]+numero_medalhas_ouro[total/2])/2;
	}
	
    if(total%2){
         medianaqmo = numero_medalhas_ouro[total/2];
    } else {
         medianaqmo = (numero_medalhas_ouro[total/2-1]+numero_medalhas_ouro[total/2])/2;
    }
    
 //MEDIANA MEDALHA DE PRATA
 
 	for(i=0;i<total-1;i++){
    for(j=i+1;j<total;j++){
        	
    if(numero_medalhas_prata[i] > numero_medalhas_prata[j]){
            	
        medianaqmp = numero_medalhas_prata[i];
        numero_medalhas_prata[i] = numero_medalhas_prata[j];
        numero_medalhas_prata[j] = medianaqmp;
            }
        }
    }
    if(total%2){
         medianaqmp = numero_medalhas_prata[total/2];
    } else {
         medianaqmp = (numero_medalhas_prata[total/2-1]+numero_medalhas_prata[total/2])/2;
	}
	
    if(total%2){
         medianaqmp = numero_medalhas_prata[total/2];
    } else {
         medianaqmp = (numero_medalhas_prata[total/2-1]+numero_medalhas_prata[total/2])/2;
    } 
    
//MEDIANA MEDALHA DE BRONZE
	for(i=0;i<total-1;i++){
    for(j=i+1;j<total;j++){
        	
    if(numero_medalhas_bronze[i] > numero_medalhas_bronze[j]){
            	
        medianaqmb = numero_medalhas_bronze[i];
        numero_medalhas_bronze[i] = numero_medalhas_bronze[j];
        numero_medalhas_bronze[j] = medianaqmb;
            }
        }
    }
    if(total%2){
         medianaqmb = numero_medalhas_bronze[total/2];
    } else {
         medianaqmb = (numero_medalhas_bronze[total/2-1]+numero_medalhas_bronze[total/2])/2;
	}
	
    if(total%2){
         medianaqmb = numero_medalhas_bronze[total/2];
    } else {
         medianaqmb = (numero_medalhas_bronze[total/2-1]+numero_medalhas_bronze[total/2])/2;
    } 
    
printf("\n--------------------------------------------\n");
printf("Mediana Medalha de ouro: %2.1f \n", medianaqmo);
printf("--------------------------------------------\n");
printf("Mediana Medalha de prata: %2.1f \n", medianaqmp);
printf("--------------------------------------------\n");
printf("Mediana Medalha de bronze: %2.1f \n", medianaqmb);
printf("--------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");


system("PAUSE");

}


//OPÇÃO 6: VARIANCIA DO QUADRO GERAL DE MEDALHAS
void varianciadoqg(){
	
	float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

	float media, variancia;
    for(media=0, i=0; i<=(total-1); i++)
    media += numero_geral_medalhas[i];
  	media /= (float) total;
  
   
for(variancia=0, i=0; i<=(total-1); i++)
    variancia += (numero_geral_medalhas[i]-media)*(numero_geral_medalhas[i]-media);
    variancia /= (float) total;
    printf("\n--------------------------------------------\n\n");
    printf("A variancia do Quadro Geral de Medalhas é igual a %.2f\n\n", variancia);
    printf("--------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    

system("PAUSE");
}

//OPÇÃO 7: VARIANCIA DO QUADRO DAS 3

void varianciadoqd3(){
	
float numero_medalhas_ouro[93]=	{39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};
	
float mediaqdo,mediaqdp,mediaqdb,varianciaqdo,varianciadp,varianciadb;

//Variancia ouro
    for(mediaqdo=0, i=0; i<=(total-1); i++)
    mediaqdo += numero_medalhas_ouro[i];
  	mediaqdo /= (float) total;
  
   
for(varianciaqdo=0, i=0; i<=(total-1); i++)
    varianciaqdo += (numero_medalhas_ouro[i]-mediaqdo)*(numero_medalhas_ouro[i]-mediaqdo);
    varianciaqdo /= (float) total;
    
//Variancia prata

    for(mediaqdp=0, i=0; i<=(total-1); i++)
    mediaqdp += numero_medalhas_prata[i];
  	mediaqdp /= (float) total;
  
for(varianciadp=0, i=0; i<=(total-1); i++)
    varianciadp += (numero_medalhas_prata[i]-mediaqdp)*(numero_medalhas_prata[i]-mediaqdp);
    varianciadp /= (float) total;
    
//Variancia bronze

  for(mediaqdb=0, i=0; i<=(total-1); i++)
    mediaqdb += numero_medalhas_bronze[i];
  	mediaqdb /= (float) total;
  
for(varianciadb=0, i=0; i<=(total-1); i++)
    varianciadb += (numero_medalhas_bronze[i]-mediaqdb)*(numero_medalhas_bronze[i]-mediaqdb);
    varianciadb /= (float) total;
    
    printf("\n--------------------------------------------\n");
    printf("A variancia do Quadro Medalhas de Ouro é igual a %.2f", varianciaqdo);
    printf("\n--------------------------------------------\n");
    printf("A variancia do Quadro Medalhas de Prata é igual a %.2f", varianciadp);
    printf("\n--------------------------------------------\n");
    printf("A variancia do Quadro Medalhas de Bronze é igual a %.2f", varianciadb);
    printf("\n--------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("PAUSE");
}

//OPÇÃO 8: DISTRIBUIÇAO DA FREQUENCIA DO QUADRO GERAL DE MEDALHAS

void distribuicaodafreqqg(){
	
float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

int freq1=0,freq2=0,freq3=0,freq4=0,freq5=0,freq6=0;


for(i=0; i<total; i++){
 if (numero_geral_medalhas[i]< 6) freq1 = freq1+1;
 else {if ((5<numero_geral_medalhas[i])&&(numero_geral_medalhas[i]<16)) freq2 = freq2+1;
 else {if ((15<numero_geral_medalhas[i])&&(numero_geral_medalhas[i]<26)) freq3 = freq3+1;
 else {if ((25<numero_geral_medalhas[i])&&(numero_geral_medalhas[i]<36)) freq4 = freq4+1;
 else {if (35<numero_geral_medalhas[i]) freq5 = freq5+1;
}
}
}
}
}
printf("\n\nAbaixo temos a tabela de distribuição de frequência das Medalhas do Quadro Geral:\n");
                     
    printf("\n\n                       +-----------+-------------+-----------------------------+\n");
    printf("                       | Freq. abs.|  Freq. rel. |  Porcentagem da Freq. rel.  |\n");
    printf("+----------------------+-----------+-------------+-----------------------------+\n");
    printf("| ATÉ 5 MEDALHAS       |    %d     |    %0.3f    |     %0.3f porcento         |\n",freq1,(float)freq1/total,(float)freq1/total*100);
    printf("+----------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 6 À 15  MEDALHAS  |    %d     |    %0.3f    |     %0.3f porcento         |\n",freq2,(float)freq2/total,(float)freq2/total*100);
    printf("+----------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 16 À 25 MEDALHAS  |     %d     |    %0.3f    |      %0.3f porcento         |\n",freq3,(float)freq3/total,(float)freq3/total*100);
    printf("+----------------------+-----------+-------------+-----------------------------+\n");  
    printf("| DE 26 À 35 MEDALHAS  |     %d     |    %0.3f    |      %0.3f porcento         |\n",freq4,(float)freq4/total,(float)freq4/total*100);
    printf("+----------------------+-----------+-------------+-----------------------------+\n");  
    printf("| A PARTIR 35 MEDALHAS |     %d     |    %0.3f    |      %0.3f porcento         |\n",freq5,(float)freq5/total,(float)freq5/total*100);
    printf("+----------------------+-----------+-------------+-----------------------------+\n\n");  
    
    system("PAUSE");
}

//OPÇÃO 8: DISTRIBUIÇAO DA FREQUENCIA DO QUADRO GERAL DAS 3 MEDALHAS

void distribuicaodafreqqd3(){
	
float numero_medalhas_ouro[93]=	{39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};
	
	
int freqdo1=0,freqdo2=0,freqdo3=0,freqdo4=0;
int freqdp1=0,freqdp2=0,freqdp3=0,freqdp4=0;
int freqdb1=0,freqdb2=0,freqdb3=0,freqdb4=0;


//MEDALHA DE OURO

for(i=0; i<total; i++){
 if (numero_medalhas_ouro[i]< 2) freqdo1 = freqdo1+1;
 else {if ((1<numero_medalhas_ouro[i])&&(numero_medalhas_ouro[i]<4)) freqdo2 = freqdo2+1;
 else {if ((3<numero_medalhas_ouro[i])&&(numero_medalhas_ouro[i]<6)) freqdo3 = freqdo3+1;
 else {if (5<numero_medalhas_ouro[i]) freqdo4 = freqdo4+1;

}
}
}
}
printf("\n------------------------------------------------------------------------------------\n");
printf("\n\nAbaixo temos a tabela de distribuição de frequência do Quadro de Medalhas de Ouro:\n");
                     
    printf("\n\n                      +-----------+-------------+-----------------------------+\n");
    printf("                      | Freq. abs.|  Freq. rel. |  Porcentagem da Freq. rel.  |\n");
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| 1 MEDALHA           |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdo1,(float)freqdo1/total,(float)freqdo1/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 2 À 3  MEDALHAS  |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdo2,(float)freqdo2/total,(float)freqdo2/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 4 À 5 MEDALHAS   |     %d     |    %0.3f    |      %0.3f porcento         |\n",freqdo3,(float)freqdo3/total,(float)freqdo3/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");  
    printf("| A PARTIR 5 MEDALHAS |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdo4,(float)freqdo4/total,(float)freqdo4/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n\n\n\n\n\n\n\n\n\n");  
 
    
    system("PAUSE");
    
//MEDALHA DE PRATA
    
    for(i=0; i<total; i++){
 if (numero_medalhas_prata[i]< 2) freqdp1 = freqdp1+1;
 else {if ((1<numero_medalhas_prata[i])&&(numero_medalhas_prata[i]<4)) freqdp2 = freqdp2+1;
 else {if ((3<numero_medalhas_prata[i])&&(numero_medalhas_prata[i]<6)) freqdp3 = freqdp3+1;
 else {if (5<numero_medalhas_prata[i]) freqdp4 = freqdp4+1;

}
}
}
}

printf("\n\nAbaixo temos a tabela de distribuição de frequência do Quadro de Medalhas de Prata:\n");
                     
    printf("\n\n                      +-----------+-------------+-----------------------------+\n");
    printf("                      | Freq. abs.|  Freq. rel. |  Porcentagem da Freq. rel.  |\n");
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| 1 MEDALHA           |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdp1,(float)freqdp1/total,(float)freqdp1/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 2 À 3  MEDALHAS  |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdp2,(float)freqdp2/total,(float)freqdp2/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 4 À 5 MEDALHAS   |     %d     |    %0.3f    |      %0.3f porcento         |\n",freqdp3,(float)freqdp3/total,(float)freqdp3/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");  
    printf("| A PARTIR 5 MEDALHAS |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdp4,(float)freqdp4/total,(float)freqdp4/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");    
    system("PAUSE");
    
//MEDALHA DE BRONZE

    for(i=0; i<total; i++){
 if (numero_medalhas_bronze[i]< 2) freqdb1 = freqdb1+1;
 else {if ((1<numero_medalhas_bronze[i])&&(numero_medalhas_bronze[i]<4)) freqdb2 = freqdb2+1;
 else {if ((3<numero_medalhas_bronze[i])&&(numero_medalhas_bronze[i]<6)) freqdb3 = freqdb3+1;
 else {if (5<numero_medalhas_bronze[i]) freqdb4 = freqdb4+1;

}
}
}
}
printf("\n------------------------------------------------------------------------------------\n");
printf("\n\nAbaixo temos a tabela de distribuição de frequência do Quadro de Medalhas de Ouro:\n");
                     
    printf("\n\n                      +-----------+-------------+-----------------------------+\n");
    printf("                      | Freq. abs.|  Freq. rel. |  Porcentagem da Freq. rel.  |\n");
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| 1 MEDALHA           |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdb1,(float)freqdb1/total,(float)freqdb1/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 2 À 3  MEDALHAS  |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdb2,(float)freqdb2/total,(float)freqdb2/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");
    printf("| DE 4 À 5 MEDALHAS   |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdb3,(float)freqdb3/total,(float)freqdb3/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n");  
    printf("| A PARTIR 5 MEDALHAS |    %d     |    %0.3f    |     %0.3f porcento         |\n",freqdb4,(float)freqdb4/total,(float)freqdb4/total*100);
    printf("+---------------------+-----------+-------------+-----------------------------+\n\n");  
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
    
    system("PAUSE");
}

//OPÇÃO 10: MAIOR E MENOR VALOR DO QUADRO GERAL DE MEDALHAS

void maioremenorqg(){
	
float numero_geral_medalhas[93]= {113,88,58,65,71,46,36,33,37,40,24,21,20,15,20,20,14,11,10,8,9,17,9,13,11,8,7,9,7,6,5,5,8,12,13,4,4,3,4,4,3,2,2,19,7,4,4,7,6,4,4,3,7,6,5,4,4,2,2,2,2,2,1,
1,1,5,7,5,4,3,4,3,3,2,2,2,1,1,1,1,1,1,8,4,2,1,1,1,1,1,1,1,1};

int i, maior=0, menor=0;

    for (i=0;i<total;i++){
      if(i==0){maior=numero_geral_medalhas[i];menor=numero_geral_medalhas[i];}
      
      if(maior<numero_geral_medalhas[i]){
        maior=numero_geral_medalhas[i];
      }
      else{
        if(menor>numero_geral_medalhas[i]){
            menor=numero_geral_medalhas[i];
        }
      }
    }
    printf("\n---------------------------------------------------------\n");
    printf("\nO maior valor do Quadro de Medalhas Geral é %d\n", maior);
    printf("E o menor valor Quadro de Medalhas Geral é %d\n", menor);
    printf("\n---------------------------------------------------------\n\n");
    system("PAUSE");

}

//OPÇÃO 11: MAIOR E MENOR VALOR DO QUADRO DE MEDALHAS DAS 3

void maioremenorqd3(){
	
float numero_medalhas_ouro[93]=	{39,38,27,22,20,17,10,10,10,10,7,7,7,7,6,6,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_prata[93]= {41,32,14,21,28,7,12,12,11,10,6,6,6,3,7,4,5,4,4,2,1,8,6,4,4,3,2,1,1,1,1,0,5,4,2,1,1,1,0,0,0,0,0,6,3,3,3,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0,0,0,4,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};

float numero_medalhas_bronze[93]= {33,18,17,22,23,22,14,11,16,20,11,8,7,5,7,10,5,3,2,2,4,6,0,6,4,2,2,5,3,2,1,2,1,6,9,1,1,0,2,2,1,0,0,12,3,0,0,4,3,1,1,0,5,4,3,2,2,0,1,1,1,1,0,0,0,1,4,2,2,1,3,2,2,1,1,1,0,0,0,0,0,0,8,4,2,1,1,1,1,1,1,1,1};
	
int i, maioro=0, menoro=0;
int maiorp=0, menorp=0;
int maiorb=0, menorb=0;

//MAIOR E MENOR DE OURO
    for (i=0;i<total;i++){
      if(i==0){maioro=numero_medalhas_ouro[i];menoro=numero_medalhas_ouro[i];}
      
      if(maioro<numero_medalhas_ouro[i]){
        maioro=numero_medalhas_ouro[i];
      }
      else{
        if(menoro>numero_medalhas_ouro[i]){
            menoro=numero_medalhas_ouro[i];
        
      }
    }
}
//MAIOR E MENOR DE PRATA
      for (i=0;i<total;i++){
      if(i==0){maiorp=numero_medalhas_prata[i];menorp=numero_medalhas_prata[i];}
      if(maiorp<numero_medalhas_prata[i]){
        maiorp=numero_medalhas_prata[i];
      }
      else{
        if(numero_medalhas_prata[i]<menorp){
            menorp=numero_medalhas_prata[i];
         }
      }
    }
    
//MAIOR E MENOR DE BRONZE
    for (i=0;i<total;i++){
      if(i==0){maiorb=numero_medalhas_bronze[i];menorb=numero_medalhas_bronze[i];}
      if(numero_medalhas_bronze[i]>maiorb){
        maiorb=numero_medalhas_bronze[i];
      }
      else{
        if(numero_medalhas_bronze[i]<menorb){
            menorb=numero_medalhas_bronze[i];
         }
      }
    }
    
        
            
    printf("\n---------------------------------------------------------\n"); 
    printf("\nO maior valor do Quadro de Medalhas de Ouro é %d", maioro);
    printf("\nE o menor valor do Quadro de Medalhas de Ouro é %d\n\n", menoro);
    printf("---------------------------------------------------------");
    printf("\n\nO maior valor do Quadro de Medalhas de Prata é %d", maiorp);
    printf("\nE o menor valor do Quadro de Medalhas de Prata é %d\n\n", menorp);
    printf("---------------------------------------------------------");
    printf("\n\nO maior valor do Quadro de Medalhas de Bronze é %d", maiorb);
    printf("\nE o menor valor do Quadro de Medalhas de Bronze é %d\n\n", menorb);
    printf("---------------------------------------------------------\n\n");
    system("PAUSE");
    
}


//FINALIZAÇAO DO PROGRAMA
void finalizarprog(){
		printf("\n");
		printf("\t\t\t\t\t\t----------------------\n");
		printf("\t\t\t\t\t\t|   FIM DO PROGRAMA   |\n");
		printf("\t\t\t\t\t\t----------------------\n");
		
  		printf("\nPara encerrar aperte ESC");
  		printf("\n\n");
	
}

int main(void){
	setlocale (LC_ALL,"portuguese");

		int escolha;
		escrevertitulo();
			
			do{
				do{
					escrevermenu();
					printf("\nDigite uma das opções acima: ");
					scanf("%d",&escolha);
					
					}while ((escolha!=0)&&(escolha!=1)&&(escolha!=2)&&(escolha!=3)&&(escolha!=4)&&(escolha!=5)&&(escolha!=6)&&(escolha!=7)&&(escolha!=8)&&(escolha!=9)&&(escolha!=10)&&(escolha!=11));
					
						switch(escolha){
							
							case 1: quantidadedemedalhas();
							break;
						
							case 2: 
							printf("\n\nOPÇÃO NÚMERO 2: MEDIA DO QUADRO DE MEDALHAS GERAIS\n\n");
       					   	mediasgeral();
       					   	break;
       					   	
       					   	case 3:
        					printf("\n\nOPÇÃO NÚMERO 3: MEDIA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS\n");
        					mediasrestantes();
        					break;
        					
        					case 4:
        					printf("\n\nOPÇÃO NÚMERO 4: MEDIANA DO QUADRO DE MEDALHAS GERAIS\n");
        					medianaqg();
        					break;
        					
        					case 5:
        					printf("\n\nOPÇÃO NÚMERO 5: MEDIANA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS\n");
        					medianaqd3();
        					break;
        					
        					case 6:
        					printf("\n\nOPÇÃO NÚMERO 6: VARIANCIA DO QUADRO GERAL DE MEDALHAS\n");
        					varianciadoqg();
        					break;
        					
        					case 7:
        					printf("\n\nOPÇÃO NÚMERO 7: VARIANCIA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS\n");
        					varianciadoqd3();
        					break;
								
        					case 8:
        					printf("\n\nOPÇÃO NÚMERO 8: DISTRIBUIÇAO DA FREQUENCIA DO QUADRO GERAL DE MEDALHAS\n");
        					distribuicaodafreqqg();
        					break;
        					
        					case 9:
        					printf("\n\nOPÇÃO NÚMERO 9: DISTRIBUIÇAO DA FREQUENCIA DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS\n");
        					distribuicaodafreqqd3();
        					break;
        					
        					case 10:
        					printf("\n\nOPÇÃO NÚMERO 10: MAIOR E MENOR VALOR DO QUADRO GERAL DE MEDALHAS\n");
        					maioremenorqg();
        					break;
        					
        					case 11:
        					printf("\n\nOPÇÃO NÚMERO 11: MAIOR E MENOR VALOR DO QUADRO DE MEDALHAS DAS TRÊS MEDALHAS\n");
        					maioremenorqd3();
							break;
							
								
        					case 0:
        					finalizarprog();
        					break;
        					
        						
        					
        						
        			
        			
        					

       			
					
					
					
					
			
		}

}




while (escolha!=0);

	return 0;
	system("PAUSE");
}
