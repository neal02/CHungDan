#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define MAX_SIZE_BOARD 60 
#define MAX_GAME_SPECIES 5

#include "item.h"

typedef struct player {
	int dicecount;
	int itemcount;
	int miniWincount;
	int fortunecount;
	int unfortunecount;
	int specialcount;
	int num;
	ItemQueue itemQueue;
}Player;

typedef struct listnode {
	Player* player1;
	Player* player2;
	int* isSpecial;
	int* isUnfortune;
	int* isFortune;
	struct ListNode* Beforelink;
	struct ListNode* Afterlink;
}ListNode;

typedef struct playernode {
	ListNode* player1;
	ListNode* player2;
	ListNode* head;
	ListNode* tail;
}PlayerNode;

void init_player(Player* player, int num) {
	player->num = num;
	player->itemcount = 0;
	player->dicecount = 0;
	player->miniWincount = 0;
	player->fortunecount = 0;
	player->specialcount = 0;
	player->unfortunecount = 0;
	init_Queue(&player->itemQueue);
	//printf("플레이어 %d 세팅 \n", player->num);
}

void init_PlayerNode(PlayerNode* board) {
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	board->head = newNode;
	board->head->Afterlink = board->head;
	board->head->Beforelink = board->head;
	board->tail = board->head;
	board->player1 = board->head;
	board->player2 = board->head;
	board->head->player1 = NULL;
	board->head->player2 = NULL;
	board->head->isSpecial = 0;
	board->head->isUnfortune = 0;
	board->head->isFortune = 0;
}

void insert_last(PlayerNode* board) {
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->Afterlink = NULL;
	newNode->Beforelink = board->tail;
	newNode->player1 = NULL;
	newNode->player2 = NULL;
	srand(time(NULL));
	newNode->isSpecial = 0;
	newNode->isUnfortune = 0;
	newNode->isFortune = 0;
	board->tail->Afterlink = newNode;
	board->tail = newNode;
}

void printBoardBend(PlayerNode* board) {
	ListNode* temp;
	int i = 0;
	for (temp = board->head; temp != board->tail->Afterlink; temp = temp->Afterlink) {
		i++;
		if (i == 2) {
			temp->isFortune = 1;
		}
		if (i == 9 || i == 4) {
			temp->isSpecial = 1;
		}
		if (i == 11) {
			temp->isUnfortune = 1;
		}
		if (i == 1) {
			if (temp->player1 != NULL && temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("▣ ");
			}
			else if (temp->player1 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("● ");
			}
			else if (temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("● ");
			}
			else if (temp->isSpecial != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				printf("□ ");
			}
			else if (temp->isUnfortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("□ ");
			}
			else if (temp->isFortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				printf("□ ");
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("□ ");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("\n");
		}
		else if (i == 2) {
			printf("\t\t\t");
			if (temp->player1 != NULL && temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("▣ ");
			}
			else if (temp->player1 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("● ");
			}
			else if (temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("● ");
			}
			else if (temp->isSpecial != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				printf("□ ");
			}
			else if (temp->isUnfortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("□ ");
			}
			else if (temp->isFortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				printf("□ ");
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("□ ");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		}
		else if (i > 1 && i < 12) {
			if (temp->player1 != NULL && temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("▣ ");
			}
			else if (temp->player1 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("● ");
			}
			else if (temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("● ");
			}
			else if (temp->isSpecial != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				printf("□ ");
			}
			else if (temp->isUnfortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("□ ");
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("□ ");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		}
		else {
			printf("\n\t\t\t\t\t  ");
			if (temp->player1 != NULL && temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("▣ ");
			}
			else if (temp->player1 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("● ");
			}
			else if (temp->player2 != NULL) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("● ");
			}
			else if (temp->isSpecial != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				printf("□ ");
			}
			else if (temp->isUnfortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("□ ");
			}
			else if (temp->isFortune != 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				printf("□ ");
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				printf("□ ");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("\n");
		}
	}
}

void printBoardLine(PlayerNode* board) {
	ListNode* temp;
	int i = 0;
	for (temp = board->tail; temp != board->head->Beforelink; temp = temp->Beforelink) {
		i++;
		if (i == 8 || i == 3) {
			temp->isSpecial = 1;
		}
		if (i == 1) {
			temp->isUnfortune = 1;
		}
		if (i == 10) {
			temp->isFortune = 1;
		}
		if (temp->player1 != NULL && temp->player2 != NULL) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("▣ ");
		}
		else if (temp->player1 != NULL) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			printf("● ");
		}
		else if (temp->player2 != NULL) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("● ");
		}
		else if (temp->isSpecial != 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			printf("□ ");
		}
		else if (temp->isUnfortune != 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("□ ");
		}
		else if (temp->isFortune != 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			printf("□ ");
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("□ ");
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	printf("\n");
}

void makeBoard(PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	for (int i = 0; i < 11; i++) {
		insert_last(board1);
	}
	for (int i = 0; i < 10; i++) {
		insert_last(board2);
	}
	for (int i = 0; i < 12; i++) {
		insert_last(board3);
	}
	for (int i = 0; i < 10; i++) {
		insert_last(board4);
	}
	for (int i = 0; i < 1; i++) {
		insert_last(board5);
	}

	ListNode* temp;
	board1->tail->Afterlink = board2->head->Afterlink;
	temp = board1->tail->Afterlink;
	temp->Beforelink = board1->tail;
	board2->head = board2->head->Afterlink;

	board2->tail->Afterlink = board3->head->Afterlink;
	temp = board3->head->Afterlink;
	temp->Beforelink = board2->tail;
	board3->head = board3->head->Afterlink;

	board3->tail->Afterlink = board4->head->Afterlink;
	temp = board3->tail->Afterlink;
	temp->Beforelink = board3->tail;
	board4->head = board4->head->Afterlink;

	board4->tail->Afterlink = board5->head->Afterlink;
	temp = board4->tail->Afterlink;
	temp->Beforelink = board4->tail;
	board5->head = board5->head->Afterlink;
}

void InputPlayer(PlayerNode* board, Player* player) {
	if (player->num == 1) {
		board->player1->player1 = player;
		/*srand(time(NULL));
		int i = rand() % 5 + 1;
		enqueue(&player->itemQueue, i);*/
	}
	else {
		board->player2->player2 = player;
		/*srand(time(NULL));
		int i = rand() % 5 + 1;
		enqueue(&player->itemQueue, i);*/
	}
}

void printBoard(PlayerNode* board1, PlayerNode* board2, PlayerNode* board3, PlayerNode* board4, PlayerNode* board5) {
	printf("\t\t\t");
	printBoardBend(board1);
	printf("\t\t\t");
	printBoardLine(board2);
	printf("\t\t\t");
	printBoardBend(board3);
	printf("\t\t\t");
	printBoardLine(board4);
	printf("\t\t\t");
	printBoardBend(board5);
	printf("\n");
}
