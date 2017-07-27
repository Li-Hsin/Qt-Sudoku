#include "sudokuData.h"

int sudokuData::num[9][9];

void easyRandom(int nums)
{
	switch (nums)
    {
        case 0:
        {
            sudokuData::num[0][1]=7;
            sudokuData::num[0][5]=5;
            sudokuData::num[0][7]=4;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][3]=2;
            sudokuData::num[1][4]=9;
            sudokuData::num[1][5]=8;
            sudokuData::num[1][6]=5;
            sudokuData::num[2][0]=1;
            sudokuData::num[2][1]=2;
            sudokuData::num[2][3]=4;
            sudokuData::num[2][6]=8;
            sudokuData::num[3][0]=3;
            sudokuData::num[3][1]=5;
            sudokuData::num[3][5]=2;
            sudokuData::num[3][6]=9;
            sudokuData::num[4][0]=7;
            sudokuData::num[4][3]=6;
            sudokuData::num[4][5]=4;
            sudokuData::num[4][8]=1;
            sudokuData::num[5][2]=6;
            sudokuData::num[5][3]=3;
            sudokuData::num[5][7]=5;
            sudokuData::num[5][8]=4;
            sudokuData::num[6][2]=1;
            sudokuData::num[6][5]=7;
            sudokuData::num[6][7]=9;
            sudokuData::num[6][8]=8;
            sudokuData::num[7][2]=2;
            sudokuData::num[7][3]=9;
            sudokuData::num[7][4]=3;
            sudokuData::num[7][5]=1;
            sudokuData::num[7][8]=5;
            sudokuData::num[8][1]=9;
            sudokuData::num[8][3]=8;
            sudokuData::num[8][7]=3;
            break;
        }
        case 1:
        {
            sudokuData::num[0][2]=6;
            sudokuData::num[0][6]=3;
            sudokuData::num[0][7]=9;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][2]=9;
            sudokuData::num[1][4]=8;
            sudokuData::num[1][5]=3;
            sudokuData::num[1][8]=6;
            sudokuData::num[2][1]=3;
            sudokuData::num[2][3]=5;
            sudokuData::num[2][4]=6;
            sudokuData::num[3][1]=4;
            sudokuData::num[3][5]=5;
            sudokuData::num[3][8]=9;
            sudokuData::num[4][1]=1;
            sudokuData::num[4][2]=7;
            sudokuData::num[4][6]=6;
            sudokuData::num[4][7]=3;
            sudokuData::num[5][0]=6;
            sudokuData::num[5][3]=3;
            sudokuData::num[5][7]=8;
            sudokuData::num[6][4]=2;
            sudokuData::num[6][5]=8;
            sudokuData::num[6][7]=5;
            sudokuData::num[7][0]=3;
            sudokuData::num[7][3]=9;
            sudokuData::num[7][4]=5;
            sudokuData::num[7][6]=1;
            sudokuData::num[7][8]=4;
            sudokuData::num[8][1]=9;
            sudokuData::num[8][2]=1;
            sudokuData::num[8][6]=8;
            break;
        }
        case 2:
        {
            sudokuData::num[0][0]=3;
            sudokuData::num[0][2]=1;
            sudokuData::num[0][3]=4;
            sudokuData::num[0][7]=8;
            sudokuData::num[0][8]=9;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][5]=3;
            sudokuData::num[1][6]=1;
            sudokuData::num[1][7]=5;
            sudokuData::num[2][1]=2;
            sudokuData::num[2][3]=1;
            sudokuData::num[2][6]=4;
            sudokuData::num[3][1]=6;
            sudokuData::num[3][6]=8;
            sudokuData::num[3][7]=3;
            sudokuData::num[3][8]=4;
            sudokuData::num[4][0]=7;
            sudokuData::num[4][2]=3;
            sudokuData::num[4][6]=5;
            sudokuData::num[4][8]=2;
            sudokuData::num[5][0]=5;
            sudokuData::num[5][1]=1;
            sudokuData::num[5][2]=8;
            sudokuData::num[5][7]=9;
            sudokuData::num[6][2]=5;
            sudokuData::num[6][5]=1;
            sudokuData::num[6][7]=2;
            sudokuData::num[7][1]=3;
            sudokuData::num[7][2]=4;
            sudokuData::num[7][3]=8;
            sudokuData::num[7][8]=5;
            sudokuData::num[8][0]=9;
            sudokuData::num[8][1]=8;
            sudokuData::num[8][5]=5;
            sudokuData::num[8][6]=6;
            sudokuData::num[8][8]=1;
            break;
        }
        case 3:
        {
            sudokuData::num[0][1]=5;
            sudokuData::num[0][3]=8;
            sudokuData::num[0][4]=1;
            sudokuData::num[0][8]=9;
            sudokuData::num[1][0]=8;
            sudokuData::num[1][2]=2;
            sudokuData::num[1][5]=7;
            sudokuData::num[1][6]=1;
            sudokuData::num[1][8]=5;
            sudokuData::num[2][1]=6;
            sudokuData::num[2][3]=3;
            sudokuData::num[2][6]=7;
            sudokuData::num[3][4]=7;
            sudokuData::num[3][6]=2;
            sudokuData::num[3][8]=3;
            sudokuData::num[4][1]=1;
            sudokuData::num[4][3]=5;
            sudokuData::num[4][5]=6;
            sudokuData::num[4][7]=8;
            sudokuData::num[5][0]=3;
            sudokuData::num[5][2]=7;
            sudokuData::num[5][4]=9;
            sudokuData::num[6][2]=5;
            sudokuData::num[6][5]=3;
            sudokuData::num[6][7]=1;
            sudokuData::num[7][0]=1;
            sudokuData::num[7][2]=8;
            sudokuData::num[7][3]=7;
            sudokuData::num[7][6]=5;
            sudokuData::num[7][8]=6;
            sudokuData::num[8][0]=6;
            sudokuData::num[8][4]=2;
            sudokuData::num[8][2]=5;
            sudokuData::num[8][7]=7;
            break;
        }
        case 4:
        {
            sudokuData::num[0][0]=8;
            sudokuData::num[0][2]=1;
            sudokuData::num[0][4]=9;
            sudokuData::num[0][6]=4;
            sudokuData::num[0][7]=2;
            sudokuData::num[0][8]=8;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][2]=2;
            sudokuData::num[1][5]=3;
            sudokuData::num[1][6]=1;
            sudokuData::num[2][1]=9;
            sudokuData::num[2][5]=1;
            sudokuData::num[2][6]=6;
            sudokuData::num[2][8]=3;
            sudokuData::num[3][4]=1;
            sudokuData::num[3][6]=9;
            sudokuData::num[3][7]=8;
            sudokuData::num[4][1]=2;
            sudokuData::num[4][3]=5;
            sudokuData::num[4][5]=7;
            sudokuData::num[4][7]=6;
            sudokuData::num[5][1]=8;
            sudokuData::num[5][2]=5;
            sudokuData::num[5][4]=6;
            sudokuData::num[6][0]=9;
            sudokuData::num[6][2]=6;
            sudokuData::num[6][3]=1;
            sudokuData::num[6][7]=3;
            sudokuData::num[7][2]=3;
            sudokuData::num[7][3]=6;
            sudokuData::num[7][6]=7;
            sudokuData::num[7][8]=9;
            sudokuData::num[8][0]=2;
            sudokuData::num[8][1]=4;
            sudokuData::num[8][2]=7;
            sudokuData::num[8][4]=3;
            sudokuData::num[8][6]=5;
            sudokuData::num[8][8]=6;
            break;
        }
        case 5:
        {
            sudokuData::num[0][1]=3;
            sudokuData::num[0][2]=7;
            sudokuData::num[0][5]=5;
            sudokuData::num[0][6]=2;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][3]=1;
            sudokuData::num[1][5]=6;
            sudokuData::num[1][6]=3;
            sudokuData::num[1][7]=9;
            sudokuData::num[2][0]=6;
            sudokuData::num[2][1]=8;
            sudokuData::num[2][3]=3;
            sudokuData::num[2][8]=7;
            sudokuData::num[3][1]=5;
            sudokuData::num[3][5]=7;
            sudokuData::num[4][0]=8;
            sudokuData::num[4][4]=1;
            sudokuData::num[4][8]=3;
            sudokuData::num[5][3]=2;
            sudokuData::num[5][7]=8;
            sudokuData::num[6][0]=3;
            sudokuData::num[6][5]=1;
            sudokuData::num[6][7]=7;
            sudokuData::num[6][8]=2;
            sudokuData::num[7][1]=6;
            sudokuData::num[7][2]=8;
            sudokuData::num[7][3]=7;
            sudokuData::num[7][5]=2;
            sudokuData::num[7][8]=5;
            sudokuData::num[8][2]=2;
            sudokuData::num[8][3]=9;
            sudokuData::num[8][6]=1;
            sudokuData::num[8][7]=4;
            break;
        }
        default:
        {
            sudokuData::num[0][1]=7;
            sudokuData::num[0][5]=5;
            sudokuData::num[0][7]=4;
            sudokuData::num[1][0]=4;
            sudokuData::num[1][3]=2;
            sudokuData::num[1][4]=9;
            sudokuData::num[1][5]=8;
            sudokuData::num[1][6]=5;
            sudokuData::num[2][0]=1;
            sudokuData::num[2][1]=2;
            sudokuData::num[2][3]=4;
            sudokuData::num[2][6]=8;
            sudokuData::num[3][0]=3;
            sudokuData::num[3][1]=5;
            sudokuData::num[3][5]=2;
            sudokuData::num[3][6]=9;
            sudokuData::num[4][0]=7;
            sudokuData::num[4][3]=6;
            sudokuData::num[4][5]=4;
            sudokuData::num[4][8]=1;
            sudokuData::num[5][2]=6;
            sudokuData::num[5][3]=3;
            sudokuData::num[5][7]=5;
            sudokuData::num[5][8]=4;
            sudokuData::num[6][2]=1;
            sudokuData::num[6][5]=7;
            sudokuData::num[6][7]=9;
            sudokuData::num[6][8]=8;
            sudokuData::num[7][2]=2;
            sudokuData::num[7][3]=9;
            sudokuData::num[7][4]=3;
            sudokuData::num[7][5]=1;
            sudokuData::num[7][8]=5;
            sudokuData::num[8][1]=9;
            sudokuData::num[8][3]=8;
            sudokuData::num[8][7]=3;
            break;
        }
    }
}

