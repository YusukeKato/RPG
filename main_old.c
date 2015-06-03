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
#include "file.h"

//int make_charactor(char *name, int *age, int *sex, int *job);


//void main(void)
void main_sub(void)
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
	//make_charactor(name, &age, &sex, &job);
	
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


