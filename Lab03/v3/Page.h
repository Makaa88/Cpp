#ifndef PAGE_H
#define PAGE_H
#include <string>
#include <iostream>
#include <vector>

class Page
{
public:
	Page(const std::string first = "empty", const std::string second = "empty");
	void AddHeader(const std::string str);
	void AddText(const std::string str);
	void Print(const int i = -1) const; 
	Page* Copy();

private:
	std::string P_header;
	std::string P_bufor;


};



#endif