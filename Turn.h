#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "UI.h";
#include "BoardFunction.h"
#include "item.h"

#define MAX_SIZE_TURN 2

int isWin = 0;
int top = -1;
int turnStack[MAX_SIZE_TURN];
int dice1 = 6;
int dice2 = 6;
int diceitemId = 0;
int isbind1 = 0;
int isbind2 = 0;

void resultGame(Player* winplayer, Player* loseplayer) {
	printf("+---------------------------------------+\n");
	printf("|\t    [ W I N N E R ]\t\t|\n");
	printf("|\t\t\t\t\t|\n");
	printf("|\t우승자는 플레이어 %d 입니다.\t|\n", winplayer->num);
	printf("|\t    축하합니다 !\t\t|\n");
	printf("+---------------------------------------+\n\n");
	Sleep(2000);
	printf("+---------------------------------------+\n");
	if (winplayer->num == 1) {
		printf("|\t    [ R E S U L T ]\t\t|\n");
		printf("|\t\t\t\t\t|\n");
		printf("|\t     플레이어 %d 결과\t\t|\n", winplayer->num);
		if (loseplayer->dicecount < 10) {
			printf("|\t주사위 굴린 총 횟수 : %d\t\t|\n", winplayer->dicecount);
		}
		else {
			printf("|\t주사위 굴린 총 횟수 : %d\t|\n", winplayer->dicecount);
		}
		printf("|\t아이템 사용 횟수 : %d\t\t|\n", winplayer->itemcount);
		printf("|\t불행칸 도착 횟수 : %d\t\t|\n", winplayer->unfortunecount);
		printf("|\t스페셜칸 도착 횟수 : %d\t\t|\n", winplayer->specialcount);
		printf("|\t행운칸 도착 횟수 : %d\t\t|\n", winplayer->fortunecount);
		printf("|\t\t\t\t\t|\n");
		printf("|\t\t\t\t\t|\n");
		printf("|\t     플레이어 %d 결과\t\t|\n", loseplayer->num);
		if (loseplayer->dicecount < 10) {
			printf("|\t주사위 굴린 총 횟수 : %d\t\t|\n", loseplayer->dicecount);
		}
		else {
			printf("|\t주사위 굴린 총 횟수 : %d\t|\n", loseplayer->dicecount);
		}
		printf("|\t아이템 사용 횟수 : %d\t\t|\n", loseplayer->itemcount);
		printf("|\t불행칸 도착 횟수 : %d\t\t|\n", loseplayer->unfortunecount);
		printf("|\t스페셜칸 도착 횟수 : %d\t\t|\n", loseplayer->specialcount);
		printf("|\t행운칸 도착 횟수 : %d\t\t|\n", loseplayer->fortunecount);
		printf("|\t\t\t\t\t|\n");
		printf("+---------------------------------------+\n");
	}
	else {
		printf("|\t    [ R E S U L T ]\t\t|\n");
		printf("|\t\t\t\t\t|\n");
		printf("|\t플레이어 %d 승리 종료\t\t|\n", loseplayer->num);
		printf("|\t주사위 굴린 총 횟수 : %d\t\t|\n", loseplayer->dicecount);
		printf("|\t아이템 사용 횟수 : %d\t\t|\n", loseplayer->itemcount);
		printf("|\t불행칸 도착 횟수 : %d\t\t|\n", loseplayer->unfortunecount);
		printf("|\t스페셜칸 도착 횟수 : %d\t\t|\n", loseplayer->specialcount);
		printf("|\t행운칸 도착 횟수 : %d\t\t|\n", loseplayer->fortunecount);
		printf("|\t\t\t\t\t|\n");
		printf("|\t\t\t\t\t|\n");
		printf("|\t플레이어 %d 승리 종료\t\t|\n", winplayer->num);
		printf("|\t주사위 굴린 총 횟수 : %d\t\t|\n", winplayer->dicecount);
		printf("|\t아이템 사용 횟수 : %d\t\t|\n", winplayer->itemcount);
		printf("|\t불행칸 도착 횟수 : %d\t\t|\n", winplayer->unfortunecount);
		printf("|\t스페셜칸 도착 횟수 : %d\t\t|\n", winplayer->specialcount);
		printf("|\t행운칸 도착 횟수 : %d\t\t|\n", winplayer->fortunecount);
		printf("|\t\t\t\t\t|\n");
		printf("+---------------------------------------+\n");
	}
}

