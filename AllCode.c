#include <stdio.h>

void TikTakToe();
int main()
{
    TikTakToe();
    return 0;
}
void TikTakToe()
{
    int Choice, PlayerWinCheck;
    int FirstPlayer = 0, SecondPlayer = 1;

    int word[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("\n+-----------------------------------------+\n");
    printf("|             |             |             |\n");
    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
    printf("|             |             |             | \n");
    printf("+-----------------------------------------+\n");
    printf("|             |             |             |\n");
    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
    printf("|             |             |             | \n");
    printf("+-----------------------------------------+\n");
    printf("|             |             |             |\n");
    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
    printf("|             |             |             | \n");
    printf("+-----------------------------------------+\n");
    for (int i = 0; i < 9; i++)
    {
        if (i > 2)
        {
            if ((word[0][0] == word[0][1]) && (word[0][0] == word[0][2]))
            {
                PlayerWinCheck = word[0][0];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[0][0] == word[1][0]) && (word[0][0] == word[2][0]))
            {
                PlayerWinCheck = word[0][0];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[0][0] == word[1][1]) && (word[0][0] == word[2][2]))
            {
                PlayerWinCheck = word[0][0];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[1][0] == word[1][1]) && (word[1][0] == word[1][2]))
            {
                PlayerWinCheck = word[1][0];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[0][1] == word[1][1]) && (word[0][1] == word[2][1]))
            {
                PlayerWinCheck = word[0][1];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[0][2] == word[1][1]) && (word[0][2] == word[2][0]))
            {
                PlayerWinCheck = word[0][2];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[2][0] == word[2][1]) && (word[2][0] == word[2][2]))
            {
                PlayerWinCheck = word[2][0];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else if ((word[0][2] == word[1][2]) && (word[0][2] == word[2][2]))
            {
                PlayerWinCheck = word[0][2];
                if (PlayerWinCheck == 0)
                {
                    printf("Winner is [ Player 1 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
                else
                {
                    printf("Winner is [ Player 2 ]");
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    break;
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    printf("[Player 1 ] : ");
                    scanf("%d", &Choice);
                    if (Choice == 1)
                    {
                        word[0][0] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 2)
                    {
                        word[0][1] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 3)
                    {
                        word[0][2] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 4)
                    {
                        word[1][0] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 5)
                    {
                        word[1][1] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 6)
                    {
                        word[1][2] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 7)
                    {
                        word[2][0] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 8)
                    {
                        word[2][1] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 9)
                    {
                        word[2][2] = FirstPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    printf("[Player 2 ] : ");
                    scanf("%d", &Choice);
                    if (Choice == 1)
                    {
                        word[0][0] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 2)
                    {
                        word[0][1] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 3)
                    {
                        word[0][2] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 4)
                    {
                        word[1][0] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 5)
                    {
                        word[1][1] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 6)
                    {
                        word[1][2] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 7)
                    {
                        word[2][0] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 8)
                    {
                        word[2][1] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else if (Choice == 9)
                    {
                        word[2][2] = SecondPlayer;
                        printf("\n+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                        printf("|             |             |             |\n");
                        printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                        printf("|             |             |             | \n");
                        printf("+-----------------------------------------+\n");
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("[Player 1 ] : ");
                scanf("%d", &Choice);
                if (Choice == 1)
                {
                    word[0][0] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 2)
                {
                    word[0][1] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 3)
                {
                    word[0][2] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 4)
                {
                    word[1][0] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 5)
                {
                    word[1][1] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 6)
                {
                    word[1][2] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 7)
                {
                    word[2][0] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 8)
                {
                    word[2][1] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 9)
                {
                    word[2][2] = FirstPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else
                {
                    continue;
                }
            }
            else
            {
                printf("[Player 2 ] : ");
                scanf("%d", &Choice);
                if (Choice == 1)
                {
                    word[0][0] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 2)
                {
                    word[0][1] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 3)
                {
                    word[0][2] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 4)
                {
                    word[1][0] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 5)
                {
                    word[1][1] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 6)
                {
                    word[1][2] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 7)
                {
                    word[2][0] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 8)
                {
                    word[2][1] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else if (Choice == 9)
                {
                    word[2][2] = SecondPlayer;
                    printf("\n+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[0][0], word[0][1], word[0][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[1][0], word[1][1], word[1][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                    printf("|             |             |             |\n");
                    printf("|      %d      |      %d      |      %d      |\n", word[2][0], word[2][1], word[2][2]);
                    printf("|             |             |             | \n");
                    printf("+-----------------------------------------+\n");
                }
                else
                {
                    continue;
                }
            }
        }
    }
}
