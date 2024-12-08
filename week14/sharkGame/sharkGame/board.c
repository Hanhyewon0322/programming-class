//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i, pos;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
    srand(time(NULL)); //���� �ʱ�ȭ 
    
    for (i=0;i<N_COINPOS;i++)//����  
    {
    	while(1)
    	{
    		pos = rand() % N_BOARD;//������ ��ġ 
    		if (board_coin[pos]==0)//���� ������ 
    		{
    			board_coin[pos]=rand() % MAX_COIN+1;
    			break;
			}
		}
	}
   
    
    return N_COINPOS;
}

int board_getSharkPosition(void)
{
    return shark_position;
}

// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int step = rand () % MAX_SHARKSTEP + 1;
	int original_pos = shark_position;
	shark_position += step;
	
	if (shark_position >= 0 && shark_position < N_BOARD)
	{
		int i;
		for (i = original_pos +1; i<=shark_position;i++){
			if (i>=0&& i <N_BOARD){
				board_status[i] = BOARDSTATUS_NOK;
			}
		}

	} 
	
	return shark_position; 

}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