int is_empty_stack()
{
	return (top == -1);
}

int is_full_stack()
{
	return (top == (MAX_SIZE_TURN - 1));
}

int push_stack(int turn)
{
	turnStack[++top] = turn;
	return 0;
}

int pop_stack()
{
	return turnStack[top--];
}

void foward(PlayerNode* board, Player* player, int i) {
	for (int j = 0; j <= i; j++) {
		if (j == i) {
			InputPlayer(board, player);
		}
		else {
			if (player->num == 1) {
				board->player1->player1 = NULL;
				board->player1 = board->player1->Afterlink;
			}
			else if (player->num == 2) {
				board->player2->player2 = NULL;
				board->player2 = board->player2->Afterlink;
			}
		}
	}
}

void back(PlayerNode* board, Player* player, int i) {
	for (int j = 0; j <= i; j++) {
		if (j == i) {
			InputPlayer(board, player);
		}
		else {
			if (player->num == 1) {
				board->player1->player1 = NULL;
				board->player1 = board->player1->Beforelink;
			}
			else if (player->num == 2) {
				board->player2->player2 = NULL;
				board->player2 = board->player2->Beforelink;
			}
		}
	}
}

void printscreen(PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	printf("+---------------------------SNAKE-ROLL----------------+\n");
	printBoard(board1, board2, board3, board4, board5);
	printf("+----------------------------DICE-GAME----------------+\n");
}

void rollTurn(PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	srand(time(NULL));
	int i = rand() % 2;
	if (isbind1 == 1 && isbind2 == 1) {
		printf("\n\t\t\t두 플레이어 모두 속박\n");
		Sleep(1000);
		isbind1 = 0;
		isbind2 = 0;
		return NULL;
	}
	else if (isbind1 == 1) {
		printf("\n\t\t\t플레이어 1 속박\n");
		push_stack(2);
		Sleep(1000);
		isbind1 = 0;
		return NULL;
	}
	else if (isbind2 == 1) {
		printf("\n\t\t\t플레이어 2 속박\n");
		push_stack(1);
		Sleep(1000);
		isbind2 = 0;
		return NULL;
	}
	for (int n = 0; n < 3; n++) {
		printscreen(board1, board2, board3, board4, board5);
		printf("\n\t\t\t\t[ 1 ]");
		Sleep(200);
		printscreen(board1, board2, board3, board4, board5);
		printf("\n\t\t\t\t[ 2 ]");
		Sleep(200);
	}
	if (i == 0) {
		printscreen(board1, board2, board3, board4, board5);
		printf("\n\t\t\t\t[ 2 ]");
		Sleep(1000);
		push_stack(1);
		push_stack(2);
	}
	else {
		printscreen(board1, board2, board3, board4, board5);
		printf("\n\t\t\t\t[ 1 ]");
		Sleep(1000);
		push_stack(2);
		push_stack(1);
	}
}

