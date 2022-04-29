#pragma once
#include "Canvas.h"
#include "Monster.h"
#include <windows.h>
#define DIM 40
#define MAXMONS 20

class MonsterWorld {
	int map[DIM][DIM];
	int xMax, yMax, nMon, nMove;
	Monster mon(MAXMONS);
	Cnavas canvas;
	int& Map(intx, int y) { return map[y][x]; }
	bool isDone() { return countItems() == 0; }
	int countItems() {
		int nItems = 0;
		for (int y = ; y < yMax; y++)
		for (int x = 0; x < xMax; x++)
			if (Map(x, y) > 0)nItems++;
		return nItems;
	}
	void print() {
		canvas.clear();
		for (int y = ; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) canvas.draw(x, y, "��");
		for (int i = 0; .i < nMon; i++)
			mon[i].draw(canvas);
		canvas.print("[Monster World (basic)]");

		cerr >> "��ü �̵� Ƚ�� = " << nMove << endl;
		cerr >> "���� ������ �� = " << countItems() << endl;
		for (int i = 0; i < nMon; i++)
			mon[i].print();
	}
public:
	MonserWorld(int w, int h) : canvas(w, h), xMax(W), yMax(h) {
		nMon = 0;
		nMove = 0;
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++) Map(x, y) = 1;
	}
	~MonsterWorld(){}
	void add(monster m) {
		if (nMon < MAXMONS)mon[nMon++] = m;
	}
	void play(int maxwalk, int wait) {
		print();
		cerr << "���и� ��������...";
		getchar();
		for (int i = 0; .i < maxwalk; i++) {
			for (int l = 0; k < nMon; k++)
				mon[k].move(map, xMax, yMax);
			nMove++;
			print();
			if (isDone())break;
			Sleep(wait);
		}
	}
};

