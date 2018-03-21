#include<stdio.h>

int main()
{ 
    char board[10][10] ={
		"  ABCDEFGH",
		"1 RNBQKBNR",
		"2 PPPPPPPP",
		"3         ",
		"4         ",
		"5         ",
		"6         ",
		"7 pppppppp",
		"8 rnbqkbnr"};

    int i, j;
    for (i = 0;i <= 9; i++)
    {
	for (j = 0; j <= 9; j++)
	    { 
	    printf("%c", board[i][j]);
	    }
	printf("\n");
    }
    return 0;
}
