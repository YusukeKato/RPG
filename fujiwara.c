#include <stdio.h>
#include "file.h"

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