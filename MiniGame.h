#pragma once

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#include "item.h"
#include "UI.h"

#define MAX_BOXQUEUE 4
#define MAX_DEQUE_SIZE 5
#define MAX_STACK_SIZE 10

typedef struct data {
	int result;
}Data;

typedef struct heaptype {
	int heap_size;
	Data heap[100];
}HeapType;

typedef struct BoxQueue {
	int box[MAX_BOXQUEUE];
	int front;
	int rear;
}BoxQueue;

typedef struct deque {
	int data[MAX_DEQUE_SIZE];
	int front, rear;
} Deque;

typedef struct treeNode {
	int data;
	struct treeNode* left;
	struct treeNode* right;
} TreeNode;

typedef struct stack {
	int data[MAX_STACK_SIZE];
	int top;
}Stack;

void countDown() {
	system("cls");
	for (int i = 3; i > 0; i--) {
		printf("\t\t\t\tCOUNTDOWN\n\n");
		printDiceImage(i);
		Sleep(1000);
		system("cls");
	}
}

void initDeque(Deque* d) {
	d->front = 0;
	d->rear = 0;
}

int isEmpty(Deque* d) {
	return (d->front == d->rear);
}

int isFull(Deque* d) {
	return ((d->rear + 1) % MAX_DEQUE_SIZE == d->front);
}

void addRear(Deque* d, int n) {
	int m = isFull(d);
	if (m == 1) {
		return 0;
	}
	d->rear = (d->rear + 1) % MAX_DEQUE_SIZE;
	d->data[d->rear] = n;
}

void addFront(Deque* d, int n) {
	if (isFull(d) == 1) {
		return 0;
	}
	d->data[d->front] = n;
	d->front = (d->front + MAX_DEQUE_SIZE - 1) % MAX_DEQUE_SIZE;
}

int removeFront(Deque* d) {
	int m = isEmpty(d);
	if (m == 1) {
		return 0;
	}
	d->front = (d->front + 1) % MAX_DEQUE_SIZE;
	return d->data[d->front];
}

int removeRear(Deque* d) {
	int m = isEmpty(d);
	if (m == 1) {
		return 0;
	}
	int ret = d->data[d->rear];
	d->rear = (d->rear + MAX_DEQUE_SIZE - 1) % MAX_DEQUE_SIZE;
	return ret;
}

TreeNode* makeTree() {

	TreeNode* tr15 = (TreeNode*)malloc(sizeof(TreeNode));
	srand(time(NULL));
	int num15 = (rand() % 10) + 1;
	tr15->data = num15;
	tr15->left = NULL;
	tr15->right = NULL;

	TreeNode* tr14 = (TreeNode*)malloc(sizeof(TreeNode));

	int num14 = (rand() % 10) + 1;
	tr14->data = num14;
	tr14->left = NULL;
	tr14->right = NULL;

	TreeNode* tr13 = (TreeNode*)malloc(sizeof(TreeNode));

	int num13 = (rand() % 10) + 1;
	tr13->data = num13;
	tr13->left = NULL;
	tr13->right = NULL;

	TreeNode* tr12 = (TreeNode*)malloc(sizeof(TreeNode));

	int num12 = (rand() % 10) + 1;
	tr12->data = num12;
	tr12->left = NULL;
	tr12->right = NULL;

	TreeNode* tr11 = (TreeNode*)malloc(sizeof(TreeNode));

	int num11 = (rand() % 10) + 1;
	tr11->data = num11;
	tr11->left = NULL;
	tr11->right = NULL;

	TreeNode* tr10 = (TreeNode*)malloc(sizeof(TreeNode));

	int num10 = (rand() % 10) + 1;
	tr10->data = num10;
	tr10->left = NULL;
	tr10->right = NULL;

	TreeNode* tr9 = (TreeNode*)malloc(sizeof(TreeNode));

	int num9 = (rand() % 10) + 1;
	tr9->data = num9;
	tr9->left = NULL;
	tr9->right = NULL;

	TreeNode* tr8 = (TreeNode*)malloc(sizeof(TreeNode));

	int num8 = (rand() % 10) + 1;
	tr8->data = num8;
	tr8->left = NULL;
	tr8->right = NULL;

	TreeNode* tr7 = (TreeNode*)malloc(sizeof(TreeNode));

	int num7 = (rand() % 10) + 1;
	tr7->data = num7;
	tr7->left = tr14;
	tr7->right = tr15;

	TreeNode* tr6 = (TreeNode*)malloc(sizeof(TreeNode));

	int num6 = (rand() % 10) + 1;
	tr6->data = num6;
	tr6->left = tr12;
	tr6->right = tr13;

	TreeNode* tr5 = (TreeNode*)malloc(sizeof(TreeNode));

	int num5 = (rand() % 10) + 1;
	tr5->data = num5;
	tr5->left = tr10;
	tr5->right = tr11;

	TreeNode* tr4 = (TreeNode*)malloc(sizeof(TreeNode));

	int num4 = (rand() % 10) + 1;
	tr4->data = num4;
	tr4->left = tr8;
	tr4->right = tr9;

	TreeNode* tr3 = (TreeNode*)malloc(sizeof(TreeNode));

	int num3 = (rand() % 10) + 1;
	tr3->data = num3;
	tr3->left = tr6;
	tr3->right = tr7;

	TreeNode* tr2 = (TreeNode*)malloc(sizeof(TreeNode));

	int num2 = (rand() % 10) + 1;
	tr2->data = num2;
	tr2->left = tr4;
	tr2->right = tr5;

	TreeNode* tr1 = (TreeNode*)malloc(sizeof(TreeNode));
	int num1 = (rand() % 10) + 1;
	tr1->data = num1;
	tr1->left = tr2;
	tr1->right = tr3;

	return tr1;
}

void printTree(TreeNode* root) {
	TreeNode* tr2 = root->left;
	TreeNode* tr3 = root->right;
	TreeNode* tr4 = tr2->left;
	TreeNode* tr5 = tr2->right;
	TreeNode* tr6 = tr3->left;
	TreeNode* tr7 = tr3->right;
	TreeNode* tr8 = tr4->left;
	TreeNode* tr9 = tr4->right;
	TreeNode* tr10 = tr5->left;
	TreeNode* tr11 = tr5->right;
	TreeNode* tr12 = tr6->left;
	TreeNode* tr13 = tr6->right;
	TreeNode* tr14 = tr7->left;
	TreeNode* tr15 = tr7->right;

	printf("\n\n         ------------------------------[Tree]-------------------------------\n\n");
	printf("\t\t\t\t\t[%2d]\n\n", root->data);
	printf("\t\t\t    [%2d]\t\t    [%2d]\n\n", tr2->data, tr3->data);
	printf("\t\t     [%2d]\t [%2d]        [%2d]\t  [%2d]\n\n", tr4->data, tr5->data, tr6->data, tr7->data);
	printf("\t       [%2d]   [%2d]   [%2d]    [%2d] [%2d]   [%2d]    [%2d]    [%2d]", tr8->data, tr9->data, tr10->data, tr11->data, tr12->data, tr13->data, tr14->data, tr15->data);
	Sleep(5000);
}

