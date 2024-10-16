#include <stdio.h>

int main(void)
{
    int i = 0;

    int temperaturaGiorno = 0;
    int temperaturaPrecedente = 5;

    int temperaturaAumentata = 0;
    int temperaturaDiminuita = 0;
    int temperaturaUguale = 0;

    for (i = 1; i < 11; i++)
    {
        printf("Inserisci la temperatura dell %d° giorno\n", i);
        scanf("%d", &temperaturaGiorno);
        if (temperaturaGiorno > temperaturaPrecedente)
        {
            temperaturaAumentata++;
        }
        else if (temperaturaGiorno < temperaturaPrecedente)
        {
            temperaturaDiminuita++;
        }
        else
        {
            temperaturaUguale++;
        }
        temperaturaPrecedente = temperaturaGiorno;
    }

    printf("La temperatura è aumentata %d volte\n", temperaturaAumentata);
    printf("La temperatura è diminuita %d volte\n", temperaturaDiminuita);
    printf("La temperatura era uguale %d volte\n", temperaturaUguale);

    return 0;
}
