#include <vector>
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>
#include "ex13_40.h"

class QueryResult
{

	friend void print(std::ostream &os, QueryResult qr);
public:
	std::set<size_t>::iterator begin(){return line_num->begin();}
	std::set<size_t>::iterator end(){return line_num->end();}
	std::shared_ptr<StrVec> get_file() const {return std::make_shared<StrVec>(lines);}
	QueryResult(std::string s, const StrVec &l, std::shared_ptr<std::set<size_t>> ln):word(s), lines(l), line_num(ln){ };
private:
	std::string word;
	StrVec lines;
	std::shared_ptr<std::set<size_t>> line_num;
};

class TextQuery
{
public:
	TextQuery(std::ifstream &infile);
	QueryResult query(std::string);
private:
	StrVec file;
	std::map<std::string, std::shared_ptr<std::set<size_t>>> wm;
};

void print(std::ostream &os, QueryResult qr);
