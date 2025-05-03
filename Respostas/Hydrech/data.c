/**
 * @file data.h
 * @brief Biblioteca para manipulação de datas.
 *
 * Esta biblioteca contém funções para manipulação de datas, como verificação de datas válidas, impressão de datas e cálculo de diferença entre datas.
 */

#include "stdio.h"
#include "data.h"
/**
 * @brief Verifica se uma data é válida.
 *
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 * @return Retorna 1 se a data é válida e 0 caso contrário.
 */
int verificaDataValida(int dia, int mes, int ano)
{

    if (ano < 0)
    {
        return 0;
    }

    switch (mes)
    {
    case 1:
        if (dia <= numeroDiasMes(1, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 2:
        if (dia <= numeroDiasMes(2, mes) && dia >= 1)
        {
            return 1;
        }
        break;

    case 3:
        if (dia <= numeroDiasMes(3, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 4:
        if (dia <= numeroDiasMes(4, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 5:
        if (dia <= numeroDiasMes(5, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 6:
        if (dia <= numeroDiasMes(6, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 7:
        if (dia <= numeroDiasMes(7, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 8:
        if (dia <= numeroDiasMes(8, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 9:
        if (dia <= numeroDiasMes(9, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 10:
        if (dia <= numeroDiasMes(10, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    case 11:
        if (dia <= numeroDiasMes(11, ano) && dia >= 1)
        {
            return 1;
        }
        break;
    case 12:
        if (dia <= numeroDiasMes(12, ano) && dia >= 1)
        {
            return 1;
        }
        break;

    default:
        break;
    }

    return 0;
}

/**
 * @brief Imprime uma data no formato DD/MM/AAAA.
 *
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 */
void imprimeData(int dia, int mes, int ano)
{
    printf("%02d/%02d/%04d\n", dia, mes, ano);
}

/**
 * @brief Imprime o nome do mês por extenso.
 *
 * @param mes Mês da data.
 */
void imprimeMesExtenso(int mes)
{
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;

    case 2:
        printf("Fevereiro");
        break;

    case 3:
        printf("Marco");
        break;

    case 4:
        printf("Abril");
        break;

    case 5:
        printf("Maio");
        break;

    case 6:
        printf("Junho");
        break;

    case 7:
        printf("Julho");
        break;

    case 8:
        printf("Agosto");
        break;

    case 9:
        printf("Setembro");
        break;

    case 10:
        printf("Outubro");
        break;

    case 11:
        printf("Novembro");
        break;

    case 12:
        printf("Dezembro");
        break;

    default:
        break;
    }
}

/**
 * @brief Imprime uma data por extenso no formato "DD de NOME_DO_MES de AAAA".
 *
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 */
void imprimeDataExtenso(int dia, int mes, int ano)
{
    printf("%d de ", dia);
    imprimeMesExtenso(mes);
    printf(" de %d\n", ano);
}

/**
 * @brief Verifica se um ano é bissexto.
 *
 * @param ano Ano a ser verificado.
 * @return Retorna 1 se o ano é bissexto e 0 caso contrário.
 */
int verificaBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 1;
    return 0;
}

/**
 * @brief Retorna o número de dias de um determinado mês.
 *
 * @param mes Mês a ser verificado.
 * @param ano Ano da data.
 * @return Retorna o número de dias do mês.
 */
int numeroDiasMes(int mes, int ano)
{
    switch (mes)
    {
    case 1:
        return 31;
        break;
    case 2:
        if (verificaBissexto(ano))
        {
            return 29;
        }
        else
            return 28;
        break;
    case 3:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 9:
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 12:
        return 31;
        break;

    default:
        break;
    }
}

/**
 * @brief Compara duas datas.
 *
 * @param dia1 Dia da primeira data.
 * @param mes1 Mês da primeira data.
 * @param ano1 Ano da primeira data.
 * @param dia2 Dia da segunda data.
 * @param mes2 Mês da segunda data.
 * @param ano2 Ano da segunda data.
 * @return Retorna 1 se a primeira data é maior que a segunda, -1 se a primeira data é menor que a segunda e 0 se as datas são iguais.
 */
int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    if (dia1 == dia2 && mes1 == mes2 && ano1 == ano2)
    {
        return 0;
    }
    if (ano1 > ano2)
    {
        return 1;
    }
    else if (ano2 > ano1)
    {
        return -1;
    }

    if (ano1 == ano2)
    {
        if (mes1 > mes2)
        {
            return 1;
        }
        else if (mes2 > mes1)
        {
            return -1;
        }

        if (mes1 == mes2)
        {
            if (dia1 > dia2)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
}

/**
 * @brief Calcula o número de dias até o início de um determinado mês.
 *
 * @param mes Mês a ser verificado.
 * @param ano Ano da data.
 * @return Retorna o número de dias até o início do mês.
 */
int calculaDiasAteMes(int mes, int ano)
{
    int dias = 0;
    for (int i = 1; i < mes; i++)
    {
        dias += numeroDiasMes(i, ano);
    }
    return dias;
}

/**
 * @brief Calcula a diferença em dias entre duas datas.
 *
 * @param dia1 Dia da primeira data.
 * @param mes1 Mês da primeira data.
 * @param ano1 Ano da primeira data.
 * @param dia2 Dia da segunda data.
 * @param mes2 Mês da segunda data.
 * @param ano2 Ano da segunda data.
 * @return Retorna o número de dias de diferença entre as datas.
 */
int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    int status = comparaData(dia1, mes1, ano1, dia2, mes2, ano2);
    if (status == 0)
    {
        return 0;
    }

    int dias = 0;

    if (status == 1)
    {

        // conta todos os dias de 1 de janeiro do ano2 ate 1 de janeiro do ano1
        for (int i = ano2; ano1 - i != 0; i++)
        {
            dias += calculaDiasAteMes(12, i);
        }

        // tira os dias contados que passaram até a data 2
        dias = dias - calculaDiasAteMes(mes2 - 1, ano2) - dia2;

        // adiciona os dias de 1 de janeiro do ano1 ate a data 1
        dias += calculaDiasAteMes(mes1 - 1, ano1) + dia1;

        return dias;
    }

    if (status == -1)
    {

        // conta todos os dias de 1 de janeiro do ano1 ate 1 de janeiro do ano2
        for (int i = ano1; ano2 - i != 0; i++)
        {
            dias += calculaDiasAteMes(12, i);
        }

        // tira os dias contados que passaram de janeiro até a data 1
        dias = dias - calculaDiasAteMes(mes1 - 1, ano1) - dia1;

        // adiciona os dias de 1 de janeiro do ano1 ate a data 1
        dias += calculaDiasAteMes(mes2 - 1, ano2) + dia2;

        return dias;
    }
}

/**
 * @brief Imprime a próxima data no formato DD/MM/AAAA.
 *
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 */
void imprimeProximaData(int dia, int mes, int ano)
{
    dia++;
    if (dia > numeroDiasMes(mes, ano))
    {
        dia = 1;
        mes++;
        if (mes > 12)
        {
            mes = 1;
            ano++;
        }
    }
    printf("%02d/%02d/%04d\n", dia, mes, ano);
}