#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#include "Turn.h"
#include "BoardFunction.h"

#define MAX_QUEUE_SIZE 8
#define MAX_ITEM_SPECIES 8

typedef struct itemQueue {
	int item[MAX_QUEUE_SIZE];
	int front, rear;
}ItemQueue;

int is_full_queue(ItemQueue* q) {
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);

}

int is_empty_queue(ItemQueue* q) {
	return (q->front == q->rear);
}

void init_Queue(ItemQueue* q) {
	q->front = 0;
	q->rear = 0;
}

void itemprint(int itemid) {
	if (itemid == 1)
		printf("\t\t\t시간 왜곡");
	else if (itemid == 2)
		printf("\t\t\t4-6 주사위");
	else if (itemid == 3)
		printf("\t\t\t5 확정 주사위");
	else if (itemid == 4)
		printf("\t\t\t-4 ~ 8 주사위");
	else if (itemid == 5)
		printf("\t\t\t기름병");
	else if (itemid == 6)
		printf("\t\t\t승리의 조각");
	else if (itemid == 7)
		printf("\t\t\t저주사위");
	else if (itemid == 8)
		printf("\t\t\t속박");
}

void enqueue(ItemQueue* q, int item) {
	if (is_full_queue(q)) {
		printf("\t\t\t아이템을 더이상 받을 수 없습니다.\n");
	}
	else {
		itemprint(item);
		printf(" 아이템을 획득하였습니다.\n", item);
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->item[q->rear] = item;
	}
	Sleep(1000);
}

int dequeue(ItemQueue* q) {
	if (is_empty_queue(q)) {
		return 0;
	}
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		return q->item[q->front];
	}
}

int checkqueue(ItemQueue* q) {
	if (is_empty_queue(q)) {
		return 0;
	}
	else {
		return q->item[(q->front + 1) % MAX_QUEUE_SIZE];
	}
}

void getItemRoulette(int n) {
	switch (n) {
	case 8:

		break;
	case 7:

		break;
	case 6:

		break;
	case 5:

		break;
	case 4:

		break;
	case 3:

		break;
	case 2:

		break;
	case 1:

		break;
	}
}
