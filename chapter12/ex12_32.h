#include <vector>
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>
#include "ex12_22.h"

class QueryResult
{

	friend void print(std::ostream &os, QueryResult qr);
public:
	using line_no = std::vector<std::string>::size_type;
	std::set<line_no>::iterator begin(){return line_num->begin();}
	std::set<line_no>::iterator end(){return line_num->end();}
	std::shared_ptr<StrBlob> get_file() const {return std::make_shared<StrBlob>(lines);}
	QueryResult(std::string s, const StrBlob &l, std::shared_ptr<std::set<line_no>> ln):word(s), lines(l), line_num(ln){ };
private:
	std::string word;
	StrBlob lines;
	std::shared_ptr<std::set<line_no>> line_num;
};

class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &infile);
	QueryResult query(std::string);
private:
	StrBlob file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

void print(std::ostream &os, QueryResult qr);
