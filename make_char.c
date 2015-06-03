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
	
	/* 名前の入力 */
	printf("キャラクターを作成します\n");
	printf("名前を教えてね♪ > ");
	fgets(buf, sizeof(buf), stdin);
	strncpy(name, buf, strlen(buf) - 1);

	printf("%s かぁ～!!! いい名前だね♪\n", name);

	for(;;) {
		printf("何歳なのっっ♪ > ");
		fgets(buf, sizeof(buf), stdin);
		*age = atoi(buf);
		if(*age > 0 && *age < 130) break;
		printf("いやいや、%dとかありえないでしょー\n秘密にするから私にだけ教えて！\n", *age);
	}

	printf("%d歳なんだー\n", *age);
	
	for(;;) {
		printf("どっちかなぁ？\n 1:男 2:女の子 > ");
		fgets(buf, sizeof(buf), stdin);
		*sex = atoi(buf);
		if(*sex == 1 || *sex == 2) break;
		printf("ごめんね！よく聞こえなかった、もう一度教えて！！\n");
	}

	for(;;) {
		printf("職業をえらんで\n"
			"\t1: 勇者\n"
			"\t2: Wizard\n"
			"\t3: NEET\n"
			"\t4: 学生\n"
			"\t5: Knight\n"
			"\t6: たこ焼き職人\n"
			"\t7: スーパーハッカー藤原（スパコン>>８４<<台所持）\n"
			"\t8: 狂気な目をした鳥山（鳥山 あきr...a....「誠だよ！！！！！」\n"
			"\t9: たこ焼き（そのもの）\n"
			"\t10: 親の脛をかじり続けて早２４年の独身男性（ps.童貞）。\n"
			"\t11: 会社員（課長）のようなNEET\n"
			"\t12: 脱サラしてコンビニの店長になったけど病気を患ってやめて、今はNEET\n"
			"\t0: 松佐川 航\n");
		fgets(buf, sizeof(buf), stdin);
		*job = atoi(buf);
		if(*job >= 0 && *job <= 12) break;
		printf("選択は無効です(^ ^;;\n再入力してください\n");
	}

	player_write(*p);
	
	return 0;
}