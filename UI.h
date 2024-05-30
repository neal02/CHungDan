#pragma once

#include <stdio.h>
#include <Windows.h>

void printDiceImage(int n) {
	switch (n) {
	case 8:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ● ● ●  |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t| ● ● ●  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 7:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t| ● ● ●  |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 6:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 5:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t|   ●    |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 4:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t| ●   ●  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 3:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●      |\n");
		printf("\t\t\t\t|    ●   |\n");
		printf("\t\t\t\t|      ● |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 2:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ●      |\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t|      ● |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 1:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t|    ●   |\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	}
}

void printtitle() {
	int temp;
	for (int i = 6; i > 1; i--) {
		//printf("\t\t\t----------------------------------------------------------------------\n\n\n");
		printDiceImage(i);
		//printf("\t\t\t----------------------------------------------------------------------");
		Sleep(200);
		system("cls");
	}
	printDiceImage(1);
	Sleep(100);
	system("cls");

	printf("\n\n\n\t\t\t  +--------------+\n");
	printf("\t\t\t  |              |\n");
	printf("\t\t\t  |              |\n");
	printf("\t\t\t  |      ●       |\n");
	printf("\t\t\t  |              |\n");
	printf("\t\t\t  +--------------+\n");
	Sleep(100);
	system("cls");

	printf("\n\n\t\t\t+--------------------+\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|      ●             |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t+--------------------+\n");
	Sleep(100);
	system("cls");

	printf("\n\t\t  +---------------------------+\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |      ●                    |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  +---------------------------+\n");
	Sleep(100);
	system("cls");

	printf("\t\t+-------------------------------+\n");
	printf("\t\t|                               |\n");
	printf("\t\t|                               |\n");
	printf("\t\t|                               |\n");
	printf("\t\t|                               |\n");
	printf("\t\t|                               |\n");
	printf("\t\t|      ●                        |\n");
	printf("\t\t|                               |\n");
	printf("\t\t+-------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("\t  +---------------------------------------+\n");
	printf("\t  |                                       |\n");
	printf("\t  |                                       |\n");
	printf("\t  |                                       |\n");
	printf("\t  |                                       |\n");
	printf("\t  |                                       |\n");
	printf("\t  |      ●                                |\n");
	printf("\t  |                                       |\n");
	printf("\t  +---------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	printf("\t|                                            |\n");
	printf("\t|                                            |\n");
	printf("\t|                                            |\n");
	printf("\t|                                            |\n");
	printf("\t|      ●                                     |\n");
	printf("\t|                                            |\n");
	printf("\t+--------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("  +---------------------------------------------------+\n");
	printf("  |                                                   |\n");
	printf("  |                                                   |\n");
	printf("  |                                                   |\n");
	printf("  |                                                   |\n");
	printf("  |                                                   |\n");
	printf("  |      ●                                            |\n");
	printf("  |                                                   |\n");
	printf("  +---------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|      □                                                |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|     □                                                 |\n");
	printf("|    □□ □                                               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|   □□□ □                                               |\n");
	printf("|     □ □                                               |\n");
	printf("|   □□□ □                                               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □                                               |\n");
	printf("|   □   □□                                              |\n");
	printf("|   □□□ □ □                                             |\n");
	printf("|     □ □  □                                            |\n");
	printf("|   □□□ □   □                                           |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □                                           |\n");
	printf("|   □   □□  □ □                                         |\n");
	printf("|   □□□ □ □ □ □ □                                       |\n");
	printf("|     □ □  □□ □□□                                       |\n");
	printf("|   □□□ □   □ □ □ □                                     |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □   □                                     |\n");
	printf("|   □   □□  □ □□  □ □                                   |\n");
	printf("|   □□□ □ □ □ □ □ □□                                    |\n");
	printf("|     □ □  □□ □□□ □ □  □                                |\n");
	printf("|   □□□ □   □ □ □ □  □ □                                |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □   □  □ □□                               |\n");
	printf("|   □   □□  □ □□  □ □  □                                |\n");
	printf("|   □□□ □ □ □ □ □ □□   □□□ □                            |\n");
	printf("|     □ □  □□ □□□ □ □  □   □                            |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□ □                            |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □   □  □ □□□                              |\n");
	printf("|   □   □□  □ □□  □ □  □    □                           |\n");
	printf("|   □□□ □ □ □ □ □ □□   □□□  □□□ □                       |\n");
	printf("|     □ □  □□ □□□ □ □  □    □□  □                       |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□                     |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+ ------------------------------------------------------ - +\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □   □  □ □□□  □□□ □                       |\n");
	printf("|   □   □□  □ □□  □ □  □    □ □ □ □                     |\n");
	printf("|   □□□ □ □ □ □ □ □□   □□□  □□□ □ □                     |\n");
	printf("|     □ □  □□ □□□ □ □  □    □□  □ □                     |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□ □                   |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □□  □  □ □□□  □□□ □□□                     |\n");
	printf("|   □   □□  □ □□□ □ □  □    □ □ □ □ □                   |\n");
	printf("|   □□□ □ □ □ □ □ □□   □□□  □□□ □ □ □                   |\n");
	printf("|     □ □  □□ □□□ □ □  □    □□  □ □ □                   |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□ □□ □□               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □□  □  □ □□□  □□□ □□□ □   □               |\n");
	printf("|   □   □□  □ □ □ □ □  □    □ □ □ □ □   □               |\n");
	printf("|   □□□ □ □ □ □□□ □□   □□□  □□□ □ □ □   □               |\n");
	printf("|     □ □  □□ □ □ □ □  □    □□  □ □ □   □               |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□ □□□ □□□             |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □□  □  □ □□□  □□□ □□□ □   □       SNAKE   |\n");
	printf("|   □   □□  □ □ □ □ □  □    □ □ □ □ □   □        ROLL   |\n");
	printf("|   □□□ □ □ □ □□□ □□   □□□  □□□ □ □ □   □               |\n");
	printf("|     □ □  □□ □ □ □ □  □    □□  □ □ □   □               |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□ □□□ □□□             |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   □□□ □   □ □□  □  □ □□□  □□□ □□□ □   □       SNAKE   |\n");
	printf("|   □   □□  □ □ □ □ □  □    □ □ □ □ □   □        ROLL   |\n");
	printf("|   □□□ □ □ □ □□□ □□   □□□  □□□ □ □ □   □               |\n");
	printf("|     □ □  □□ □ □ □ □  □    □□  □ □ □   □        DICE   |\n");
	printf("|   □□□ □   □ □ □ □  □ □□□  □ □ □□□ □□□ □□□      GAME   |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);

}

void printRule() {
	system("cls");
	printf("\t목적지를 향해 주사위를 굴리는 게임입니다.  \n\n");
	Sleep(1000);
	printf("\t주사위를 굴려 도착한 칸 중에 일부는 특별한 효과를 플레이어들에게 가져다줍니다. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\t□ ");
	printf(" 칸은 스페셜칸입니다. 두 플레이어 모두에게 영향을 줍니다. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\t□ ");
	printf(" 칸은 불운칸입니다. 도착한 플레이어에게 불운이 닥칩니다. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\t□ ");
	printf(" 칸은 행운칸입니다. 도착한 대상에게 행운을 가져다줍니다! \n\n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void printfitem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	printf("\t시간왜곡은 자신의 턴을 한 번 더 진행합니다.  \n\n");
	Sleep(700);
	printf("\t4~6 주사위는 다음번 주사위 숫자를 4 5 6 중 하나로 만듭니다.  \n\n");
	Sleep(700);
	printf("\t5 확정 주사위 다음번 주사위 숫자를 5로 만듭니다. ");
	printf("\n\n");
	Sleep(700);
	printf("\t-4 ~ 8 주사위는 -4에서 8 사이 숫자로 만듭니다.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t기름병은 상대방을 뒤로 보냅니다. ");
	printf("\n\n");
	Sleep(700);
	printf("\t승리의 조각을 3개 모으고 사용하면 승리합니다.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t저주사위는 다음번 상대방의 주사위 숫자를 1 2 3으로 제한합니다.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t속박은 다음턴 상대방 행동을 제한합니다.  ");
	printf("\n\n");
	Sleep(700);
}
