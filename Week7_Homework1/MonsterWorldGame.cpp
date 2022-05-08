#include "MonsterWorld.h"
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	const int w = 16, h = 8;

	MonsterWorld game(w, h);
	Monster m("����", "��", rand() % w, rand() % h);
	game.add(m);
	game.add((Monster&)Monster("������", "��", rand() % w, rand() % h));
	game.add((Monster&)Monster("���״�", "��", rand() % w, rand() % h));
	game.add((Monster&)Monster("��Ʈ", "��", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------���� ����-------------------\n");
}