/*
 * Explanation : This game has created since 1 June.
 *
 * Title       : Happy Story
 * 
 * Writer      : Yusuke Kato
 *               Satosi Simada
 *               Peko_chan
 * 
 * Player      : izumi tyinko-beru
 *               Naoya Tarumi
 * 
 * Date        : June. 1,2,
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <stdarg.h>

#include "file.h"
#include "print_screen.h"

/* Global variable */
struct player p;

void main(void)
{
	int con;
	
start_game:
	
	system("cls");
	printf("�Q�[�����J�n���܂��B\n");
	
	if(player_read(&p) != 0) {
make_char:
		make_charactor(&p);
		printf("�L�����N�^�[�쐬�����I\n");
	} else {
		printf("�L�����N�^�[�f�[�^�����o�I\n���[�h��.......\n"
			"+----------------------+\n"
			"|���x�� | %d\n"
			"|���O   | %s\n"
			"|�E��   | %d\n"
			"|�N��   | %d\n"
			"|����   | %d\n"
			"+----------------------+\n",
			p.level, p.name, p.job, p.age, p.sex);
		printf("���̃f�[�^�Ńv���C���܂����H\n"
			"1: Yes, 0: No > ");
		scanf("%d", &con);
		if(!con) goto make_char;
	}
	
	system("cls");
	
	fflush(stdin);
	/* �E�Ƃɂ���ăX�g�[���[�𕪊� */
	switch(p.job) {
	case 1:
		Yusha();
		break;
	case 7:
		Fujiwara();
		break;
	default:
		printf("�X�g�[���[�̃��[�h�Ɏ��s���܂���\n\n");
		break;
	}
	
	printf("�ǂꂩ�L�[�������Ă�������...");
	_getch();
	
	system("cls");
	printf("Continue: 1\n");
	printf("Exit    : 0\n");
	scanf("%d", &con);
	if(con == 1) goto start_game;
	
	return 0;
}
