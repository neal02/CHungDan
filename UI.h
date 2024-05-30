#pragma once

#include <stdio.h>
#include <Windows.h>

void printDiceImage(int n) {
	switch (n) {
	case 8:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| �� �� ��  |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t| �� �� ��  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 7:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t| �� �� ��  |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 6:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 5:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t|   ��    |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 4:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t| ��   ��  |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 3:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��      |\n");
		printf("\t\t\t\t|    ��   |\n");
		printf("\t\t\t\t|      �� |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 2:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t| ��      |\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t|      �� |\n");
		printf("\t\t\t\t+--------+\n");
		break;
	case 1:
		printf("\n\n\n\n\t\t\t\t+--------+\n");
		printf("\t\t\t\t|        |\n");
		printf("\t\t\t\t|    ��   |\n");
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
	printf("\t\t\t  |      ��       |\n");
	printf("\t\t\t  |              |\n");
	printf("\t\t\t  +--------------+\n");
	Sleep(100);
	system("cls");

	printf("\n\n\t\t\t+--------------------+\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t|      ��             |\n");
	printf("\t\t\t|                    |\n");
	printf("\t\t\t+--------------------+\n");
	Sleep(100);
	system("cls");

	printf("\n\t\t  +---------------------------+\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |                           |\n");
	printf("\t\t  |      ��                    |\n");
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
	printf("\t\t|      ��                        |\n");
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
	printf("\t  |      ��                                |\n");
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
	printf("\t|      ��                                     |\n");
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
	printf("  |      ��                                            |\n");
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
	printf("|      ��                                                |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|     ��                                                 |\n");
	printf("|    ��� ��                                               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|                                                       |\n");
	printf("|   ���� ��                                               |\n");
	printf("|     �� ��                                               |\n");
	printf("|   ���� ��                                               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��                                               |\n");
	printf("|   ��   ���                                              |\n");
	printf("|   ���� �� ��                                             |\n");
	printf("|     �� ��  ��                                            |\n");
	printf("|   ���� ��   ��                                           |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   ��                                           |\n");
	printf("|   ��   ���  �� ��                                         |\n");
	printf("|   ���� �� �� �� �� ��                                       |\n");
	printf("|     �� ��  ��� ����                                       |\n");
	printf("|   ���� ��   �� �� �� ��                                     |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ��   ��                                     |\n");
	printf("|   ��   ���  �� ���  �� ��                                   |\n");
	printf("|   ���� �� �� �� �� �� ���                                    |\n");
	printf("|     �� ��  ��� ���� �� ��  ��                                |\n");
	printf("|   ���� ��   �� �� �� ��  �� ��                                |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ��   ��  �� ���                               |\n");
	printf("|   ��   ���  �� ���  �� ��  ��                                |\n");
	printf("|   ���� �� �� �� �� �� ���   ���� ��                            |\n");
	printf("|     �� ��  ��� ���� �� ��  ��   ��                            |\n");
	printf("|   ���� ��   �� �� �� ��  �� ���� ��                            |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ��   ��  �� ����                              |\n");
	printf("|   ��   ���  �� ���  �� ��  ��    ��                           |\n");
	printf("|   ���� �� �� �� �� �� ���   ����  ���� ��                       |\n");
	printf("|     �� ��  ��� ���� �� ��  ��    ���  ��                       |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ����                     |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+ ------------------------------------------------------ - +\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ��   ��  �� ����  ���� ��                       |\n");
	printf("|   ��   ���  �� ���  �� ��  ��    �� �� �� ��                     |\n");
	printf("|   ���� �� �� �� �� �� ���   ����  ���� �� ��                     |\n");
	printf("|     �� ��  ��� ���� �� ��  ��    ���  �� ��                     |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ���� ��                   |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ���  ��  �� ����  ���� ����                     |\n");
	printf("|   ��   ���  �� ���� �� ��  ��    �� �� �� �� ��                   |\n");
	printf("|   ���� �� �� �� �� �� ���   ����  ���� �� �� ��                   |\n");
	printf("|     �� ��  ��� ���� �� ��  ��    ���  �� �� ��                   |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ���� ��� ���               |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(100);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ���  ��  �� ����  ���� ���� ��   ��               |\n");
	printf("|   ��   ���  �� �� �� �� ��  ��    �� �� �� �� ��   ��               |\n");
	printf("|   ���� �� �� �� ���� ���   ����  ���� �� �� ��   ��               |\n");
	printf("|     �� ��  ��� �� �� �� ��  ��    ���  �� �� ��   ��               |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ���� ���� ����             |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);
	system("cls");

	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ���  ��  �� ����  ���� ���� ��   ��       SNAKE   |\n");
	printf("|   ��   ���  �� �� �� �� ��  ��    �� �� �� �� ��   ��        ROLL   |\n");
	printf("|   ���� �� �� �� ���� ���   ����  ���� �� �� ��   ��               |\n");
	printf("|     �� ��  ��� �� �� �� ��  ��    ���  �� �� ��   ��               |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ���� ���� ����             |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("+-------------------------------------------------------+\n");
	printf("|                                                       |\n");
	printf("|   ���� ��   �� ���  ��  �� ����  ���� ���� ��   ��       SNAKE   |\n");
	printf("|   ��   ���  �� �� �� �� ��  ��    �� �� �� �� ��   ��        ROLL   |\n");
	printf("|   ���� �� �� �� ���� ���   ����  ���� �� �� ��   ��               |\n");
	printf("|     �� ��  ��� �� �� �� ��  ��    ���  �� �� ��   ��        DICE   |\n");
	printf("|   ���� ��   �� �� �� ��  �� ����  �� �� ���� ���� ����      GAME   |\n");
	printf("|                                                       |\n");
	printf("+-------------------------------------------------------+\n");
	Sleep(600);

}

void printRule() {
	system("cls");
	printf("\t�������� ���� �ֻ����� ������ �����Դϴ�.  \n\n");
	Sleep(1000);
	printf("\t�ֻ����� ���� ������ ĭ �߿� �Ϻδ� Ư���� ȿ���� �÷��̾�鿡�� �������ݴϴ�. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\t�� ");
	printf(" ĭ�� �����ĭ�Դϴ�. �� �÷��̾� ��ο��� ������ �ݴϴ�. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\t�� ");
	printf(" ĭ�� �ҿ�ĭ�Դϴ�. ������ �÷��̾�� �ҿ��� ��Ĩ�ϴ�. \n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\t�� ");
	printf(" ĭ�� ���ĭ�Դϴ�. ������ ��󿡰� ����� �������ݴϴ�! \n\n\n");
	Sleep(1000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void printfitem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	printf("\t�ð��ְ��� �ڽ��� ���� �� �� �� �����մϴ�.  \n\n");
	Sleep(700);
	printf("\t4~6 �ֻ����� ������ �ֻ��� ���ڸ� 4 5 6 �� �ϳ��� ����ϴ�.  \n\n");
	Sleep(700);
	printf("\t5 Ȯ�� �ֻ��� ������ �ֻ��� ���ڸ� 5�� ����ϴ�. ");
	printf("\n\n");
	Sleep(700);
	printf("\t-4 ~ 8 �ֻ����� -4���� 8 ���� ���ڷ� ����ϴ�.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t�⸧���� ������ �ڷ� �����ϴ�. ");
	printf("\n\n");
	Sleep(700);
	printf("\t�¸��� ������ 3�� ������ ����ϸ� �¸��մϴ�.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t���ֻ����� ������ ������ �ֻ��� ���ڸ� 1 2 3���� �����մϴ�.  ");
	printf("\n\n");
	Sleep(700);
	printf("\t�ӹ��� ������ ���� �ൿ�� �����մϴ�.  ");
	printf("\n\n");
	Sleep(700);
}
