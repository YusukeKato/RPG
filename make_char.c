#include <stdio.h>
#include "file.h"

int make_charactor(struct player *p)
{
	char buf[1024];
	char *name = p->name;
	int *age = &(p->age);
	int *sex = &(p->sex);
	int *job = &(p->job);
	
	fflush(stdin);
	
	// �������� 0 �ɏ�����
	p->money = 0;
	// ���x���� 1 �ɏ�����
	p->level = 1;
	
	/* ���O�̓��� */
	printf("�L�����N�^�[���쐬���܂�\n");
	printf("���O�������Ăˁ� > ");
	fgets(buf, sizeof(buf), stdin);
	strncpy(name, buf, strlen(buf) - 1);
	name[strlen(buf) -1] = '\0';

	printf("%s �����`!!! �������O���ˁ�\n", name);

	/* �N��̓��� */
	for(;;) {
		printf("���΂Ȃ̂����� > ");
		fgets(buf, sizeof(buf), stdin);
		*age = atoi(buf);
		if(*age > 0 && *age < 130) break;
		printf("���₢��A%d�Ƃ����肦�Ȃ��ł���[\n�閧�ɂ��邩�玄�ɂ��������āI\n", *age);
	}

	printf("%d�΂Ȃ񂾁[\n", *age);
	
	/* ���ʂ̓��� */
	for(;;) {
		printf("�ǂ������Ȃ��H\n 1:�j 2:���̎q > ");
		fgets(buf, sizeof(buf), stdin);
		*sex = atoi(buf);
		if(*sex == 1 || *sex == 2) break;
		printf("���߂�ˁI�悭�������Ȃ������A������x�����āI�I\n");
	}

	/* �E�Ƃ̓��� */
	for(;;) {
		printf("�E�Ƃ�������\n"
			"\t1: �E��\n"
			"\t2: �����i�V���[�x���g��j\n"
			"\t3: ����ƌ�\n"
			"\t4: �w���i�̂ӂ�������X�p�C�j\n"
			"\t5: �E�҂ɓ��ꂽ�i�C�g\n"
			"\t6: �����Ă��E�l\n"
			"\t7: �X�[�p�[�n�b�J�[�����i�X�p�R���W�S�䏊���j\n"
			"\t8: ���C�Ȗڂ��������i�ȉ����j\n"
			"\t9: �����Ă��i���̂��́j\n"
			"\t10: �e�����������葱���đ��Q�S�N�̓Ɛg�j���ips.����j�B\n"
			"\t11: ��Ј��i�ے��ɂȂ肽���Ɗ肢�����ĂP�R�N�j�̂悤�ȃj�[�g\n"
			"\t12: �E�T�����ăR���r�j�̓X���ɂȂ������Ǖa�C�������Ă�߂āA���̓j�[�g\n"
			"\t0: ����(���܂�)�� �q\n");
		fgets(buf, sizeof(buf), stdin);
		*job = atoi(buf);
		if(*job >= 0 && *job <= 12) break;
		printf("�I���͖����ł�(^ ^;;\n�ē��͂��Ă�������\n");
	}

	player_write(*p);
	
	return 0;
}