void special(PlayerNode* board, Player* player, PlayerNode* board5) {
	player->specialcount++;
	srand(time(NULL));
	int i = rand() % 100 + 1;
	Player* tempPlayer1 = board->player1->player1;
	Player* tempPlayer2 = board->player2->player2;
	//i = 90;	//스페셜테스트
	if (i < 15) {
		printf("\n\t\t\t\t보드칸 추가\n");
		Sleep(1000);
		insert_last(board5);
	}
	else if (i < 30) {
		i = rand() % 3 + 1;
		printf("\n\t\t\t모든 플레이어 1~3칸 후진\n");
		Sleep(1000);
		back(board, tempPlayer1, i);
		back(board, tempPlayer2, i);
	}
	else if (i < 50) {
		i = rand() % 3 + 1;
		printf("\n\t\t\t모든 플레이어 1~3칸 전진\n");
		Sleep(1000);
		foward(board, tempPlayer1, i);
		foward(board, tempPlayer2, i);
	}
	else if (i < 70) {
		printf("\n\t\t\t모든 플레이어 아이템 추가.\n\n");
		srand(time(NULL));
		Sleep(1000);
		i = rand() % MAX_ITEM_SPECIES + 1;
		printf("\t\t\t플레이어1\n");
		enqueue(tempPlayer1, i);
		Sleep(1000);
		i = rand() % MAX_ITEM_SPECIES + 1;
		printf("\n\t\t\t플레이어2\n ");
		enqueue(tempPlayer2, i);
		Sleep(1000);
	}
	else if (i < 90) {
		int s1 = dequeue(&tempPlayer1->itemQueue);
		int s2 = dequeue(&tempPlayer2->itemQueue);
		if (s1 != 0 && s2 != 0) {
			printf("\n\t\t\t\t플레이어1\n");
			itemprint(s1);
			printf(" 이(가) 사라졌다.\n");
			printf("\n\t\t\t\t플레이어2\n");
			itemprint(s2);
			printf(" 이(가) 사라졌다.\n");
		}
		else if (s1 != 0) {
			printf("\n\t\t\t\t플레이어1\n");
			itemprint(s1);
			printf(" 이(가) 사라졌다.\n");
		}
		else if (s2 != 0) {
			printf("\n\t\t\t\t플레이어2\n");
			itemprint(s2);
			printf(" 이(가) 사라졌다.\n");
		}
		else {
			printf("\n\t\t\t아무런 일도 일어나지 않았다.\n");
		}
	}
	else if (i < 99) {
		int s1 = dequeue(&tempPlayer1->itemQueue);
		int s2 = dequeue(&tempPlayer2->itemQueue);
		printf("\n\t\t\t플레이어 아이템 교환\n");
		if (s1 != 0 && s2 != 0) {
			printf("\n\t\t\t\t플레이어1\n");
			enqueue(&board->player1->player1->itemQueue, s2);
			printf("\n\t\t\t\t플레이어2\n");
			enqueue(&board->player2->player2->itemQueue, s1);
		}
		else if (s1 != 0) {
			printf("\n\t\t\t\t플레이어1\n");
			enqueue(&board->player1->player1->itemQueue, s2);
		}
		else if (s2 != 0) {
			printf("\n\t\t\t\t플레이어2\n");
			enqueue(&board->player2->player2->itemQueue, s1);
		}
		else {
			printf("아무런 일도 일어나지 않았다.");
		}
	}
	else {
		printf("\n\t\t\t플레이어 둘 위치 똑같게\n");
		int n = rand() % 2 + 1;
		if (n == 1) {
			printf("\n\t\t\t\t플레이어 1의 위치로\n");
			board->player2->player2 = NULL;
			board->player2 = board->player1;
			board->player1->player2 = tempPlayer2;
		}
		else {
			printf("\n\t\t\t\t플레이어 2의 위치로\n");
			board->player1->player1 = NULL;
			board->player1 = board->player2;
			board->player2->player1 = tempPlayer1;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void Unfortune(PlayerNode* board, Player* player, PlayerNode* board5) {
	player->unfortunecount++;
	srand(time(NULL));
	int i = rand() % 100 + 1;
	//i = 80;	//불운 테스트
	Player* tempPlayer1 = board->player1->player1;
	Player* tempPlayer2 = board->player2->player2;
	if (i < 20) {
		printf("\t\t\t\t상대방 턴 한 번 더\n");
		if (player->num == 1) {
			pop_stack();
			push_stack(2);
			push_stack(2);
		}
		else if (player->num == 2) {
			pop_stack();
			push_stack(1);
			push_stack(1);
		}
	}
	else if (i < 40) {
		printf("\t\t\t\t아이템 모두 잃기\n");
		do {
			dequeue(&player->itemQueue);
		} while (dequeue(&player->itemQueue) != 0);
	}
	else if (i < 50) {
		printf("\t\t\t\t불운칸으로\n");
		ListNode* temp;
		if (player->num == 1) {
			temp = board->player1->Beforelink;
			for (; temp->isUnfortune != 1; temp = temp->Beforelink) {
				if (temp->Beforelink == temp) {
					board->player1->player1 = NULL;
					board->player1 = temp;
					board->player1->player1 = player;
					break;
				}
				board->player1->player1 = NULL;
				board->player1 = temp;
				board->player1->player1 = player;
			}
			board->player1->player1 = NULL;
			board->player1 = temp;
			board->player1->player1 = player;
		}
		else if (player->num == 2) {
			temp = board->player2->Beforelink;
			for (; temp->isUnfortune != 1; temp = temp->Beforelink) {
				if (temp->Beforelink == temp) {
					board->player2->player2 = NULL;
					board->player2 = temp;
					board->player2->player2 = player;
					break;
				}
				board->player2->player2 = NULL;
				board->player2 = temp;
				board->player2->player2 = player;
			}
			board->player2->player2 = NULL;
			board->player2 = temp;
			board->player2->player2 = player;
		}
	}
	else if (i < 70) {
		printf("\t\t\t\t다음턴 자신 속박\n");
		if (player->num == 1) {
			isbind1 = 1;
		}
		else if (player->num == 2) {
			isbind2 = 1;
		}
	}
	else if (i < 101) {
		printf("\t\t\t\t상대방 전진\n");
		i = rand() % 3 + 3;
		Sleep(1000);
		if (player->num == 1) {
			foward(board, tempPlayer2, i);
		}
		else if (player->num == 2) {
			foward(board, tempPlayer1, i);
		}
	}
	else {
		printf("");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void Fortune(PlayerNode* board, Player* player, PlayerNode* board5) {
	player->fortunecount++;
	srand(time(NULL));
	int i = rand() % 100 + 1;
	Player* tempPlayer1 = board->player1->player1;
	Player* tempPlayer2 = board->player2->player2;
	//i = 10;	//행운 테스트
	if (i < 50) {
		printf("\t\t\t\t아이템 획득\n");
		int itemid = rand() % MAX_ITEM_SPECIES + 1;
		enqueue(&player->itemQueue, itemid);
	}
	else if (i < 80) {
		printf("\t\t\t\t추가 전진\n");
		i = rand() % 3 + 1;
		Sleep(1000);
		if (player->num == 1) {
			foward(board, tempPlayer1, i);
		}
		else if (player->num == 2) {
			foward(board, tempPlayer2, i);
		}
	}
	else {
		i = rand() % 2 + 1;
		printf("\t\t\t보드칸 %d 추가 후 전진\n", i);
		for (int p = 0; p < i; p++) {
			insert_last(board5);
		}
		if (player->num == 1) {
			foward(board, tempPlayer1, i);
		}
		else if (player->num == 2) {
			foward(board, tempPlayer2, i);
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void rollDice(PlayerNode* board, Player* player, int whatdo, PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	srand(time(NULL));
	int i = 0;
	for (i = 0; i < 8; i++) {
		system("cls");
		int n = rand() % 6 + 1;
		printDiceImage(n);
		Sleep(300);
	}
	system("cls");
	if (player->num == 1) {
		if (diceitemId == 0) {
			i = rand() % dice1 + 1;
			dice1 = 6;
			printDiceImage(i);
		}
		else if (diceitemId == 2) {
			i = rand() % 3 + 4;
			printDiceImage(i);
		}
		else if (diceitemId == 3) {
			i = 5;
			printDiceImage(i);
		}
		else if (diceitemId == 4) {
			i = rand() % 8 + 3;
			printDiceImage(i);
		}
	}
	else if (player->num == 2) {
		if (diceitemId == 0) {
			i = rand() % dice2 + 1;
			dice2 = 6;
			printDiceImage(i);
		}
		else if (diceitemId == 2) {
			i = rand() % 3 + 4;
			printDiceImage(i);
		}
		else if (diceitemId == 3) {
			i = 5;
			printDiceImage(i);
		}
		else if (diceitemId == 4) {
			i = rand() % 8 + 3;
			printDiceImage(i);
		}
	}
	//i = 20; //테스트
	player->dicecount++;
	int itemId = rand() % MAX_ITEM_SPECIES + 1;
	Sleep(10);
	printf("\t\t\t\t주사위 %d \n\n", i);
	Sleep(1000);
	for (int j = 0; j <= i; j++) {
		if (player->num == 1) {
			if (j == i) {
				InputPlayer(board, player);
				printscreen(board1, board2, board3, board4, board5);
				if (whatdo == 3 && board->player1->isSpecial == 0 && board->player1->isUnfortune == 0 && board->player1->isFortune == 0) {
					//enqueue(&player->itemQueue, itemId);
				}
				else if (board->player1->isSpecial != 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
					printf("\t\t\t\t[ 스페셜 ]\n");
					Sleep(500);
					special(board, player, board5);
				}
				else if (board->player1->isUnfortune != 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					printf("\t\t\t\t[ 불운 ]\n");
					Sleep(500);
					Unfortune(board, player, board5);
				}
				else if (board->player1->isFortune != 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					printf("\t\t\t\t[ 행운 ]\n");
					Sleep(500);
					Fortune(board, player, board5);
				}
			}
			else {
				InputPlayer(board, player);
				printscreen(board1, board2, board3, board4, board5);
				Sleep(500);
				system("cls");
				board->player1->player1 = NULL;
				board->player1 = board->player1->Afterlink;
				if (board->player1 == NULL) {
					resultGame(player, board->player2->player2);
				}
			}
		}
		else if (player->num == 2) {
			if (j == i) {
				InputPlayer(board, player);
				printscreen(board1, board2, board3, board4, board5);
				if (whatdo == 3 && board->player2->isSpecial == 0 && board->player2->isUnfortune == 0 && board->player2->isFortune == 0) {
					//enqueue(&player->itemQueue, itemId);
					//printf("\t\t\t[ 일반 ]\n");
				}
				else if (board->player2->isSpecial == 1) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
					printf("\t\t\t\t[ 스페셜 ]\n");
					Sleep(500);
					special(board, player, board5);
				}
				else if (board->player2->isUnfortune != 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					printf("\t\t\t\t[ 불운 ]\n");
					Sleep(500);
					Unfortune(board, player, board5);
				}
				else if (board->player2->isFortune != 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					printf("\t\t\t\t[ 행운 ]\n");
					Sleep(500);
					Fortune(board, player, board5);
				}
			}
			else {
				InputPlayer(board, player);
				printscreen(board1, board2, board3, board4, board5);
				Sleep(500);
				system("cls");
				board->player2->player2 = NULL;
				board->player2 = board->player2->Afterlink;
				if (board->player2 == NULL) {
					resultGame(player, board->player1->player1);
				}
			}
		}
	}
}

void whatUseItem(PlayerNode* board, Player* player, int itemId, PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	int i = 0;
	player->itemcount++;
	srand(time(NULL));
	Player* tempPlayer1 = board->player1->player1;
	Player* tempPlayer2 = board->player2->player2;
	if (itemId == 1) {
		printf("\n\t\t\t시간 왜곡를 사용합니다.\n"); //플레이어 한 턴 추가
		rollDice(board, player, 2, board1, board2, board3, board4, board5);
		push_stack(player->num);
	}
	else if (itemId == 2) {
		printf("\n\t\t\t4-6 주사위를 사용합니다.\n");
		diceitemId = 2;
		rollDice(board, player, 2, board1, board2, board3, board4, board5);
	}
	else if (itemId == 3) {
		printf("\n\t\t\t5 확정 주사위를 사용합니다.\n");
		diceitemId = 3;
		rollDice(board, player, 2, board1, board2, board3, board4, board5);
	}
	else if (itemId == 4) {
		printf("\n\t\t\t-4~8 주사위를 사용합니다.\n");
		i = rand() % 3;
		if (i < 2) {
			diceitemId = 4;
			rollDice(board, player, 2, board1, board2, board3, board4, board5);
		}
		else {
			i = (rand() % 4 + 1) + (-1);
			printf("\n\t\t\t%d 만큼 후퇴합니다.\n", -1 * i);
			back(board, player, i);
		}
	}
	else if (itemId == 5) {
		i = rand() % 6 + 1;
		printf("\n\t\t\t상대방 플레이어 %d 후퇴\n", i);
		Sleep(1000);
		if (player->num == 1) {
			back(board, tempPlayer2, i);
		}
		else if (player->num == 2) {
			back(board, tempPlayer1, i);
		}
	}
	else if (itemId == 6) {
		printf("\n\t\t3개 모으고 사용시 게임 승리\n");
		ItemQueue* citem = &player->itemQueue;
		int fiveitem = 0;
		if (player->num == 1) {
			for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
				if (player->itemQueue.item[i] == 6) {
					fiveitem++;
					printf("%d\n", fiveitem);
				}
			}
		}
		else if (player->num == 2) {
			for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
				if (player->itemQueue.item[i] == 6) {
					fiveitem++;
					printf("%d\n", fiveitem);
				}
			}
		}
		if (fiveitem >= 3) {
			printf("\t\t\t게임 승리\n");
			isWin = 1;
		}
		else {
			printf("\t\t\t아이템 부족\n");
		}
	}
	else if (itemId == 7) {
		printf("\t\t다음 상대방의 일반 주사위 1~3 주사위로 대체\n");
		if (player->num == 1) {
			dice2 = 3;
		}
		else if (player->num == 2) {
			dice1 = 3;
		}
		rollDice(board, player, 3, board1, board2, board3, board4, board5);
	}
	else if (itemId == 8) {
		if (player->num == 1) {
			printf("\t\t\t플레이어 2 속박\n");
			isbind2 = 1;
		}
		else if (player->num == 2) {
			printf("\t\t\t플레이어 1 속박\n");
			isbind1 = 1;
		}
	}
	Sleep(1000);
	diceitemId = 0;
}

void UseItem(PlayerNode* board, Player* player, PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	int itemId = dequeue(&player->itemQueue);
	if (itemId == 0) {
		printf("\t\t\t사용할 아이템이 없습니다.\n");
		rollDice(board, player, 3, board1, board2, board3, board4, board5);
	}
	else {
		whatUseItem(board, player, itemId, board1, board2, board3, board4, board5);
	}
}

void CheckItem(Player* player) {
	ItemQueue tempQ = player->itemQueue;
	if (is_empty_queue(&tempQ)) {
		printf("\t\t\t아이템이 없습니다.");
	}
	else {
		for (int i = (&tempQ)->front + 1; i != tempQ.rear + 1; i++) {
			itemprint(tempQ.item[i]);
			i = i % MAX_QUEUE_SIZE;
			printf("\n");
		}
	}
}

void TurnMove(PlayerNode* board, Player* player, PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	int whatdo;
	while (1) {
		printf("\n\t1: 아이템 확인. 2: 아이템 사용. 3: 주사위 굴리기 >> ");
		scanf("%d", &whatdo);
		if (whatdo == 1) {
			printf("\n");
			CheckItem(player);
			printf("\n\t\t\t다시 입력해주세요.\n");
			//break;
		}
		else if (whatdo == 2) {
			UseItem(board, player, board1, board2, board3, board4, board5);
			break;
		}
		else if (whatdo == 3) {
			rollDice(board, player, 3, board1, board2, board3, board4, board5);
			break;
		}
		else {
			printf("\t\t\t다시 입력해주세요.\n");
			while (getchar() != '\n');
			break;
		}
	}
}

