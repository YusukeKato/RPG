/*
 * Date: 2, June
 * Author: Yosida
 */

#include <stdio.h>
#include "file.h"
#include "print_screen.h"

extern struct player p;

int Fujiwara(void)
{
	int i;
	int a;
	
	fflush(stdin);
	
	print_story("hahaha....�悭�������܂ŗ��ꂽ��...\n");
	print_story("����͂Q�O�����N�B����MR.MAX�̌��łW�S�W�N�ԏC�Ƃ�ς񂾁B\n");
	print_story("����Ȏ���|���邩�ȁH�H �����A�n�߂悤.....\n");
	
	print_story("\t1:�X�p�R�������������B\n");
	print_story("\t�Q:�ӂ�B\n");
	print_story("\t�R:���܂𔄂�B\n");
	
	scanf("%d", &a);
	if(a == 1){ /* �X�p�R������������� */
		print_story("���䂾�H �䐔�ɂ���Ă͐������Ă����Ă�낤�B\n");
		print_story("�䐔����͂��悤�I�I >\n");
		scanf("%d", &i);
		
		if(i >= 82) {
			print_story("���O�Ȃ��Ȃ��킩���Ă���ȁB����͌������Ă�낤�B\n");
		} else {
			print_story("�͂͂́A��k�͂��̔������C�����̈����炾���ɂ���B\n");
			print_story("�����͔��΂��𕂂��ׂȂ���Enter Key�����݂��߂�悤�ɉ�����....\n"
				"to be continude.....\n");
			return 0;
		}
	} else if(a == 2) { /* �ӂ� */
		
	} else if(a == 3) { /* ���܂𔄂� */
		
	}
	return 0;
}