void mediumRandom(int nums)
{
	switch (nums)
    {
        case 0:
        {
            sudokuData::num[0][2] = 4;
            sudokuData::num[0][4] = 9;
            sudokuData::num[0][5] = 1;
            sudokuData::num[0][7] = 2;
            sudokuData::num[1][0] = 3;
            sudokuData::num[1][2] = 6;
            sudokuData::num[1][6] = 9;
            sudokuData::num[1][8] = 1;
            sudokuData::num[2][1] = 9;
            sudokuData::num[2][4] = 7;
            sudokuData::num[3][3] = 9;
            sudokuData::num[3][4] = 8;
            sudokuData::num[3][6] = 7;
            sudokuData::num[3][7] = 6;
            sudokuData::num[3][8] = 5;
            sudokuData::num[4][3] = 7;
            sudokuData::num[4][5] = 6;
            sudokuData::num[5][0] = 8;
            sudokuData::num[5][1] = 6;
            sudokuData::num[5][2] = 7;
            sudokuData::num[5][4] = 1;
            sudokuData::num[5][5] = 5;
            sudokuData::num[6][4] = 2;
            sudokuData::num[6][7] = 1;
            sudokuData::num[7][0] = 2;
            sudokuData::num[7][2] = 5;
            sudokuData::num[7][6] = 4;
            sudokuData::num[7][8] = 6;
            sudokuData::num[8][1] = 4;
            sudokuData::num[8][3] = 1;
            sudokuData::num[8][4] = 6;
            sudokuData::num[8][6] = 2;
            break;
        }
        case 1:
        {
            sudokuData::num[0][4]=9;
			sudokuData::num[0][5]=7;
			sudokuData::num[1][0]=5;
			sudokuData::num[1][3]=8;
			sudokuData::num[1][4]=1;
			sudokuData::num[1][7]=3;
			sudokuData::num[2][1]=8;
			sudokuData::num[2][3]=5;
			sudokuData::num[2][6]=4;
			sudokuData::num[2][8]=1;
			sudokuData::num[3][3]=4;
			sudokuData::num[3][7]=7;
			sudokuData::num[3][8]=9;
			sudokuData::num[4][1]=1;
			sudokuData::num[4][2]=7;
			sudokuData::num[4][6]=2;
			sudokuData::num[4][7]=6;
			sudokuData::num[5][0]=8;
			sudokuData::num[5][1]=6;
			sudokuData::num[5][5]=1;
			sudokuData::num[6][0]=2;
			sudokuData::num[6][2]=1;
			sudokuData::num[6][5]=9;
			sudokuData::num[6][7]=5;
			sudokuData::num[7][1]=7;
			sudokuData::num[7][4]=4;
			sudokuData::num[7][5]=5;
			sudokuData::num[7][8]=3;
			sudokuData::num[8][3]=7;
			sudokuData::num[8][4]=3;
			break;
        }
        case 2:
        {
            sudokuData::num[0][2]=8;
			sudokuData::num[0][3]=7;
			sudokuData::num[0][7]=2;
			sudokuData::num[1][0]=6;
			sudokuData::num[1][3]=3;
			sudokuData::num[1][5]=9;
			sudokuData::num[1][8]=5;
			sudokuData::num[2][0]=5;
			sudokuData::num[2][3]=2;
			sudokuData::num[2][6]=7;
			sudokuData::num[2][7]=8;
			sudokuData::num[2][8]=9;
			sudokuData::num[3][4]=3;
			sudokuData::num[3][6]=9;
			sudokuData::num[3][7]=4;
			sudokuData::num[3][8]=7;
			sudokuData::num[4][2]=3;
			sudokuData::num[4][6]=1;
			sudokuData::num[5][0]=7;
			sudokuData::num[5][1]=4;
			sudokuData::num[5][2]=9;
			sudokuData::num[5][4]=1;
			sudokuData::num[6][0]=3;
			sudokuData::num[6][1]=5;
			sudokuData::num[6][2]=1;
			sudokuData::num[6][5]=7;
			sudokuData::num[6][8]=4;
			sudokuData::num[7][0]=4;
			sudokuData::num[7][3]=1;
			sudokuData::num[7][5]=3;
			sudokuData::num[7][8]=8;
			sudokuData::num[8][1]=8;
			sudokuData::num[8][5]=6;
			sudokuData::num[8][6]=5;
			break;
        }
        case 3:
        {
            sudokuData::num[0][2]=9;
			sudokuData::num[0][3]=8;
			sudokuData::num[0][6]=2;
			sudokuData::num[0][7]=4;
			sudokuData::num[1][2]=4;
			sudokuData::num[1][3]=9;
			sudokuData::num[1][8]=1;
			sudokuData::num[2][1]=1;
			sudokuData::num[2][4]=6;
			sudokuData::num[3][3]=7;
			sudokuData::num[3][4]=1;
			sudokuData::num[3][8]=2;
			sudokuData::num[4][1]=9;
			sudokuData::num[4][2]=3;
			sudokuData::num[4][3]=6;
			sudokuData::num[4][5]=2;
			sudokuData::num[4][6]=4;
			sudokuData::num[4][7]=7;
			sudokuData::num[5][0]=7;
			sudokuData::num[5][4]=8;
			sudokuData::num[5][5]=3;
			sudokuData::num[6][4]=4;
			sudokuData::num[6][7]=2;
			sudokuData::num[7][0]=9;
			sudokuData::num[7][5]=5;
			sudokuData::num[7][6]=1;
			sudokuData::num[8][1]=5;
			sudokuData::num[8][2]=2;
			sudokuData::num[8][5]=8;
			sudokuData::num[8][6]=7;
			break;
        }
        case 4:
        {
            sudokuData::num[0][1]=3;
			sudokuData::num[0][2]=9;
			sudokuData::num[0][3]=2;
			sudokuData::num[0][5]=6;
			sudokuData::num[1][0]=6;
			sudokuData::num[1][5]=5;
			sudokuData::num[1][6]=4;
			sudokuData::num[1][7]=2;
			sudokuData::num[2][1]=4;
			sudokuData::num[2][3]=8;
			sudokuData::num[2][4]=7;
			sudokuData::num[3][1]=5;
			sudokuData::num[3][2]=1;
			sudokuData::num[3][6]=7;
			sudokuData::num[4][0]=4;
			sudokuData::num[4][8]=1;
			sudokuData::num[5][2]=2;
			sudokuData::num[5][6]=8;
			sudokuData::num[5][7]=6;
			sudokuData::num[6][4]=8;
			sudokuData::num[6][5]=4;
			sudokuData::num[6][7]=9;
			sudokuData::num[7][1]=8;
			sudokuData::num[7][2]=6;
			sudokuData::num[7][3]=7;
			sudokuData::num[7][8]=4;
			sudokuData::num[8][3]=6;
			sudokuData::num[8][5]=9;
			sudokuData::num[8][6]=1;
			sudokuData::num[8][7]=7;
			break;
        }
        case 5:
        {
            sudokuData::num[0][3]=6;
            sudokuData::num[0][6]=5;
            sudokuData::num[1][5]=3;
            sudokuData::num[1][6]=6;
            sudokuData::num[1][7]=2;
            sudokuData::num[2][0]=9;
            sudokuData::num[2][1]=6;
            sudokuData::num[2][3]=1;
            sudokuData::num[2][6]=8;
            sudokuData::num[2][8]=4;
            sudokuData::num[3][0]=4;
            sudokuData::num[3][7]=6;
            sudokuData::num[4][2]=2;
            sudokuData::num[4][3]=8;
            sudokuData::num[4][4]=9;
            sudokuData::num[4][5]=5;
            sudokuData::num[4][6]=3;
            sudokuData::num[5][1]=3;
            sudokuData::num[5][8]=8;
            sudokuData::num[6][0]=5;
            sudokuData::num[6][2]=8;
            sudokuData::num[6][5]=9;
            sudokuData::num[6][7]=7;
            sudokuData::num[6][8]=2;
            sudokuData::num[7][1]=9;
            sudokuData::num[7][2]=3;
            sudokuData::num[7][3]=2;
            sudokuData::num[8][2]=6;
            sudokuData::num[8][5]=7;
            break;
        }
        default:
        {
            sudokuData::num[0][1]=1;
            sudokuData::num[0][5]=2;
            sudokuData::num[0][7]=9;
            sudokuData::num[0][8]=4;
            sudokuData::num[1][0]=3;
            sudokuData::num[1][3]=4;
            sudokuData::num[1][7]=8;
            sudokuData::num[1][8]=5;
            sudokuData::num[2][3]=3;
            sudokuData::num[2][4]=5;
            sudokuData::num[2][6]=2;
            sudokuData::num[3][0]=1;
            sudokuData::num[3][1]=8;
            sudokuData::num[3][6]=5;
            sudokuData::num[4][1]=4;
            sudokuData::num[4][2]=9;
            sudokuData::num[4][6]=8;
            sudokuData::num[4][7]=2;
            sudokuData::num[5][2]=3;
            sudokuData::num[5][7]=1;
            sudokuData::num[5][8]=9;
            sudokuData::num[6][2]=8;
            sudokuData::num[6][4]=1;
            sudokuData::num[6][5]=6;
            sudokuData::num[7][0]=2;
            sudokuData::num[7][1]=6;
            sudokuData::num[7][5]=4;
            sudokuData::num[7][8]=1;
            sudokuData::num[8][0]=4;
            sudokuData::num[8][1]=3;
            sudokuData::num[8][3]=9;
            sudokuData::num[8][7]=5;
            break;
        }
    }
}

