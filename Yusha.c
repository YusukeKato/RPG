/*
 * Creation date : 2 June 2015
 * Last updated  : 12 June 2015
 * Filename      : Yusha.c
 *
 * Author(story) : Yusuke Kato
 *
 * ========================================
 *       Episode 1: �E�҂̗�����
 * ========================================
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#include "file.h"
#include "print_screen.h"

//#define printf print_story

extern struct player p;

int Yusha(void)
{
	int c;
	int a;
	int b;
	
	//PROLOGUE
	
	
	
	//c = fgetc(stdin);
	//Sleep(2000);
	
	system("cls");
	printf("\n"
	       "      ================================= \n"
	       "           Episode 1: �E�҂̗�����      \n"
	       "      =================================\n");
	   
	c = fgetc(stdin);   
	//fflush(stdin);
	
	printf( "\n---------------  ���E  ---------------\n\n\n"
			"���N�O�ɕ������������ɂ���āA���E�͖łт悤�Ƃ��Ă����B\n"
			"�����Ŋe���́A���������̂��߂ɌR���������킹�����A\n"
			"�����R�̑O�ł͖��͂ł������B\n"
			"���Ƃ����Ȃ��Ă͂ƍl���������́h�`���̗E�ҁh��T���o���A\n"
			"���̎҂ɖ���������������Ƃɂ����B\n\n\n"
			"----------------------------------------------\n\n\n\n\n\n");
	
	c = fgetc(stdin);
	//fflush(stdin);
	
	printf("\n\n\n1 - 1\n\n\n ");
	
	system("cls");
	printf("\n\n\n< 1 - 1 > ����̎n�܂�");
	printf( "\n\n\n- - - - - - �p���p�b�p�p���� %s �̉� - - - - - -\n\n"
			"\n %s �͖ڂ��o�߂��B����������Ă��鑾�z�̌����܂Ԃ����B\n"
			"�x�b�g����~��āA�ЂƂL�т�����B\n"
			"�ƁA���̂Ƃ��A�N���� %s ���ĂԐ�����������......\n\n",p.name, p.name, p.name);
	
	printf("�N���Ă�ł��邩[�I��]\n");
	
	printf("1: ��\n"
	       "2: ��\n"
	       "3: ���L�̃~�P\n"
	       "4: �ƂȂ�̎R�c����\n");
	
	scanf("%d",&a);
	
	if (a == 1) {
		system("cls");
		printf("\n�Ă�ł���͕̂�̂悤���B\n"
		       "��u�����͂�ł��Ă邩��A�����H�ׂĂ�v\n"
		       "�e�[�u���̏�ɂ͂����������ȃp���ƃX�[�v�A�T���_������B\n"
		       "���������܂��A�Ƃ��������X�[�v�����ɉ^�ԁB\n"
		       "����H�ׂ��u�ԁA���ɂ��̒��𑖂�B\n"
		       "�I�I�I�I�I �ł��I�I�I�I�I\n");
		       c = fgetc(stdin);
	} else if (a == 2) {
		system("cls");
		printf("\n�Ă�ł���͕̂��̂悤���B\n"
		       "���u�܂��������`���Ă���Ȃ����v\n"
		       "�܂������邽�߂ɉƂ̗��Ɍ��������B\n"
		       "�����̂悤�ɕ����g���Ă܂�������B\n"
		       "�������A�܂������낤�Ƃ����u�ԁA�܂����͂�����ԁI�I\n"
		       "�I�I�I�I�I �j�Ђ��ɂ� �I�I�I�I�I\n");
		       c = fgetc(stdin);
	} else if (a == 3) {
		system("cls");
		printf("\n�Ă�ł���͈̂��L�̃~�P�̂悤���B\n"
		       "�~�P�u�E�E�E�E�E�E�ɂ�[�v\n"
		       "�E�E�E�E�E�E�Ȃ��ށE�E�E�E�E\n");
		       c = fgetc(stdin);
	} else if (a == 4) {
		system("cls");
		printf("\n�Ă�ł���̂͂ƂȂ�̎R�c����̂悤���B\n"
			   "%s�u����ɂ��́I�I�R�c����A�ǂ�������ł����B\n"
			   " �R�c����E�E�E�H �ق����܂܂ŁA������������ł���?�v\n"
			   "�R�c����u�E�E�E�E�E�E�t�t�t�E�E�E�t�n�n�n�n�n�n�n�n�n�n�n�b�I�I�I�v\n"
			   "%s �u�Ȃ�ł����I�H �ǂ�������ł����I�H�I�H�v\n"
			   "�R�c����u�����������I�I�I�I�I�I�I�I�v\n"
			   "%s �u�ȁA�Ȃ񂾂��āI�H�I�H�v\n"
			   "�R�c����u���E�͂�����Ă������I�I�I�I�I�v\n"
			   "%s �u�����͂����Ȃ����I�I�I�I�I�v\n\n\n\n"
			   "�I�I�I�R�c����Ƃ̐퓬�ɓ˓��I�I�I\n",p.name ,p.name, p.name, p.name);
			   c = fgetc(stdin);
	}
	//2 - 2
	
	c = fgetc(stdin);
	
	system("cls");
	printf("\n\n�^�P�I�u���[���I�I �N���Ă邩�[�[���I�I�I�v\n"
	       "�e�F�̃^�P�I�̌ĂԐ�������B����Ȃɒ������ɗ���Ȃ�Ē������B\n"
	       "�^�P�I�u�m���Ă邩�I�I�I������|����̂́h�`���̗E�ҁh�����Ȃ񂾂��Ă�I�I�I\n"
	       "        �h�`���̗E�ҁh���āA%s �̂��Ƃ���ȁI�H\n", p.name);
	
	printf("���Ȃ��̕Ԏ��́H [�I��]\n\n\n");
	
	printf("1,�������A��������B\n"
	       "2,����Ȃ킯�Ȃ��B\n"
	       "3,�h�`���̗E�ҁh�A����̓^�P�I�A���O�̂��Ƃ��I�I�I\n");
	
	scanf("%d",&b);
	
	if (b == 1) {
		system("cls");
		printf("�^�P�I�u����ς肻�����B����A�����ƑO���番�����Ă����񂾁B\n"
		       "	���O���E�҂����Ă��Ƃ͂�B\n"
		       "	�����ĉ����E�҂�����ȁI�I�I�v\n"
		       "%s  �u�Ȃ񂾂��āI�H�I�H�v\n"
		       "�^�P�I�u�E�҂͈�l�����ł����E�E�E�E�E�E\n"
		       "	�܂艴�����O���A�ǂ��炩���E�҂Ƃ��Ė����𓢂��ɍs���B\n"
		       "	������ǂ��炪�{���̗E�҂��A���߂Ȃ���Ȃ�˂��B\n"
		       "	�������I�I %s�I�I\n",p.name ,p.name);
	} else if (b == 2) {
		
	} else {
		
	}
	
	player_write(p);
	
	printf("Please Enter key\n");
	c = fgetc(stdin);
	
	return 0;
}