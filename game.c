/*
 * Date   : 20150602
 * Name   : Yusha
 *
 * Writer:  Yusuke Kato
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include "file.h"
 
int Yuusha();

int Yuusha()
{
	int c;
	
	printf("\n���N�O�ɕ������������ɂ���āA���E�͖łт悤�Ƃ��Ă����B\n"
		   "�����Ŋe���́A���������̂��߂ɌR���������킵�����A\n"
		   "�����R�̑O�ł͖��͂ł������B\n"
		   "���Ƃ����Ȃ��Ă͂ƍl���������́h�`���̗E�ҁh��T���o���A\n"
		   "���̎҂ɖ���������������Ƃɂ����B\n\n\n\n");
		   
	printf("%s �͖ڊo�߂��B����������Ă��鑾�z�̌����܂Ԃ����B\n", p.name);
	
	player_write(p);
	
	printf("Please any key.\n");
	c = fgetc(stdin);	   
	
	return;
 }