void printDeque(Deque* d) {
	if (isEmpty(d) == 1) {
		printf("\n\n\n\n\t\t덱이 비어있습니다.");
		Sleep(2000);
		return 0;
	}
	int num = d->front;
	printf("\n\n\n\t\t");
	do {
		num = (num + 1) % MAX_DEQUE_SIZE;
		printf("[%2d] ", d->data[num]);
		if (num == d->rear) {
			break;
		}
	} while (num != d->front);
	printf("\n");
}

int treeMiniGame(Player* player) {
	countDown();
	int score = 0;
	int select;
	int which;
	TreeNode* root = makeTree();
	Deque* playerDeq = (Deque*)malloc(sizeof(Deque));
	initDeque(playerDeq);

	TreeNode* playerSel = root;
	addRear(playerDeq, playerSel->data);

	while (TRUE) {
		if (isFull(playerDeq) == 1) {
			break;
		}
		system("cls");
		printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t 1. 덱 상태 확인 \t\t|\n");
		printf("|\t\t 2. 트리 확인    \t\t|\n");
		printf("|\t\t 3. 숫자 고르기  \t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");

		printf("숫자를 입력해주십시오 >> ");
		scanf("%d", &select);
		if (select == 1) {
			printDeque(playerDeq);
			Sleep(2500);
		}
		else if (select == 2) {
			printTree(root);
		}
		else if (select == 3) {
			system("cls");
			printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
			printf("|\t\t             \t\t\t|\n");
			printf("|\t\t             \t\t\t|\n");
			printf("|\t\t   [%2d] [%2d]   \t\t\t|\n", playerSel->left->data, playerSel->right->data);
			printf("|\t\t                 \t\t|\n");
			printf("|\t\t                 \t\t|\n");
			printf("|\t\t 1. LEFT         \t\t|\n");
			printf("|\t\t 2. RIGHT        \t\t|\n");
			printf("|\t\t             \t\t\t|\n");
			printf("|\t\t             \t\t\t|\n");
			printf("+-----------------------------------------------+\n\n");
			printf("왼쪽과 오른쪽 중 하나를 선택하세요 >> ");
			scanf("%d", &select);
			if (select == 1) {
				playerSel = playerSel->left;
				system("cls");
				printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t  1. 덱의 앞에 넣기  \t\t|\n");
				printf("|\t\t  2. 덱의 뒤에 넣기  \t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("+-----------------------------------------------+\n\n");
				printf("1번과 2번 중 하나를 선택하세요 >> ");
				scanf("%d", &which);
				if (which == 1) {
					addFront(playerDeq, playerSel->data);
				}
				else if (which == 2) {
					addRear(playerDeq, playerSel->data);
				}
				else {
					system("cls");
					printf("\n\n\n\n\t\t잘못된 입력입니다.");
					Sleep(2000);
					continue;
				}
			}
			else if (select == 2) {
				playerSel = playerSel->right;
				system("cls");
				printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t  1. 덱의 앞에 넣기  \t\t|\n");
				printf("|\t\t  2. 덱의 뒤에 넣기  \t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("|\t\t             \t\t\t|\n");
				printf("+-----------------------------------------------+\n\n");
				printf("1번과 2번 중 하나를 선택하세요 >> ");
				scanf("%d", &which);
				if (which == 1) {
					addFront(playerDeq, playerSel->data);
				}
				else if (which == 2) {
					addRear(playerDeq, playerSel->data);
				}
				else {
					system("cls");
					printf("\n\n\n\n\t\t잘못된 입력입니다.");
					Sleep(2000);
					continue;
				}
			}
			else {
				system("cls");
				printf("\n\n\n\n\t\t잘못된 입력입니다.");
				while (getchar() != '\n');
				Sleep(2000);
				continue;
			}
		}
		else {
			continue;
		}
	}

	int s[4];
	int i = 0;
	int num;

	while (TRUE) {
		if (isEmpty(playerDeq) == 1) {
			break;
		}
		system("cls");
		printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
		printDeque(playerDeq);
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t 1. 덱의 앞에서 빼기 \t\t|\n");
		printf("|\t\t 2. 덱의 뒤에서 빼기 \t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		if (i == 0) {
			printf("|\t    [  ] - [  ] + [  ] * [  ]\t\t|\n");
		}
		else if (i == 1) {
			printf("|\t    [%2d] - [  ] + [  ] * [  ]\t\t|\n", s[0]);
		}
		else if (i == 2) {
			printf("|\t    [%2d] - [%2d] + [  ] * [  ]\t\t|\n", s[0], s[1]);
		}
		else if (i == 3) {
			printf("|\t    [%2d] - [%2d] + [%2d] * [  ]\t\t|\n", s[0], s[1], s[2]);
		}
		printf("+-----------------------------------------------+\n\n");
		printf("1번과 2번 중 하나를 선택하세요 >> ");
		scanf("%d", &which);
		if (which == 1) {
			num = removeFront(playerDeq);
			s[i] = num;
			printf("\n\n[%d]가 빠졌습니다.\n", s[i]);
			Sleep(1000);
			i++;
		}
		else if (which == 2) {
			num = removeRear(playerDeq);
			s[i] = num;
			printf("\n\n[%d]가 빠졌습니다.\n", s[i]);
			Sleep(1000);
			i++;
		}
		else {
			system("cls");
			printf("\n\n\n\n\t\t잘못된 입력입니다.");
			Sleep(1500);
			continue;
		}
	}
	score = s[0] - s[1] + s[2] * s[3];
	system("cls");
	printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t  %d - %d + %d * %d  \t\t|\n", s[0], s[1], s[2], s[3]);
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t     SCORE = %d      \t\t|\n", score);
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t             \t\t\t|\n");
	printf("+-----------------------------------------------+\n\n");
	Sleep(3000);
	free(playerDeq);
	return score;
}

void initStack(Stack* s) {
	s->top = -1;
}

int stackEmpty(Stack* s) {
	return (s->top == -1);
}

int stackFull(Stack* s) {
	return (s->top == MAX_STACK_SIZE - 1);
}

void push(Stack* s, int n) {
	int i = stackFull(s);
	if (i == 1) {
		return 0;
	}
	s->top++;
	s->data[s->top] = n;
}

int pop(Stack* s) {
	int i = stackEmpty(s);
	if (i == 1) {
		return 0;
	}
	int n = s->data[s->top];
	top--;
	return n;
}

void makeBurgur(Stack* s, int i) {
	switch (i) {
	case 0: //불고기버거
		push(s, 0);
		push(s, 2);
		push(s, 3);
		push(s, 4);
		break;
	case 1: //치즈버거
		push(s, 4);
		push(s, 0);
		push(s, 1);
		push(s, 3);
		push(s, 7);
		break;
	case 2: //더블 불고기 버거
		push(s, 0);
		push(s, 1);
		push(s, 0);
		push(s, 4);
		push(s, 2);
		push(s, 3);
		break;
	case 3: //치킨 버거
		push(s, 3);
		push(s, 7);
		push(s, 5);
		push(s, 4);
		break;
	case 4: //새우버거
		push(s, 6);
		push(s, 3);
		push(s, 4);
		push(s, 7);
		break;
	}
}

void printRecipe(int n) {
	switch (n) {
	case 0: //불고기버거
		system("cls");
		printf("+-------------------[Recipe]--------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t     토마토  \t\t\t|\n");
		printf("|\t\t     양상추  \t\t\t|\n");
		printf("|\t\t       양파  \t\t\t|\n");
		printf("|\t\t       패티  \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		break;
	case 1: //치즈버거
		system("cls");
		printf("+-------------------[Recipe]--------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t       피클  \t\t\t|\n");
		printf("|\t\t     양상추  \t\t\t|\n");
		printf("|\t\t       치즈  \t\t\t|\n");
		printf("|\t\t       패티  \t\t\t|\n");
		printf("|\t\t     토마토  \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		break;
	case 2: //더블 불고기 버거
		system("cls");
		printf("+-------------------[Recipe]--------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t     양상추  \t\t\t|\n");
		printf("|\t\t       양파  \t\t\t|\n");
		printf("|\t\t     토마토  \t\t\t|\n");
		printf("|\t\t       패티  \t\t\t|\n");
		printf("|\t\t       치즈  \t\t\t|\n");
		printf("|\t\t       패티  \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		break;
	case 3: //치킨 버거
		system("cls");
		printf("+-------------------[Recipe]--------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t     토마토  \t\t\t|\n");
		printf("|\t\t   치킨패티  \t\t\t|\n");
		printf("|\t\t       피클  \t\t\t|\n");
		printf("|\t\t     양상추  \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		break;
	case 4: //새우버거
		system("cls");
		printf("+-------------------[Recipe]--------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t       피클  \t\t\t|\n");
		printf("|\t\t     토마토  \t\t\t|\n");
		printf("|\t\t     양상추  \t\t\t|\n");
		printf("|\t\t   새우패티  \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		break;
	}
}

void printStack(Stack* s, Player* player) {
	if (stackEmpty(s) == 1) {
		printf("아직 재료를 쌓지 않았습니다.\n");
		Sleep(1000);
		return 0;
	}
	system("cls");
	printf("+-------------------[PLAYER&d]------------------+\n", player->num);
	printf("|\t\t             \t\t\t|\n");
	for (int i = s->top; i >= 0; i--) {
		if (s->data[i] == 0) {
			printf("|\t\t       패티  \t\t\t|\n");
		}
		else if (s->data[i] == 1) {
			printf("|\t\t       치즈  \t\t\t|\n");
		}
		else if (s->data[i] == 2) {
			printf("|\t\t       양파  \t\t\t|\n");
		}
		else if (s->data[i] == 3) {
			printf("|\t\t     양상추  \t\t\t|\n");
		}
		else if (s->data[i] == 4) {
			printf("|\t\t     토마토  \t\t\t|\n");
		}
		else if (s->data[i] == 5) {
			printf("|\t\t   치킨패티  \t\t\t|\n");
		}
		else if (s->data[i] == 6) {
			printf("|\t\t   새우패티  \t\t\t|\n");
		}
		else if (s->data[i] == 7) {
			printf("|\t\t       피클  \t\t\t|\n");
		}
	}
	printf("|\t\t             \t\t\t|\n");
	printf("+-----------------------------------------------+\n\n");
	Sleep(2500);
}

int stackGame(Player* player) {
	int select;
	int score = 0;
	int wrongCount = 0;
	Stack* burgur = (Stack*)malloc(sizeof(Stack));
	Stack* playerS = (Stack*)malloc(sizeof(Stack));
	initStack(burgur);
	initStack(playerS);

	srand(time(NULL));
	int r = rand() % 5;
	makeBurgur(burgur, r);

	while (TRUE) {
		system("cls");
		printf("+-------------------[PLAYER&d]------------------+\n", player->num);
		printf("|\t\t  [버거 주문서]  \t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		if (r == 0) {
			printf("|\t\t  불고기 버거\t\t\t|\n");
		}
		else if (r == 1) {
			printf("|\t\t   치즈 버거\t\t\t|\n");
		}
		else if (r == 2) {
			printf("|\t\t   더블 불고기 버거\t\t|\n");
		}
		else if (r == 3) {
			printf("|\t\t   치킨 버거\t\t\t|\n");
		}
		else if (r == 4) {
			printf("|\t\t   새우 버거\t\t\t|\n");
		}
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		printf("1. 레시피 확인 2. 버거 제작\n\n");
		printf("행동을 선택하세요 >> ");
		scanf("%d", &select);
		if (select == 1) {
			printRecipe(r);
		}
		else if (select == 2) {
			break;
		}
		else {
			continue;
		}
	}
	while (TRUE) {
		system("cls");
		printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t1. 상태 확인 \t\t\t|\n");
		printf("|\t\t2. 재료 쌓기 \t\t\t|\n");
		printf("|\t\t3. 버거 완성 \t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		printf("행동을 선택하세요 >> ");
		scanf("%d", &select);
		if (select == 1) {
			printStack(playerS, player);
		}
		else if (select == 2) {
			if (stackFull(playerS) == 1) {
				printf("더 이상 쌓을 수 없습니다. ");
				Sleep(1500);
				continue;
			}
			system("cls");
			printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
			printf("|\t\t             \t\t\t|\n");
			printf("|\t\t      패티(0)\t\t\t|\n");
			printf("|\t\t      치즈(1)\t\t\t|\n");
			printf("|\t\t      양파(2)\t\t\t|\n");
			printf("|\t\t    양상추(3)\t\t\t|\n");
			printf("|\t\t    토마토(4)\t\t\t|\n");
			printf("|\t\t  치킨패티(5)\t\t\t|\n");
			printf("|\t\t  새우패티(6)\t\t\t|\n");
			printf("|\t\t      피클(7)\t\t\t|\n");
			printf("|\t\t             \t\t\t|\n");
			printf("+-----------------------------------------------+\n\n");
			printf("재료를 선택하세요 >> ");
			scanf("%d", &select);
			if (select == 0) {
				push(playerS, 0);
			}
			else if (select == 1) {
				push(playerS, 1);
			}
			else if (select == 2) {
				push(playerS, 2);
			}
			else if (select == 3) {
				push(playerS, 3);
			}
			else if (select == 4) {
				push(playerS, 4);
			}
			else if (select == 5) {
				push(playerS, 5);
			}
			else if (select == 6) {
				push(playerS, 6);
			}
			else if (select == 7) {
				push(playerS, 7);
			}
			else {
				continue;
			}
		}
		else if (select == 3) {
			break;
		}
		else {
			continue;
		}
	}
	if (burgur->top != playerS->top) {
		score -= 10;
		system("cls");
		printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t 레시피가 다릅니다.\t\t|\n");
		printf("|\t\t  SCORE [%2d]\t\t\t|\n", score);
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n\n");
		Sleep(3000);
		return score;
	}
	for (int i = burgur->top; i >= 0; i--) {
		if (burgur->data[i] != playerS->data[i]) {
			score -= 1;
			wrongCount += 1;
		}
		else if (burgur->data[i] == playerS->data[i]) {
			score += 1;
		}
	}
	system("cls");
	printf("+-------------------[PLAYER%d]-------------------+\n", player->num);
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t 재료를 %d개 틀렸습니다.\t\t|\n", wrongCount);
	printf("|\t\t             \t\t\t|\n");
	printf("|\t\t  SCORE [%2d]\t\t\t|\n", score);
	printf("|\t\t             \t\t\t|\n");
	printf("+-----------------------------------------------+\n\n");
	Sleep(3000);
	return score;
}

void printMiniGameTitle(int num) {
	switch (num) {
	case 1:
		printf("-------------------------------------------\n");
		printf("|\t\t\t\t\t  |\n");
		printf("| □   □ □□□ □  □ □□□  □□□□  □□  □   □ □□□ |\n");
		printf("| □□ □□  □  □□ □  □   □     □ □ □□ □□ □   |\n");
		printf("| □ □ □  □  □ □□  □   □ □□□ □□□ □ □ □ □□□ |\n");
		printf("| □   □  □  □  □  □   □   □ □ □ □   □ □   |\n");
		printf("| □   □ □□□ □  □ □□□  □□□ □ □ □ □   □ □□□ |\n");
		printf("|\t\t\t\t\t  |\n");
		printf("|\t\t\tMiniGame1\t  |\n");
		printf("-------------------------------------------\n");
		break;
	case 2:
		printf("-------------------------------------------\n");
		printf("|\t\t\t\t\t  |\n");
		printf("| □   □ □□□ □  □ □□□  □□□□  □□  □   □ □□□ |\n");
		printf("| □□ □□  □  □□ □  □   □     □ □ □□ □□ □   |\n");
		printf("| □ □ □  □  □ □□  □   □ □□□ □□□ □ □ □ □□□ |\n");
		printf("| □   □  □  □  □  □   □   □ □ □ □   □ □   |\n");
		printf("| □   □ □□□ □  □ □□□  □□□ □ □ □ □   □ □□□ |\n");
		printf("|\t\t\t\t\t  |\n");
		printf("|\t\t\tMiniGame2\t  |\n");
		printf("-------------------------------------------\n");
		break;
	case 3:
		printf("-------------------------------------------\n");
		printf("|\t\t\t\t\t  |\n");
		printf("| □   □ □□□ □  □ □□□  □□□□  □□  □   □ □□□ |\n");
		printf("| □□ □□  □  □□ □  □   □     □ □ □□ □□ □   |\n");
		printf("| □ □ □  □  □ □□  □   □ □□□ □□□ □ □ □ □□□ |\n");
		printf("| □   □  □  □  □  □   □   □ □ □ □   □ □   |\n");
		printf("| □   □ □□□ □  □ □□□  □□□ □ □ □ □   □ □□□ |\n");
		printf("|\t\t\t\t\t  |\n");
		printf("|\t\t\tMiniGame3\t  |\n");
		printf("-------------------------------------------\n");
		break;
	case 4:
		printf("-------------------------------------------\n");
		printf("|\t\t\t\t\t  |\n");
		printf("| □   □ □□□ □  □ □□□  □□□□  □□  □   □ □□□ |\n");
		printf("| □□ □□  □  □□ □  □   □     □ □ □□ □□ □   |\n");
		printf("| □ □ □  □  □ □□  □   □ □□□ □□□ □ □ □ □□□ |\n");
		printf("| □   □  □  □  □  □   □   □ □ □ □   □ □   |\n");
		printf("| □   □ □□□ □  □ □□□  □□□ □ □ □ □   □ □□□ |\n");
		printf("|\t\t\t\t\t  |\n");
		printf("|\t\t\tMiniGame4\t  |\n");
		printf("-------------------------------------------\n");
		break;
	case 5:
		printf("-------------------------------------------\n");
		printf("|\t\t\t\t\t  |\n");
		printf("| □   □ □□□ □  □ □□□  □□□□  □□  □   □ □□□ |\n");
		printf("| □□ □□  □  □□ □  □   □     □ □ □□ □□ □   |\n");
		printf("| □ □ □  □  □ □□  □   □ □□□ □□□ □ □ □ □□□ |\n");
		printf("| □   □  □  □  □  □   □   □ □ □ □   □ □   |\n");
		printf("| □   □ □□□ □  □ □□□  □□□ □ □ □ □   □ □□□ |\n");
		printf("|\t\t\t\t\t  |\n");
		printf("|\t\t\tMiniGame5\t  |\n");
		printf("-------------------------------------------\n");
		break;
	}
}

void printMiniRule(int num) {
	system("cls");
	switch (num) {
	case 1:
		printf("\t미니게임1 규칙\n\n");
		Sleep(1000);
		printf("\t사칙연산으로 이루어진 6개의 수식들이 제시됩니다.\n\n");
		Sleep(1000);
		printf("\t첫번째로 그 수식들 중 계산 결과가 가장 큰 수식을 찾아야합니다. \n\n");
		Sleep(1000);
		printf("\t두번째로는 그 다음으로 계산 결과가 큰 수식을 찾아야합니다. \n\n");
		Sleep(1000);
		printf("\t이 과정에서 가장 걸린 시간을 측정하여 시간이 더 짧은 플레이어가 승리합니다. \n\n");
		Sleep(1000);
		break;
	case 2:
		//가드 잽, 스트레이트 방어 0점, 어퍼 -1점 , 회피 반대 방향 잽 스트레이트 어퍼 +1점. 카운터 상대와 반대방향 어퍼 +2점 잽 스트레이트 +0점.
		//회피 실패시 -1점. 어퍼 실패시 -2점
		printf("\t미니게임2 규칙\n\n");
		Sleep(1000);
		printf("\t상대방의 공격이 %d번 제시됩니다. \n\n", MAX_BOXQUEUE);
		Sleep(1000);
		printf("\t그 공격들을 암기하여 올바른 대응을 하면 점수를 얻습니다. \n\n");
		Sleep(1000);
		printf("\t만약 틀린 대응을 하면 점수를 잃습니다. \n\n");
		Sleep(1000);
		printf("\t방어는 모든 공격을 방어할 수 있지만 점수를 얻을 순 없습니다. \n\n");
		Sleep(1000);
		printf("\t회피는 상대와 반대 방향으로 대응해야합니다. 점수를 1점 얻습니다. \n\n");
		Sleep(1000);
		printf("\t카운터 또한 상대와 반대 방향으로 대응하야합니다. 추가로 상대 속성에 큰 피해를 줄 수 있는 속성을 입력해야합니다. \n\n");
		Sleep(1000);
		printf("\t상대의 화염 속성에는 물 속성 대응을 해야하고, 물에는 풀 속성, 마지막으로 풀 속성에는 화염 속성 대응을 해야합니다. \n\n");
		Sleep(1000);
		printf("\t올바르게 대응을 하면 점수를 2점 얻습니다.\n\n");
		Sleep(1000);
		break;
	case 3:
		printf("\t미니게임3 규칙\n\n");
		Sleep(1000);
		printf("\t숫자가 하나 제시됩니다.  \n\n");
		Sleep(1000);
		printf("\t그 숫자만큼 시간을 세어 아무 숫자를 입력하면 됩니다.  \n\n");
		Sleep(1000);
		printf("\t그 숫자와 시간의 차이가 적은 플레이어가 승리합니다.  \n\n");
		Sleep(1000);
		break;
	case 4:
		printf("\n1. 랜덤으로 만들어진 트리에서 원하는 숫자를 골라 자신의 덱을 만듭니다.\n");
		Sleep(1000);
		printf("\n2. 덱에 있는 숫자를 앞, 뒤에서 빼와서 최대한 큰 숫자를 만들 수 있도록 계산식을 만듭니다.\n");
		Sleep(1000);
		printf("\n3. 계산식은 [n1 - n2 + n3 * n4] 형태로 고정되어 있으며, 덱에서 뺀 순서대로 매핑됩니다.\n");
		Sleep(1000);
		printf("\n4. 계산식의 답이 더 큰 플레이어가 승리합니다.\n");
		Sleep(1000);
		break;
	case 5:
		printf("\n1. 손님이 주문한 버거의 레시피를 확인하고 레시피에 맞게 버거를 만듭니다.\n");
		Sleep(1000);
		printf("\n2. 레시피는 위에서부터 버거의 재료 순서를 나타냅니다.\n");
		Sleep(1000);
		printf("\n3. 버거 제작시 선태한 재료는 아래에서부터 쌓입니다.\n");
		Sleep(1000);
		printf("\n4. 손님이 주문한 버거의 레시피와 제작한 버거가 같다면 점수를 얻습니다.\n");
		Sleep(1000);
		break;
	}
}

void miniGameRoulette(int n) {
	switch (n) {
	case 1:
		printf("+-------------------MINI-GAME-------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t ▶  MiniGame1\t\t\t|\n");
		printf("|\t\t    MiniGame2\t\t\t|\n");
		printf("|\t\t    MiniGame3\t\t\t|\n");
		printf("|\t\t    MiniGame4\t\t\t|\n");
		printf("|\t\t    MiniGame5\t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n");
		break;
	case 2:
		printf("+-------------------MINI-GAME-------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t    MiniGame1\t\t\t|\n");
		printf("|\t\t ▶  MiniGame2\t\t\t|\n");
		printf("|\t\t    MiniGame3\t\t\t|\n");
		printf("|\t\t    MiniGame4\t\t\t|\n");
		printf("|\t\t    MiniGame5\t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n");
		break;
	case 3:
		printf("+-------------------MINI-GAME-------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t    MiniGame1\t\t\t|\n");
		printf("|\t\t    MiniGame2\t\t\t|\n");
		printf("|\t\t ▶  MiniGame3\t\t\t|\n");
		printf("|\t\t    MiniGame4\t\t\t|\n");
		printf("|\t\t    MiniGame5\t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n");
		break;
	case 4:
		printf("+-------------------MINI-GAME-------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t    MiniGame1\t\t\t|\n");
		printf("|\t\t    MiniGame2\t\t\t|\n");
		printf("|\t\t    MiniGame3\t\t\t|\n");
		printf("|\t\t ▶  MiniGame4\t\t\t|\n");
		printf("|\t\t    MiniGame5\t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n");
		break;
	case 5:
		printf("+-------------------MINI-GAME-------------------+\n");
		printf("|\t\t             \t\t\t|\n");
		printf("|\t\t    MiniGame1\t\t\t|\n");
		printf("|\t\t    MiniGame2\t\t\t|\n");
		printf("|\t\t    MiniGame3\t\t\t|\n");
		printf("|\t\t    MiniGame4\t\t\t|\n");
		printf("|\t\t ▶  MiniGame5\t\t\t|\n");
		printf("|\t\t             \t\t\t|\n");
		printf("+-----------------------------------------------+\n");
		break;
	}
}

void init_heap(HeapType* h) {
	h->heap_size = 0;
}

void insert_max_heap(HeapType* h, Data cal) {
	int i = 0;
	i = ++(h->heap_size);

	while ((i != 1) && (cal.result > h->heap[i / 2].result)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = cal;
}

Data delete_max_heap(HeapType* h) {
	int parent, child;
	Data cal, temp;
	cal = h->heap[1];
	temp = h->heap[h->heap_size];
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		if (child < h->heap_size && (h->heap[child].result) < (h->heap[child + 1].result)) {
			child++;
		}
		if (temp.result >= h->heap[child].result) {
			break;
		}
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return cal;
}

double mathMiniGame(HeapType* heap) {
	countDown();
	printf("\t\tMINI GAME 1\n");
	printf("+-----------------------------------------------+\n");
	printf("|\t\t             \t\t\t|\n");
	srand(time(NULL));
	int fourOP;
	int answerTime = 0;
	clock_t start, end;
	int number1, number2;
	Data temp[6];
	Data largest[6];
	for (int i = 0; i < 6; i++) {
		printf("|\t\t%d ) ", i + 1);
		fourOP = rand() % 4;
		if (fourOP == 0) {
			number1 = rand() % 400 + 1;
			number2 = rand() % 400 + 1;
			printf("[%d + %d]\t\t\t|", number1, number2);
			temp[i].result = number1 + number2;
			insert_max_heap(heap, temp[i]);
		}
		else if (fourOP == 1) {
			number1 = rand() % 1000 + 1;
			number2 = rand() % 400 + 1;
			printf("[%d - %d]\t\t\t|", number1, number2);
			temp[i].result = number1 - number2;
			insert_max_heap(heap, temp[i]);
		}
		else if (fourOP == 2) {
			number1 = rand() % 30 + 1;
			number2 = rand() % 30 + 1;
			printf("[%d x %d]\t\t\t|", number1, number2);
			temp[i].result = number1 * number2;
			insert_max_heap(heap, temp[i]);
		}
		else if (fourOP == 3) {
			number1 = rand() % 1000 + 1;
			number2 = rand() % 10 + 1;
			printf("[%d / %d]\t\t\t|", number1, number2);
			temp[i].result = number1 / number2;
			insert_max_heap(heap, temp[i]);
		}
		printf("\n");
	}
	printf("|\t\t             \t\t\t|\n");
	printf("+-----------------------------------------------+\n");
	for (int i = 0; i < 6; i++) {
		largest[i] = delete_max_heap(heap);
		//printf("%d\n", largest[i]);
	}
	start = clock();
	printf("가장 큰 숫자의 번호를 입력하시오 ,, >> ");
	while (1) {
		scanf("%d", &number1);
		if (temp[number1 - 1].result == largest[0].result) {
			printf("정답!\n");
			break;
		}
		else {
			printf("오답! 시간 2초 추가 ,,,\n");
			answerTime += 2000;
		}
		printf("다시 입력하세요 ,, >> ");
	}
	printf("그 다음으로 큰 숫자의 번호를 입력하시오, , >> ");
	while (1) {
		scanf("%d", &number1);
		if (temp[number1 - 1].result == largest[1].result) {
			printf("정답!\n");
			break;
		}
		else {
			printf("오답! 시간 2초 추가 ,,,\n");
			answerTime += 2000;
		}
		printf("다시 입력하세요 ,, >> ");
	}
	end = clock();
	Sleep(1000);
	printf("걸린 시간 : %.3f초", (double)(end - start + answerTime) / 1000);
	Sleep(1000);
	return (end - start + answerTime);
}

void BoxQueue_init(BoxQueue* q) {
	q->front = -1;
	q->rear = -1;
}

void boxenqueue(BoxQueue* q, int pos) {
	q->box[++(q->rear)] = pos;
}

int boxdequeue(BoxQueue* q) {
	int n = q->box[++(q->front)];
	return n;
}

void boxprint(int pos) {
	switch (pos) {
	case 0:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("|\t\t\t|\t   □\t\t|\n");
		printf("|\t\t\t|\t  □□\t\t|\n");
		printf("|\t\t\t|\t  □□ □\t\t|\n");
		printf("|\t\t\t|\t  □□□□\t\t|\n");
		printf("|\t\t\t|\t □□□□□\t\t|\n");
		printf("|\t\t\t|\t □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("□\t\t|\n");
		printf("|\t\t\t|\t □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("□\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("|\t\t\t|\t  □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("□□\t\t|\n");
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		//printf("오른쪽 화염 속성");
		break;
	case 1:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("|\t\t\t|\t  □\t\t|\n");
		printf("|\t\t\t|\t  □\t\t|\n");
		printf("|\t\t\t|\t □□□\t\t|\n");
		printf("|\t\t\t|\t □□□\t\t|\n");
		printf("|\t\t\t|\t□□□□□\t\t|\n");
		printf("|\t\t\t|\t□□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("□\t\t|\n");
		printf("|\t\t\t|\t□□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("□\t\t|\n");
		printf("|\t\t\t|\t □□□\t\t|\n");
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		//printf("오른쪽 물 속성");
		break;
	case 2:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);	//초
		printf("|\t\t\t|\t□□\t\t|\n");
		printf("|\t\t\t|\t□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);	//진초
		printf("□\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t\t\t|\t□");	//회색
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□");	//진초
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□\t\t|\n");
		printf("|\t\t\t|\t□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t\t\t|\t □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□\t\t|\n");
		printf("|\t\t\t|\t □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t\t\t|\t  □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□\t\t|\n");
		printf("|\t\t\t|\t   □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		//printf("오른쪽 풀 속성");
		break;
	case 3:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("|\t   □\t\t|\t\t\t|\n");
		printf("|\t  □□\t\t|\t\t\t|\n");
		printf("|\t  □□ □\t\t|\t\t\t|\n");
		printf("|\t  □□□□\t\t|\t\t\t|\n");
		printf("|\t □□□□□\t\t|\t\t\t|\n");
		printf("|\t □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("□\t\t|\t\t\t|\n");
		printf("|\t □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("□\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("|\t  □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("□□\t\t|\t\t\t|\n");
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		//printf("왼쪽 화염 속성");
		break;
	case 4:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("|\t  □\t\t|\t\t\t|\n");
		printf("|\t  □\t\t|\t\t\t|\n");
		printf("|\t □□□\t\t|\t\t\t|\n");
		printf("|\t □□□\t\t|\t\t\t|\n");
		printf("|\t□□□□□\t\t|\t\t\t|\n");
		printf("|\t□□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("□\t\t|\t\t\t|\n");
		printf("|\t□□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("□\t\t|\t\t\t|\n");
		printf("|\t □□□\t\t|\t\t\t|\n");
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		//printf("왼쪽 물 속성");
		break;
	case 5:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("-------------------------------------------------\n");
		printf("|\t\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);	//초
		printf("|\t□□\t\t|\t\t\t|\n");
		printf("|\t□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);	//진초
		printf("□\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t□");	//회색
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□");	//진초
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□\t\t|\t\t\t|\n");
		printf("|\t□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t □");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□□\t\t|\t\t\t|\n");
		printf("|\t □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		printf("□\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t  □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("□\t\t|\t\t\t|\n");
		printf("|\t   □□");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		printf("□\t\t|\t\t\t|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("|\t\t\t|\t\t\t|\n");
		printf("-------------------------------------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		//printf("왼쪽 풀 속성");
		break;
	}
}

int boxMiniGame(BoxQueue* q) {
	countDown();
	system("cls");
	srand(time(NULL));
	int randpos = 0;
	int randdir = 0;
	int defense = 0;
	int direction = 0;
	int score = 0;
	printf("\t다음 공격들을 외우시오,,,");
	Sleep(1000);
	system("cls");
	for (int i = 0; i < MAX_BOXQUEUE; i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\t\t[ %d ]\t\t\t\t\n", i + 1);
		randpos = rand() % 6;
		boxprint(randpos);
		printf("\n");
		boxenqueue(q, randpos);
		Sleep(1000);
		system("cls");
	}
	for (int i = 0; i < MAX_BOXQUEUE; i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("+-------------------------------+\n");
		printf("|\t[ %d 번째 공격 ]\t\t|\n", i + 1);
		printf("|\t\t\t\t|\n");
		printf("|\t대응를 입력하시오.\t|\n");
		printf("|\t\t\t\t|\n");
		printf("+-------------------------------+\n");
		int temp = boxdequeue(q);
		printf("\t\t\t1. 방어\n\t\t\t2. 회피\n\t\t\t3. 속성 카운터\n\t\t\t>> ");
		scanf("%d", &defense);
		//물 불 풀 속성 공격. 방어는 무조건 성공 +0점. 회피는 상대와 반대방향으로 하면 +1점 틀리면 -1점. 
		//속성 카운터는 상대와 반대방향으로 정확한 속성으로 공격시 +2점, 틀리면 -2점
		if (defense == 1) {
			printf("\t\t방어 성공\n");
		}
		else if (defense == 2) {
			printf("\t\t\t방향 : 왼쪽(1), 오른쪽(2) >> ");
			scanf("%d", &direction);
			if (temp / 3 == direction - 1) {
				printf("\t\t회피 성공! +1점\n");
				score++;
			}
			else {
				printf("\t\t회피 실패... -1점\n");
				score++;
			}
		}
		else if (defense == 3) {
			printf("\t\t\t방향 : 왼쪽(1), 오른쪽(2) >> ");
			scanf("%d", &direction);
			if (temp / 3 == direction - 1) {
				printf("\t\t\t대응할 속성 : 물(1) 풀(2) 화염(3) >> ");
				scanf("%d", &direction);
				if (temp % 3 == direction - 1) {
					printf("\t\t카운터 성공! +2점\n");
					score = score + 2;
				}
				else {
					printf("\t\t카운터 실패... -2점\n");
					score = score - 2;
				}
			}
			else {
				printf("\t\t카운터 실패! -1점\n");
				score = score - 1;
			}
		}
		else {
			printf("\t\t잘못된 대응. -1점\n");
			while (getchar() != '\n');
			score--;
		}
		Sleep(1000);
		system("cls");
	}
	printf("점수 : %d", score);
	return score;
	Sleep(2000);
}

double measureTime() {
	//countDown();
	system("cls");
	clock_t start, end;
	double retTime;
	int a = rand() % 3 + 5;
	int sc = 0;
	for (int i = 3; i > 0; i--) {
		printf("\t\tMINI GAME 2\n");
		printf("-----------------------------------------------------------------\n");
		printf("|  시작 신호가 나오고 [ %d초 ]가 지나면 아무 숫자를 입력하세요.  |\n", a);
		printf("|\t\t\t\t\t\t\t\t|\n");
		printf("|\t\t\t[ %d ]     \t\t\t\t|\n", i);
		printf("|\t\t\t\t\t\t\t\t|\n");
		printf("-----------------------------------------------------------------\n");
		Sleep(1000);
		system("cls");
	}
	printf("\t\tMINI GAME 2\n");
	printf("-----------------------------------------------------------------\n");
	printf("|  시작 신호가 나오고 [ %d초 ]가 지나면 아무 숫자를 입력하세요.  |\n", a);
	printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t[ 시작 ! ]\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
	start = clock();
	printf("\t\t\t\t아무 숫자를 입력하세요 >> ");
	scanf("%d", &sc);
	end = clock();
	retTime = ((double)(end - start)) / 1000;
	printf("\t\t\t\t%.3f초 걸렸습니다.\n", retTime);
	Sleep(1000);
	retTime = (double)(retTime - a);
	if (retTime < 0) {
		retTime *= -1;
		printf("\t\t\t\t%.3f초 차이\n", retTime);
		return retTime;
	}
	else {
		printf("\t\t\t%.3f초 차이\n", retTime);
		return retTime;
	}
	//while (getchar() != '\n');
}

void PlayMiniGame(Player* player1, Player* player2) {
	Player* winner = NULL;
	int itemNum;
	int whatdo = 0;
	srand(time(NULL));
	int gameNum = rand() % MAX_GAME_SPECIES + 1;
	//gamenum = 5;
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 6; j++) {
			miniGameRoulette(j);
			Sleep(50 + 60 * i);
			system("cls");
		}
	}
	for (int i = 1; i <= gameNum; i++) {
		miniGameRoulette(i);
		if (i == gameNum) {
			Sleep(1000);
		}
		else {
			Sleep(400);
		}
		system("cls");
	}
	//1번 미니게임 가장 큰 숫자
	if (gameNum == 1) {
		HeapType* Testheap = (HeapType*)malloc(sizeof(HeapType));
		HeapType* heap1 = (HeapType*)malloc(sizeof(HeapType));
		HeapType* heap2 = (HeapType*)malloc(sizeof(HeapType));
		init_heap(heap1);
		init_heap(heap2);
		init_heap(Testheap);
		while (1) {
			printMiniGameTitle(gameNum);
			printf("\t\t\t     1. 규칙 보기\n\t\t\t     2. 연습게임\n\t\t\t     3. 진행하기\n\t\t\t     입력 >> ");
			scanf("%d", &whatdo);
			if (whatdo == 1) {
				printMiniRule(gameNum);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 2) {
				system("cls");
				printf("\t\t연습 미니게임\n");
				mathMiniGame(Testheap);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 3) {
				break;
			}
			system("cls");
		}
		double time1, time2;
		system("cls");
		printf("\n\n\t\t[ 플레이어 1 미니게임 ]\n");
		Sleep(1000);
		time1 = mathMiniGame(heap1);
		Sleep(3000);
		system("cls");
		printf("\n\n\t\t[ 플레이어 2 미니게임 ]\n");
		Sleep(1000);
		time2 = mathMiniGame(heap2);
		if (time1 < time2) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 1 승리! ]\n");
			winner = player1;
		}
		else if (time2 < time1) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 2 승리! ]\n");
			winner = player2;
		}
		else {
			system("cls");
			printf("\n\n\t\t[ 동점! ]\n");
			winner = NULL;
		}
		free(Testheap);
		free(heap1);
		free(heap2);
	}
	//2번 미니게임 복싱
	else if (gameNum == 2) {
		BoxQueue* TestboxQ = (BoxQueue*)malloc(sizeof(BoxQueue));
		BoxQueue* boxQ1 = (BoxQueue*)malloc(sizeof(BoxQueue));
		BoxQueue* boxQ2 = (BoxQueue*)malloc(sizeof(BoxQueue));
		BoxQueue_init(TestboxQ);
		BoxQueue_init(boxQ1);
		BoxQueue_init(boxQ2);
		while (1) {
			printMiniGameTitle(gameNum);
			printf("\t\t\t     1. 규칙 보기\n\t\t\t     2. 연습게임\n\t\t\t     3. 진행하기\n\t\t\t     입력 >> ");
			scanf("%d", &whatdo);
			if (whatdo == 1) {
				printMiniRule(gameNum);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 2) {
				system("cls");
				printf("\t\t연습 미니게임\n");
				boxMiniGame(TestboxQ);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 3) {
				break;
			}
			while (getchar() != '\n');
			system("cls");
		}
		int scoreA, scoreB;
		system("cls");
		printf("\n\n\t\t[ 플레이어 1 미니게임 ]\n");
		Sleep(1000);
		scoreA = boxMiniGame(boxQ1);
		Sleep(3000);
		system("cls");
		printf("\n\n\t\t[ 플레이어 2 미니게임 ]\n");
		Sleep(1000);
		scoreB = boxMiniGame(boxQ2);
		if (scoreA > scoreB) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 1 승리! ]\n");
			winner = player1;
		}
		else if (scoreA < scoreB) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 2 승리! ]\n");
			winner = player2;
		}
		else {
			system("cls");
			printf("\n\n\t\t[ 동점! ]\n");
			winner = NULL;
		}
		free(boxQ1);
		free(boxQ2);
	}
	//3번 미니게임 시간 측정?
	else if (gameNum == 3) {
		while (1) {
			printMiniGameTitle(gameNum);
			printf("\t\t\t     1. 규칙 보기\n\t\t\t     2. 연습게임\n\t\t\t     3. 진행하기\n\t\t\t     입력 >> ");
			scanf("%d", &whatdo);
			if (whatdo == 1) {
				printMiniRule(gameNum);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 2) {
				system("cls");
				printf("\t\t연습 미니게임\n");
				measureTime();
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 3) {
				break;
			}
			while (getchar() != '\n');
			system("cls");
		}
		double timeA, timeB;
		system("cls");
		printf("\n\n\t\t[ 플레이어 1 미니게임 ]\n");
		Sleep(1000);
		timeA = measureTime();
		Sleep(1000);
		system("cls");
		printf("\n\n\t\t[ 플레이어 2 미니게임 ]\n");
		Sleep(1000);
		timeB = measureTime();
		Sleep(1000);
		if (timeA < timeB) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 1 승리! ]\n");
			winner = player1;
		}
		else if (timeB < timeA) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 2 승리! ]\n");
			winner = player2;
		}
		else {
			system("cls");
			printf("\n\n\t\t[ 동점! ]\n");
			winner = NULL;
		}
	}
	//4번 미니게임
	else if (gameNum == 4) {
		while (1) {
			printMiniGameTitle(gameNum);
			printf("\t\t\t     1. 규칙 보기\n\t\t\t     2. 연습게임\n\t\t\t     3. 진행하기\n\t\t\t     입력 >> ");
			scanf("%d", &whatdo);
			if (whatdo == 1) {
				printMiniRule(gameNum);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 2) {
				Player* test = (Player*)malloc(sizeof(Player));
				test->num = 0;
				system("cls");
				printf("\t\t연습 미니게임\n");
				int x = treeMiniGame(test);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
				free(test);
			}
			else if (whatdo == 3) {
				break;
			}
			while (getchar() != '\n');
			system("cls");
		}
		system("cls");
		printf("\n\n\t\t[ 플레이어 1 미니게임 ]\n");
		Sleep(1000);
		int p1score = treeMiniGame(player1);
		system("cls");
		printf("\n\n\t\t[ 플레이어 2 미니게임 ]\n");
		Sleep(1000);
		int p2score = treeMiniGame(player2);

		if (p1score > p2score) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 1 승리! ]\n");
			winner = player1;
		}
		else if (p1score < p2score) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 2 승리! ]\n");
			winner = player2;
		}
		else if (p1score == p2score) {
			system("cls");
			printf("\n\n\t\t[ 동점! ]\n");
			winner = NULL;
		}
	}
	//5번 미니게임
	else if (gameNum == 5) {
		while (1) {
			printMiniGameTitle(gameNum);
			printf("\t\t\t     1. 규칙 보기\n\t\t\t     2. 연습게임\n\t\t\t     3. 진행하기\n\t\t\t     입력 >> ");
			scanf("%d", &whatdo);
			if (whatdo == 1) {
				printMiniRule(gameNum);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
			}
			else if (whatdo == 2) {
				Player* test = (Player*)malloc(sizeof(Player));
				test->num = 0;
				system("cls");
				printf("\t\t연습 미니게임\n");
				int x = stackGame(test);
				printf("\n\t\t\t뒤로 가려면 아무 숫자를 입력하세요,,, ");
				scanf("%d", &whatdo);
				free(test);
			}
			else if (whatdo == 3) {
				break;
			}
			while (getchar() != '\n');
			system("cls");
		}
		system("cls");
		printf("\n\n\t\t[ 플레이어 1 미니게임 ]\n");
		Sleep(1000);
		int p1score = stackGame(player1);
		system("cls");
		printf("\n\n\t\t[ 플레이어 2 미니게임 ]\n");
		Sleep(1000);
		int p2score = stackGame(player2);

		if (p1score > p2score) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 1 승리! ]\n");
			winner = player1;
		}
		else if (p1score < p2score) {
			system("cls");
			printf("\n\n\t\t[ 플레이어 2 승리! ]\n");
			winner = player2;
		}
		else if (p1score == p2score) {
			system("cls");
			printf("\n\n\t\t[ 동점! ]\n");
			winner = NULL;
		}
	}
	Sleep(1000);
	system("cls");
	if (winner == NULL) {
		printf("\t\t승자가 없습니다.\n");
		printf("\t\t누구도 상품을 받지 못합니다.\n");
		Sleep(1000);
	}
	else {
		winner->miniWincount++;
		printf("---------------------------------------------------------\n");
		printf("|\t\t\tITEM LIST\t\t\t|\n");
		printf("---------------------------------------------------------\n");
		printf("|\t\t원하는 아이템의 번호를 선택하세요\t|\n");
		for (int i = 1; i <= MAX_ITEM_SPECIES; i++) {
			printf("|\t\t      %d ) \t\t\t\t|\n|", i);
			itemprint(i);
			if (i == 5 || i == 8) {
				printf("\t");
			}
			printf("\t\t\t|\n");
		}
		printf("---------------------------------------------------------\n");
		printf("\t\t\t     원하는 아이템의 번호 >> ");
		scanf("%d", &itemNum);
		enqueue(&winner->itemQueue, itemNum);
	}
}
