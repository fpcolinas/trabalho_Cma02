#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 0b");
    int nome[5],qualidade,i=0,resp,n_cliente=1,dia;
    char filme,audio[4],dub[4] = "dub",leg[4] = "leg";


do{

        printf("\n\t\t=====================================================\n");
        printf("\n\t\tCliente %d\n\n",n_cliente);
        printf("\t\t\t\t***Bem Vindo � locadora de filmes***\n");
        printf("\n\t\tNo momento, temos os seguintes diretores dispon�veis:\n\n");
        printf("\t\t|1- *Alfred Hitchcock*\t\t4- *Quentin Tarantino*\n\t\t|2- *Martin Scorsese*\t\t5- *Tin Burton*\n\t\t|3- *Stanley Kubrick*\t\t6- *David Ficher*\n");
        printf("\t\tInforme o n�mero do autor desejado: ");
        scanf("%d",&nome[i]);
     switch (nome[i])
    {
        case 1:
                fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Alfred Hithcock.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- Os P�ssaros\t\t*B- Psicose\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tOs P�ssaros foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                     {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                        }
                     }
                    else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                        }
                     }
                     else{
                        printf("\nOp��o inv�lida\n\n");
                      }

                }
                else if (filme=='B'||filme=='b')
                {
                printf("\n\t\t\t\tPsicose foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                      }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                      }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                      }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                      }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                     }
                     }
                     else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                      printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                      printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                      }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                      }
                     }
                     else{
                     printf("\nOp��o inv�lida\n\n");
                     }
                }

                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");
                     }
                break;
        case 2:
                fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Martin Scorsese.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- O Aviador\t\t*B- Ilha do medo\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tO Aviador foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                     }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }

                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tIlha do Medo foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                     {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                     }
                    else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                     }
                     else{
                        printf("\nOp��o inv�lida\n\n");
                      }
                }
                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");
                }

                break;
        case 3:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Stanley Kubrick.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- Laranja Mec�nica\t\t*B- O iluminado\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tLaranja Mec�nica foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");

                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tO Iluminado foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");
                }
                break;
        case 4:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Quentin Tarantino.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- C�es de Aluguel\t\t*B- Pulp Fiction\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tC�es de Aluguel foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tPulp Fiction foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");
                }
                break;
        case 5:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Tin Burton.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- Batman\t\t*B- Alice no Pa�s das Maravilhas\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tBatman foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tAlice no Pa�s das Maravilhas foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");
                }
                break;
        case 6:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi David Ficher.");
                printf("\n\t\t\t\t\t Filmes dispon�veis:\n");
                printf("\t\t\t\t*A- Clube da Luta\t\t*B- Se7en-Os Sete Crimes Capitais\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tClube da Luta foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tSe7en-Os Sete Crimes Capitais foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de �udio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO �udio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o n�mero do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Ter�a-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- S�bado\n");
                        printf("\n\t\tN�mero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHoj� �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHoj� �: Segunda-feira ");
                            printf("\n\t\t\tData de devolu��o ser� quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHoj� �: Ter�a-feira");
                            printf("\n\t\t\tData de devolu��o ser� sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHoj� �: Quarta-feira");
                            printf("\n\t\t\tData de devolu��o ser� s�bado.");
                            }
                            else if(dia==5){
                             printf("\t\tHoj� �: Quinta-feira");
                            printf("\n\t\t\tData de devolu��o ser� domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHoj� �: S�bado");
                            printf("\n\t\t\tData de devolu��o ser� segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje �: Domingo");
                            printf("\n\t\t\tData de devolu��o ser� ter�a-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOp��o inv�lida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOp��o inv�lida\n ");
                       }
                    }
                    else{
                        printf("\nOp��o inv�lida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOp��o digitada inv�lida\n\n");

                }
                break;
        default:
            printf("\n\n\t\t\t\t\tOp��o do autor inv�lida.\n");
            break;
    }
printf("\n\t\tO pre�o total a ser pago �:R$2,00");
fflush(stdin);
printf("\n\t\t\t\tDigite 0 para continuar ou 1 para sair: ");
scanf("%d",&resp);
fflush(stdin);
n_cliente++;
system("cls");
}while(resp==0);


        return 0;
}
