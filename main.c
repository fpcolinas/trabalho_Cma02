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
        printf("\t\t\t\t***Bem Vindo à locadora de filmes***\n");
        printf("\n\t\tNo momento, temos os seguintes diretores disponíveis:\n\n");
        printf("\t\t|1- *Alfred Hitchcock*\t\t4- *Quentin Tarantino*\n\t\t|2- *Martin Scorsese*\t\t5- *Tin Burton*\n\t\t|3- *Stanley Kubrick*\t\t6- *David Ficher*\n");
        printf("\t\tInforme o número do autor desejado: ");
        scanf("%d",&nome[i]);
     switch (nome[i])
    {
        case 1:
                fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Alfred Hithcock.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- Os Pássaros\t\t*B- Psicose\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tOs Pássaros foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                     {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                        }
                     }
                    else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                        }
                     }
                     else{
                        printf("\nOpção inválida\n\n");
                      }

                }
                else if (filme=='B'||filme=='b')
                {
                printf("\n\t\t\t\tPsicose foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                      }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                      }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                      }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                      }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                     }
                     }
                     else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                      printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                      printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                      }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                      }
                     }
                     else{
                     printf("\nOpção inválida\n\n");
                     }
                }

                else {
                    printf("\t\t\tOpção digitada inválida\n\n");
                     }
                break;
        case 2:
                fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Martin Scorsese.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- O Aviador\t\t*B- Ilha do medo\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tO Aviador foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                     }
                    else{
                        printf("\nOpção inválida\n\n");
                    }

                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tIlha do Medo foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                     {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                     }
                    else if(strcmp(audio,leg) == 0)
                     {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                     }
                     else{
                        printf("\nOpção inválida\n\n");
                      }
                }
                else {
                    printf("\t\t\tOpção digitada inválida\n\n");
                }

                break;
        case 3:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Stanley Kubrick.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- Laranja Mecânica\t\t*B- O iluminado\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tLaranja Mecânica foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");

                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tO Iluminado foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOpção digitada inválida\n\n");
                }
                break;
        case 4:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Quentin Tarantino.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- Cães de Aluguel\t\t*B- Pulp Fiction\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tCães de Aluguel foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tPulp Fiction foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOpção digitada inválida\n\n");
                }
                break;
        case 5:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi Tin Burton.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- Batman\t\t*B- Alice no País das Maravilhas\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tBatman foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tAlice no País das Maravilhas foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOpção digitada inválida\n\n");
                }
                break;
        case 6:
               fflush(stdin);
                printf("\n\t\t Seu autor escolhido foi David Ficher.");
                printf("\n\t\t\t\t\t Filmes disponíveis:\n");
                printf("\t\t\t\t*A- Clube da Luta\t\t*B- Se7en-Os Sete Crimes Capitais\n ");
                printf("\n\t\tEscolha um filme: ");
                scanf("%c",&filme);
                if (filme=='A'||filme=='a')
                {
                printf("\n\t\t\t\tClube da Luta foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else if (filme=='B'||filme=='b')
                    {
                printf("\n\t\t\t\tSe7en-Os Sete Crimes Capitais foi o filme escolhido.\n");
                fflush(stdin);
                printf("\n\t\t\t\tEscolha o tipo de áudio:\n\t\t\t\t*Dublado(dub)\t\t\t*Legendado(leg): ");
                printf("\n\t\tEscolha um tipo de audio: ");
                scanf("%s",&audio);
                    if(strcmp(audio,dub) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Dublado");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                        }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else if(strcmp(audio,leg) == 0)
                    {
                    printf("\n\t\t\t\tO áudio escolhido foi Legendado ");
                    printf("\n\t\t\t\tInforme a qualidade desejada:\n\t\t\t\t1- *480p\t\t3- *1080p60\n\t\t\t\t2- *720p60\t\t4- *4k\n\t\tQualidade: ");
                    scanf("%d",&qualidade);
                      if(qualidade==1){
                        printf("\n\t\t\t\tA qualidade escolhida foi 480p\n ");
                       }
                      else if(qualidade==2){
                        printf("\n\t\t\t\tA qualidade escolhida foi 720p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==3){
                        printf("\n\t\t\t\tA qualidade escolhida foi 1080p60\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else if(qualidade==4){
                        printf("\n\t\t\t\tA qualidade escolhida foi 4k\n ");
                        printf("\n\t\tInforme o número do dia atual: ");
                        printf("\n\t\t1- Domingo\t2- Segunda-feira\t3- Terça-feira\n\t\t4- Quarta-feira\t\t5- Quinta-feira\t\t6- Sexta-feira\n\t\t7- Sábado\n");
                        printf("\n\t\tNúmero: ");
                        scanf("\t\t%d",&dia);
                            if(dia==1){
                            printf("\t\tHojé é: Domingo");
                            printf("\n\t\t\tData de devolução será quarta-feira.");
                            }
                            else if(dia==2){
                            printf("\t\tHojé é: Segunda-feira ");
                            printf("\n\t\t\tData de devolução será quinta-feira.");
                            }
                            else if(dia==3){
                            printf("\t\tHojé é: Terça-feira");
                            printf("\n\t\t\tData de devolução será sexta-feira.");
                            }
                            else if(dia==4){
                            printf("\t\tHojé é: Quarta-feira");
                            printf("\n\t\t\tData de devolução será sábado.");
                            }
                            else if(dia==5){
                             printf("\t\tHojé é: Quinta-feira");
                            printf("\n\t\t\tData de devolução será domingo.");
                            }
                            else if(dia==6){
                             printf("\t\tHojé é: Sábado");
                            printf("\n\t\t\tData de devolução será segunda.");
                            }
                            else if(dia==7){
                            printf("\t\t\tHoje é: Domingo");
                            printf("\n\t\t\tData de devolução será terça-feira.");
                            }
                            else {
                                printf("\n\t\t\t\tOpção inválida");
                            }
                       }
                      else{
                        printf("\n\t\t\t\tOpção inválida\n ");
                       }
                    }
                    else{
                        printf("\nOpção inválida\n\n");
                    }
                }
                else {
                    printf("\t\t\tOpção digitada inválida\n\n");

                }
                break;
        default:
            printf("\n\n\t\t\t\t\tOpção do autor inválida.\n");
            break;
    }
printf("\n\t\tO preço total a ser pago é:R$2,00");
fflush(stdin);
printf("\n\t\t\t\tDigite 0 para continuar ou 1 para sair: ");
scanf("%d",&resp);
fflush(stdin);
n_cliente++;
system("cls");
}while(resp==0);


        return 0;
}
