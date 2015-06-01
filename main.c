/* explanation : This game has created since 1 June.
 *
 * title       : Happy Story
 * 
 * Writer      : Yusuke Kato
 *               Satosi Simada
 *               Peko_chan
 * 
 * Player      : izumi tyinko-beru
 *               Naoya Tarumi
 * 
 * date        : June. 1,2,
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

int make_charactor(char *name, int *age, int *sex, int *job);
int Fujiwara();

void main(void)
{
	char name[1000];
	int age, sex, job;
	int story;
	int skill;
	char buf[1024];
	char c;
	
start_game:
    
	system("cls");
	printf("ゲームを開始します。\n");
	make_charactor(name, &age, &sex, &job);
	
	/*
	double d;
	
	while(1) {
		d = rand();
		printf("%lf\n", d);
	}
	*/
	printf("%d\n", job);
	switch(job) {
	case 7: /* 藤原 */
		Fujiwara();
		break;
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default: /* その他 */
		printf("%s は目が覚めた。暗く湿った部屋のベットの上。\n"
		       "知っている場所ではない。\n"
			   "頭がズキズキするし、記憶も曖昧だ。\n\n"
			   "なにをしようか？", name);
		break;
	}
	goto start_game;
	
	printf("「選択」\n");
	printf("1: 旅にでる\n"
	       "2: NEETする\n"
		   "3: たこ焼きを食べる\n"
		   "4: 隣の山田さんの家を訪れる\n" );
	
	scanf("%d", &story);
	
	switch(story) {
	case 1:
	    printf("%s は旅に出た\n"
			   "敵が現れた！！\n"
			   "敵の攻撃！！\n"
			   "%s はやられてしまった......\n",name, name);
		
		break;
	case 2:
		printf("%s は平和に暮らした。\n",name);
		printf("......GAME OVER......\n\n\n");
		//goto start_game;
		break;
		
	case 3:
		system("cls");
		printf("たこ焼きうまぁぁ！！\n");
		break;
	case 4:
		system("cls");
		printf(" ========================== \n");
		printf("山田さんこんにちわ！\n"
		       "%s は攻撃を仕掛けた！！"
		       "「技を選択」\n"
			   "1:ふぁいあーとるねーど！！\n"
			   "2:ジャスティススワン！！！！！\n"
			   "3:たこ焼きを食べる。\n",name);
		scanf("%d", &skill);
		
		switch(skill) {
		case 1:
			printf("山田さんを瞬殺！！\n"
				   "山田さんを倒した！！！\n");
			break;
		case 2:
			printf("山田さんを秒殺！！\n"
				   "山田さんを倒した！！！\n");
			break;
		case 3:
		    printf("たこ焼きを山田さんと分け合った！！\n"
				   "山田さんが仲間になった！！！\n");
			break;
		}
		
		printf("山田さん「世界の半分をお前にやろう！！」\n\n\n"
			   "!!Happy End!!!\n");
		printf(" ========================== \n");
		//system("cls");
		printf("Please push any key...\n");
		scanf("%s", name);
		goto start_game;
		
		break;
	}
	
	
	return ;
}

int make_charactor(char *name, int *age, int *sex, int *job)
{
	char buf[1024];

	/* 名前の入力 */
	printf("名前を教えてね♪ > ");
	fgets(buf, sizeof(buf), stdin);
	strncpy(name, buf, strlen(buf) - 1);

	printf("%s かぁ～、いい名前だね♪\n", name);

	printf("何歳に見える？　ウフフ♪ > ");
	fgets(buf, sizeof(buf), stdin);
	*age = atoi(buf);

	printf("%d歳とか（笑）\n", *age);
	
	printf("どっちかなぁ？\n 1:男 2:女の子 > ");
	fgets(buf, sizeof(buf), stdin);
	*sex = atoi(buf);

	printf("職業をえらんで\n"
		"\t1: Elf\n"
		"\t2: Wizard\n"
		"\t3: NEET\n"
		"\t4: 学生\n"
		"\t5: Knight\n"
		"\t6: たこ焼き職人\n"
		"\t7: スーパーハッカー藤原（スパコン８４台所持）\n"
		"\t8: 狂気な目をした鳥山（鳥山 あきr...a....「誠だよ！！！！！」\n"
		"\t9: たこ焼き（そのもの）\n"
		"\t10: 親の脛をかじり続けて早２４年の独身男性（ps.童貞）。\n"
		"\t11: 会社員（課長）のようなNEET\n"
		"\t12: 脱サラしてコンビニの店長になったけど病気を患ってやめて、今はNEETしてる\n"
		//"\t13: "
		"\t0: 松佐川 航\n");
	fgets(buf, sizeof(buf), stdin);
	*job = atoi(buf);

	return 0;
}

int Fujiwara(void)
{
	int i;
	int a;
	
	fflush(stdin);
	printf("hahaha....よくぞここまで来れたな...\n"
		"時代は２０ｘｘ年。私はMR.MAXの元で８４８年間修業を積んだ。\n"
		"こんな私を倒せるかな？？ さあ、始めよう.....\n");
	printf("\t1:スパコンを差し入れる。\n"
		"\t２:謝る。\n"
		"\t３:喧嘩を売る。\n");
	scanf("%d", &a);
	if(a == 1){
		printf("何台だ？ 台数によっては生かしておいてやろう。"
			"台数を入力しよう！！ >");
		scanf("%d", &i);
		if(i >= 82) {
			printf("お前なかなかわかっているな。今回は見逃してやろう。");
		} else {
			printf("ははは、冗談はその薄汚く気持ちの悪い顔だけにしろ。");
			printf("藤原は薄笑いを浮かべながらEnterKeyを噛みしめるよううに押した....\n"
				"to be continude.....");
			return 0;
		}
	}
	return 0;
}