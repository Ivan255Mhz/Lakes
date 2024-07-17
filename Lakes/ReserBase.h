#pragma once

#include <vector>
#include "Reservoir.h"
#include<algorithm>
#include <fstream>
using namespace std;



class ReserBase
{
	vector  <Reservoir> base;

public:

	void print() const {
		for (int i{}; i < base.size(); ++i) {
			base[i].print();
		}
	}

	size_t size() const {
		return base.size();
	}

	void push_back(const  Reservoir& obj) {
		base.push_back(obj);
	}

	void pop_back() {
		base.pop_back();
	}

	void sort_Length() {

		sort(base.begin(), base.end(), [](const Reservoir& left, const Reservoir& riht) { return left.getLength() < riht.getLength();});
	}

	void sort_Width() {
		sort(base.begin(), base.end(), [](const Reservoir& left, const Reservoir& riht) { return left.getWidth() < riht.getWidth(); });
	}
	
	void sort_Depth() {
		sort(base.begin(), base.end(), [](const Reservoir& left, const Reservoir& riht) { return left.getDepth() < riht.getDepth(); });
	}

	void  Text_File() const {
		std::ofstream out;
		out.open("File.txt");
		if (out.is_open()) {
			cout << "File is open" << std::endl;
			for (int i{}; i < base.size(); ++i) {
				out << base[i] << endl;
			}
		}
		out.close();
		cout << "File is closed" << endl;
	}

	void Binary_File() const {
		std::ofstream out;
		out.open("Bin_file.txt", ios::binary);
		if (out.is_open()) {
			cout << "The file is open" << std::endl;
			for (int i{}; i < base.size(); ++i) {
				out << base[i] << endl;
			}
		}
		out.close();
		cout << "File is closed" << endl;
	}

	Reservoir& operator[](int i) {
		return base[i];
	}
	Reservoir operator[](int i) const  {
		return base[i];
	}

	void DeleteByIndex(int i) {
		base.erase(base.begin() + i);
	}
};


void Removal(ReserBase & base);

void Comparison(ReserBase & base);

void SortBase(ReserBase& base);