void hardRandom(int nums)
{
	switch (nums)
    {
        case 0:
        {
            sudokuData::num[0][0]=6;
            sudokuData::num[0][2]=3;
            sudokuData::num[0][3]=2;
            sudokuData::num[0][5]=1;
            sudokuData::num[0][8]=7;
            sudokuData::num[1][0]=9;
            sudokuData::num[1][2]=8;
            sudokuData::num[1][3]=5;
            sudokuData::num[2][1]=2;
            sudokuData::num[2][4]=8;
            sudokuData::num[3][1]=3;
            sudokuData::num[3][3]=7;
            sudokuData::num[3][4]=6;
            sudokuData::num[3][6]=1;
            sudokuData::num[3][7]=9;
            sudokuData::num[4][2]=7;
            sudokuData::num[4][3]=8;
            sudokuData::num[4][5]=9;
            sudokuData::num[4][6]=6;
            sudokuData::num[5][1]=9;
            sudokuData::num[5][2]=6;
            sudokuData::num[5][4]=4;
            sudokuData::num[5][5]=3;
            sudokuData::num[5][7]=7;
            sudokuData::num[6][4]=7;
            sudokuData::num[6][7]=6;
            sudokuData::num[7][5]=8;
            sudokuData::num[7][6]=7;
            sudokuData::num[7][8]=3;
            sudokuData::num[8][0]=3;
            sudokuData::num[8][3]=4;
            sudokuData::num[8][5]=6;
            sudokuData::num[8][6]=8;
            sudokuData::num[8][8]=1;
            break;
        }
        case 1:
        {
			sudokuData::num[0][2]=5;
			sudokuData::num[0][3]=7;
			sudokuData::num[0][7]=4;
			sudokuData::num[0][8]=6;
			sudokuData::num[1][1]=4;
			sudokuData::num[1][6]=9;
			sudokuData::num[2][0]=9;
			sudokuData::num[2][6]=7;
			sudokuData::num[2][8]=5;
			sudokuData::num[3][1]=8;
			sudokuData::num[3][3]=4;
			sudokuData::num[3][4]=1;
			sudokuData::num[3][8]=3;
			sudokuData::num[4][1]=3;
			sudokuData::num[4][3]=9;
			sudokuData::num[4][5]=2;
			sudokuData::num[4][7]=6;
			sudokuData::num[5][0]=1;
			sudokuData::num[5][4]=7;
			sudokuData::num[5][5]=3;
			sudokuData::num[5][7]=9;
			sudokuData::num[6][0]=3;
			sudokuData::num[6][2]=6;
			sudokuData::num[6][8]=8;
			sudokuData::num[7][2]=1;
			sudokuData::num[7][7]=5;
			sudokuData::num[8][0]=5;
			sudokuData::num[8][1]=7;
			sudokuData::num[8][5]=1;
			sudokuData::num[8][6]=6;
			break;
        }
        case 2:
        {
			sudokuData::num[0][1]=3;
			sudokuData::num[0][2]=6;
			sudokuData::num[0][3]=8;
			sudokuData::num[0][5]=7;
			sudokuData::num[0][6]=9;
			sudokuData::num[1][0]=5;
			sudokuData::num[1][2]=8;
			sudokuData::num[1][5]=4;
			sudokuData::num[1][8]=7;
			sudokuData::num[2][1]=7;
			sudokuData::num[2][2]=9;
			sudokuData::num[2][3]=6;
			sudokuData::num[2][4]=5;
			sudokuData::num[3][4]=7;
			sudokuData::num[3][7]=2;
			sudokuData::num[4][1]=6;
			sudokuData::num[4][3]=1;
			sudokuData::num[4][5]=9;
			sudokuData::num[4][7]=3;
			sudokuData::num[5][1]=5;
			sudokuData::num[5][4]=8;
			sudokuData::num[6][4]=6;
			sudokuData::num[6][5]=1;
			sudokuData::num[6][6]=8;
			sudokuData::num[6][7]=7;
			sudokuData::num[7][0]=6;
			sudokuData::num[7][3]=7;
			sudokuData::num[7][6]=2;
			sudokuData::num[7][8]=5;
			sudokuData::num[8][2]=7;
			sudokuData::num[8][3]=9;
			sudokuData::num[8][5]=5;
			sudokuData::num[8][6]=1;
			sudokuData::num[8][7]=4;
			break;
        }
        case 3:
        {
			sudokuData::num[0][1]=8;
			sudokuData::num[0][2]=2;
			sudokuData::num[0][3]=4;
			sudokuData::num[0][6]=6;
			sudokuData::num[0][7]=5;
			sudokuData::num[1][5]=2;
			sudokuData::num[1][6]=4;
			sudokuData::num[1][8]=1;
			sudokuData::num[2][3]=5;
			sudokuData::num[2][4]=1;
			sudokuData::num[2][6]=2;
			sudokuData::num[2][8]=3;
			sudokuData::num[3][0]=5;
			sudokuData::num[3][6]=9;
			sudokuData::num[3][7]=2;
			sudokuData::num[3][8]=8;
			sudokuData::num[5][0]=2;
			sudokuData::num[5][1]=4;
			sudokuData::num[5][2]=3;
			sudokuData::num[5][8]=6;
			sudokuData::num[6][0]=6;
			sudokuData::num[6][2]=7;
			sudokuData::num[6][4]=9;
			sudokuData::num[6][5]=4;
			sudokuData::num[7][0]=3;
			sudokuData::num[7][2]=4;
			sudokuData::num[7][3]=1;
			sudokuData::num[8][1]=2;
			sudokuData::num[8][2]=8;
			sudokuData::num[8][5]=3;
			sudokuData::num[8][6]=1;
			sudokuData::num[8][7]=6;
			break;
        }
        case 4:
        {
			sudokuData::num[0][5]=7;
			sudokuData::num[0][6]=5;
			sudokuData::num[0][7]=3;
			sudokuData::num[1][0]=8;
			sudokuData::num[1][4]=2;
			sudokuData::num[1][5]=5;
			sudokuData::num[1][6]=6;
			sudokuData::num[2][3]=3;
			sudokuData::num[2][6]=2;
			sudokuData::num[2][8]=8;
			sudokuData::num[3][4]=6;
			sudokuData::num[3][6]=9;
			sudokuData::num[4][0]=9;
			sudokuData::num[4][1]=6;
			sudokuData::num[4][7]=8;
			sudokuData::num[4][8]=7;
			sudokuData::num[5][2]=4;
			sudokuData::num[5][4]=1;
			sudokuData::num[6][0]=2;
			sudokuData::num[6][2]=9;
			sudokuData::num[6][5]=6;
			sudokuData::num[7][2]=8;
			sudokuData::num[7][3]=2;
			sudokuData::num[7][4]=9;
			sudokuData::num[7][8]=6;
			sudokuData::num[8][1]=4;
			sudokuData::num[8][2]=7;
			sudokuData::num[8][3]=8;
			break;
        }
        case 5:
        {
            sudokuData::num[0][0]=4;
            sudokuData::num[0][3]=5;
            sudokuData::num[0][7]=6;
            sudokuData::num[0][8]=1;
            sudokuData::num[1][0]=3;
            sudokuData::num[1][5]=4;
            sudokuData::num[1][6]=7;
            sudokuData::num[2][1]=7;
            sudokuData::num[2][4]=9;
            sudokuData::num[3][0]=9;
            sudokuData::num[3][1]=4;
            sudokuData::num[3][3]=8;
            sudokuData::num[3][8]=7;
            sudokuData::num[4][2]=7;
            sudokuData::num[4][6]=4;
            sudokuData::num[5][0]=1;
            sudokuData::num[5][5]=5;
            sudokuData::num[5][7]=2;
            sudokuData::num[5][8]=9;
            sudokuData::num[6][4]=5;
            sudokuData::num[6][7]=9;
            sudokuData::num[7][2]=1;
            sudokuData::num[7][3]=7;
            sudokuData::num[7][8]=3;
            sudokuData::num[8][0]=2;
            sudokuData::num[8][1]=6;
            sudokuData::num[8][5]=9;
            sudokuData::num[8][8]=4;
            break;
        }
        default:
        {
            sudokuData::num[0][2]=4;
            sudokuData::num[0][7]=6;
            sudokuData::num[1][0]=5;
            sudokuData::num[1][2]=6;
            sudokuData::num[1][4]=2;
            sudokuData::num[1][8]=7;
            sudokuData::num[2][1]=9;
            sudokuData::num[2][3]=8;
            sudokuData::num[2][5]=5;
            sudokuData::num[3][0]=4;
            sudokuData::num[3][7]=8;
            sudokuData::num[3][8]=3;
            sudokuData::num[4][1]=5;
            sudokuData::num[4][2]=9;
            sudokuData::num[4][3]=7;
            sudokuData::num[4][5]=8;
            sudokuData::num[4][6]=4;
            sudokuData::num[4][7]=1;
            sudokuData::num[5][0]=3;
            sudokuData::num[5][1]=7;
            sudokuData::num[5][8]=9;
            sudokuData::num[6][3]=3;
            sudokuData::num[6][5]=7;
            sudokuData::num[6][7]=4;
            sudokuData::num[7][0]=9;
            sudokuData::num[7][4]=5;
            sudokuData::num[7][6]=8;
            sudokuData::num[7][8]=6;
            sudokuData::num[8][1]=4;
            sudokuData::num[8][6]=3;
            break;
        }
    }
}

