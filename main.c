#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bottles[9];
    int i;
    int Bab;
    int Bbc;
    int Bca;

    int Cab;
    int Cbc;
    int Cca;

    int Gab;
    int Gbc;
    int Gca;

    int combinations[6];

    while ( scanf ("%d %d %d %d %d %d %d %d %d",
                   &bottles [0],
                   &bottles [1],
                   &bottles [2],
                   &bottles [3],
                   &bottles [4],
                   &bottles [5],
                   &bottles [6],
                   &bottles [7],
                   &bottles [8]) != EOF
           )
    {
        Bab = bottles[0] + bottles[3];
        Bbc = bottles[3] + bottles[6];
        Bca = bottles[6] + bottles[0];

        Cab = bottles[2] + bottles[5];
        Cbc = bottles[5] + bottles[8];
        Cca = bottles[8] + bottles[2];

        Gab = bottles[1] + bottles[4];
        Gbc = bottles[4] + bottles[7];
        Gca = bottles[7] + bottles[1];

        combinations[0] = Bbc + Cca + Gab;
        combinations[1] = Bbc + Gca + Cab;
        combinations[2] = Cbc + Bca + Gab;
        combinations[3] = Cbc + Gca + Bab;
        combinations[4] = Gbc + Bca + Cab;
        combinations[5] = Gbc + Cca + Bab;

        int min = combinations[0];
        int resVal = 0;

        for (i = 0; i < 6; i++)
        {

            if (min > combinations[i])
            {
                min = combinations[i];
                resVal = i;
            }
        }

        switch (resVal)
        {
        case 0:
            printf("BCG %d",min);
            break;

        case 1:
            printf("BGC %d",min);
            break;

        case 2:
            printf("CBG %d",min);
            break;

        case 3:
            printf("CGB %d",min);
            break;

        case 4:
            printf("GBC %d",min);
            break;

        case 5:
            printf("GCB %d",min);
            break;
        }
        printf("\n");
    }

    return 0;
}
