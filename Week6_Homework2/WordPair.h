#pragma once
#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>

struct WordPair {
	std::string eng;
	std::string kor;
};
class MyDic {
	WordPair words[MAXWORDS];
	int nWords;
public:
	void add(std::string eng, std::string kor);
	void load(std::string fiename);
	void sotre(std::string filename);
	void print();
	std::string getEng(int id);
	std::string getKor(int id);
};