void veryhardRandom(int nums)
{
	switch (nums)
    {
        case 0:
        {
            sudokuData::num[0][3]=7;
            sudokuData::num[0][5]=5;
            sudokuData::num[0][8]=8;
            sudokuData::num[1][4]=2;
            sudokuData::num[1][6]=5;
            sudokuData::num[1][7]=9;
            sudokuData::num[2][1]=4;
            sudokuData::num[2][3]=3;
            sudokuData::num[2][7]=2;
            sudokuData::num[3][2]=3;
            sudokuData::num[3][3]=9;
            sudokuData::num[3][4]=6;
            sudokuData::num[3][7]=7;
            sudokuData::num[3][8]=2;
            sudokuData::num[4][2]=6;
            sudokuData::num[4][3]=2;
            sudokuData::num[4][5]=1;
            sudokuData::num[4][6]=9;
            sudokuData::num[5][0]=2;
            sudokuData::num[5][1]=9;
            sudokuData::num[5][4]=3;
            sudokuData::num[5][5]=7;
            sudokuData::num[5][6]=8;
            sudokuData::num[6][1]=1;
            sudokuData::num[6][5]=3;
            sudokuData::num[6][7]=5;
            sudokuData::num[7][1]=6;
            sudokuData::num[7][2]=7;
            sudokuData::num[7][4]=1;
            sudokuData::num[8][0]=3;
            sudokuData::num[8][3]=8;
            sudokuData::num[8][5]=9;
            break;
        }
        case 1:
        {
			sudokuData::num[0][2]=6;
			sudokuData::num[0][5]=1;
			sudokuData::num[0][7]=8;
			sudokuData::num[1][0]=1;
			sudokuData::num[1][1]=7;
			sudokuData::num[1][5]=9;
			sudokuData::num[1][7]=6;
			sudokuData::num[2][3]=4;
			sudokuData::num[2][4]=6;
			sudokuData::num[2][5]=7;
			sudokuData::num[3][0]=6;
			sudokuData::num[3][1]=1;
			sudokuData::num[3][4]=4;
			sudokuData::num[3][6]=8;
			sudokuData::num[4][2]=2;
			sudokuData::num[4][6]=3;
			sudokuData::num[5][2]=5;
			sudokuData::num[5][4]=7;
			sudokuData::num[5][7]=9;
			sudokuData::num[5][8]=6;
			sudokuData::num[6][3]=2;
			sudokuData::num[6][4]=1;
			sudokuData::num[6][5]=5;
			sudokuData::num[7][1]=3;
			sudokuData::num[7][3]=6;
			sudokuData::num[7][7]=2;
			sudokuData::num[7][8]=8;
			sudokuData::num[8][1]=2;
			sudokuData::num[8][3]=7;
			sudokuData::num[8][6]=6;
			sudokuData::num[8][8]=5;
			break;
        }
        case 2:
        {
            sudokuData::num[0][4]=5;
			sudokuData::num[0][5]=8;
			sudokuData::num[0][6]=4;
			sudokuData::num[1][2]=8;
			sudokuData::num[1][3]=6;
			sudokuData::num[1][4]=3;
			sudokuData::num[1][5]=9;
			sudokuData::num[1][8]=5;
			sudokuData::num[2][1]=6;
			sudokuData::num[2][8]=1;
			sudokuData::num[3][0]=1;
			sudokuData::num[3][3]=8;
			sudokuData::num[3][6]=2;
			sudokuData::num[4][2]=5;
			sudokuData::num[4][6]=6;
			sudokuData::num[5][2]=7;
			sudokuData::num[5][5]=4;
			sudokuData::num[5][8]=9;
			sudokuData::num[6][0]=9;
			sudokuData::num[6][7]=3;
			sudokuData::num[7][0]=7;
			sudokuData::num[7][3]=9;
			sudokuData::num[7][4]=8;
			sudokuData::num[7][5]=1;
			sudokuData::num[7][6]=5;
			sudokuData::num[8][2]=1;
			sudokuData::num[8][3]=7;
			sudokuData::num[8][4]=4;
			break;
        }
        case 3:
        {
			sudokuData::num[0][2]=9;
			sudokuData::num[0][6]=1;
			sudokuData::num[1][0]=2;
			sudokuData::num[1][2]=8;
			sudokuData::num[1][3]=1;
			sudokuData::num[1][4]=9;
			sudokuData::num[2][1]=1;
			sudokuData::num[2][4]=2;
			sudokuData::num[2][6]=5;
			sudokuData::num[2][8]=4;
			sudokuData::num[3][1]=6;
			sudokuData::num[3][3]=2;
			sudokuData::num[3][4]=3;
			sudokuData::num[4][0]=9;
			sudokuData::num[4][2]=4;
			sudokuData::num[4][3]=5;
			sudokuData::num[4][5]=1;
			sudokuData::num[4][6]=6;
			sudokuData::num[4][8]=3;
			sudokuData::num[5][4]=6;
			sudokuData::num[5][5]=9;
			sudokuData::num[5][7]=7;
			sudokuData::num[6][0]=4;
			sudokuData::num[6][2]=6;
			sudokuData::num[6][4]=5;
			sudokuData::num[6][7]=1;
			sudokuData::num[7][4]=4;
			sudokuData::num[7][5]=6;
			sudokuData::num[7][6]=7;
			sudokuData::num[7][8]=5;
			sudokuData::num[8][2]=3;
			sudokuData::num[8][6]=9;
			break;
        }
        case 4:
        {
            sudokuData::num[0][2]=2;
            sudokuData::num[0][3]=5;
            sudokuData::num[0][5]=7;
            sudokuData::num[0][6]=1;
            sudokuData::num[0][8]=3;
            sudokuData::num[1][0]=1;
            sudokuData::num[1][2]=7;
            sudokuData::num[1][4]=8;
            sudokuData::num[2][0]=4;
            sudokuData::num[2][8]=2;
            sudokuData::num[3][1]=4;
            sudokuData::num[3][3]=7;
            sudokuData::num[3][8]=1;
            sudokuData::num[4][2]=8;
            sudokuData::num[4][3]=6;
            sudokuData::num[4][5]=5;
            sudokuData::num[4][6]=3;
            sudokuData::num[5][0]=3;
            sudokuData::num[5][5]=8;
            sudokuData::num[5][7]=5;
            sudokuData::num[6][0]=8;
            sudokuData::num[6][8]=7;
            sudokuData::num[7][4]=7;
            sudokuData::num[7][6]=9;
            sudokuData::num[7][8]=8;
            sudokuData::num[8][0]=9;
            sudokuData::num[8][2]=1;
            sudokuData::num[8][3]=8;
            sudokuData::num[8][5]=3;
            sudokuData::num[8][6]=5;
            break;
        }
        default:
        {
            sudokuData::num[0][0]=7;
            sudokuData::num[0][1]=4;
            sudokuData::num[0][6]=9;
            sudokuData::num[1][0]=3;
            sudokuData::num[1][7]=7;
            sudokuData::num[1][8]=6;
            sudokuData::num[2][3]=4;
            sudokuData::num[2][4]=7;
            sudokuData::num[2][5]=2;
            sudokuData::num[2][8]=3;
            sudokuData::num[3][1]=9;
            sudokuData::num[3][3]=8;
            sudokuData::num[3][4]=5;
            sudokuData::num[3][7]=2;
            sudokuData::num[4][1]=2;
            sudokuData::num[4][7]=3;
            sudokuData::num[5][1]=7;
            sudokuData::num[5][4]=6;
            sudokuData::num[5][5]=3;
            sudokuData::num[5][7]=4;
            sudokuData::num[6][0]=2;
            sudokuData::num[6][3]=5;
            sudokuData::num[6][4]=9;
            sudokuData::num[6][5]=8;
            sudokuData::num[7][0]=9;
            sudokuData::num[7][1]=5;
            sudokuData::num[7][8]=8;
            sudokuData::num[8][2]=7;
            sudokuData::num[8][7]=9;
            sudokuData::num[8][8]=4;
            break;
        }
    }
}
