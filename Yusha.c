/*day   :20150602,3
 *Yusha
 *
 *writer:  Yusuke Kato
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include "file.h"

int Yusha()
{
	int c;
	int iti;
	
	printf("\n���N�O�ɕ������������ɂ���āA���E�͖łт悤�Ƃ��Ă����B\n"
	            "�����Ŋe���́A���������̂��߂ɌR���������킹�����A\n"
	            "�����R�̑O�ł͖��͂ł������B\n"
	            "���Ƃ����Ȃ��Ă͂ƍl���������́h�`���̗E�ҁh��T���o���A\n"
	            "���̎҂ɖ���������������Ƃɂ����B\n\n\n\n");
	
	printf("%s �͖ڊo�߂��B����������Ă��鑾�z�̌����܂Ԃ����B\n"
	            "�z�c����o��ƒN�����������ĂԐ�������B\n\n\n", p.name);
		   
	printf("�N���Ă�ł��邩[�I��]\n");
	
	printf("1: ��\n"
	       "2: ��\n"
	       "3: ���L�̃~�P\n"
	       "4: �ƂȂ�̎R�c����\n");
	       
	scanf("%d", &iti);
	
	if (iti == 1) {
		printf("�Ă�ł���͕̂�̂悤���B\n"
		       "��u�����͂�ł��Ă邩��A�����H�ׂĂ�v\n"
		       "�e�[�u���̏�ɂ͂����������ȃp���ƃX�[�v�A�T���_������B\n"
		       "���������܂��A�Ƃ��������X�[�v�����ɉ^�ԁB\n"
		       "����H�ׂ��u�ԁA���ɂ��̒��𑖂�B\n"
		       "�I�I�I�I�I �ł� �I�I�I�I�I\n");
	} else if (iti == 2) {
		printf("�Ă�ł���͕̂��̂悤���B\n"
		       "���u�܂��������`���Ă���Ȃ����v\n"
		       "�܂������邽�߂ɉƂ̗��Ɍ��������B\n"
		       "�����̂悤�ɕ����g���Ă܂�������B\n"
		       "�������A�܂������낤�Ƃ����u�ԁA�܂����͂�����ԁI�I\n"
		       "�I�I�I�I�I �j�Ђ��ɂ� �I�I�I�I�I\n");
	} else if (iti == 3) {
		printf("�Ă�ł���͈̂��L�̃~�P�̂悤���B\n"
		       "�~�P�u�E�E�E�E�E�E�ɂ�[�v\n"
		       "�E�E�E�E�E�E�Ȃ��ށE�E�E�E�E\n");
	} else if (iti == 4) {
		printf("�Ă�ł���̂͂ƂȂ�̎R�c����̂悤���B\n"
			   "�u����ɂ��́I�I�R�c����A�ǂ�������ł����B\n"
			   " �R�c����E�E�E�H �ق����܂܂ŁA������������ł����B\n"
			   );
	}

	
	player_write(p);
	
	printf("Please any key.\n");
	c = fgetc(stdin);
	
	return;
 }