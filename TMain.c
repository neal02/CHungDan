#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#include "Turn.h"
#include "UI.h"
#include "MiniGame.h"

int main() {
	int initialdo = 0;
	int ruleback = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PlayerNode* board1 = (PlayerNode*)malloc(sizeof(PlayerNode));
	PlayerNode* board2 = (PlayerNode*)malloc(sizeof(PlayerNode));
	PlayerNode* board3 = (PlayerNode*)malloc(sizeof(PlayerNode));
	PlayerNode* board4 = (PlayerNode*)malloc(sizeof(PlayerNode));
	PlayerNode* board5 = (PlayerNode*)malloc(sizeof(PlayerNode));
	Player* player1 = (Player*)malloc(sizeof(Player));
	Player* player2 = (Player*)malloc(sizeof(Player));
	init_player(player1, 1);
	init_player(player2, 2);
	init_PlayerNode(board1);
	init_PlayerNode(board2);
	init_PlayerNode(board3);
	init_PlayerNode(board4);
	init_PlayerNode(board5);

	makeBoard(board1, board2, board3, board4, board5);

	board1->head->player1 = player1;
	board1->head->player2 = player2;
	while (1) {
		system("cls");
		printtitle();
		printf("\t\t\t\t\t     1. ���ӽ���\n\t\t\t\t\t     2. ��Ģ����\n\t\t\t\t\t     3. ��������\n\t\t\t\t\t     �Է� >> ");
		scanf("%d", &initialdo);
		Sleep(500);
		if (initialdo == 1) {
			while (1) {
				printscreen(board1, board2, board3, board4, board5);
				rollTurn(board1, board2, board3, board4, board5);
				while (1) {
					if (turnStack[top] == 1) {
						printscreen(board1, board2, board3, board4, board5);
						printf("\n\t\t\t1�� �÷��̾� ����");
						TurnMove(board1, player1, board1, board2, board3, board4, board5);
						if (isWin == 1) {
							system("cls");
							resultGame(player1, player2);
							break;
						}
						pop_stack();
					}
					else if (turnStack[top] == 2) {
						printscreen(board1, board2, board3, board4, board5);
						printf("\n\t\t\t2�� �÷��̾� ����");
						TurnMove(board1, player2, board1, board2, board3, board4, board5);
						if (isWin == 1) {
							system("cls");
							resultGame(player2, player1);
							break;
						}
						pop_stack();
					}
					Sleep(1000);
					if (top == -1) {
						printscreen(board1, board2, board3, board4, board5);
						printf("\n\t\t\t�� ����\n\n");
						Sleep(1000);
						printf("\n\t\t\t�̴ϰ��� ����\n\n");
						Sleep(2000);
						system("cls");
						PlayMiniGame(player1, player2);
						Sleep(1000);
						break;
					}
				}
				if (isWin == 1) {
					break;
				}
			}
		}
		else if (initialdo == 2) {
			printRule();
			printf("\t\t\t������ ������ ������ 1��\n\t\t\t�ڷ� ������ �ƹ� ���ڸ� �Է��ϼ��� ,,, ");
			scanf("%d", &ruleback);
			if (ruleback == 1) {
				printfitem();
				printf("\t\t\t�ڷ� ������ �ƹ� ���ڸ� �Է��ϼ��� ,,, ");
				scanf("%d", &ruleback);
			}
		}
		else if (initialdo == 3) {
			break;
		}
		else {
			printf("\n\t\t\t�ٽ� �Է����ּ���.");
			while (getchar() != '\n');
			Sleep(1000);
		}
		if (isWin == 1) {
			break;
		}
	}
}