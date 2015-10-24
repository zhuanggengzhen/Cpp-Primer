#include <vector>
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>

class QueryResult
{
	friend void print(std::ostream &os, QueryResult qr);
public:
	using line_no = std::vector<std::string>::size_type;
	QueryResult(std::string s, std::shared_ptr<std::vector<std::string>> l, std::shared_ptr<std::set<line_no>> ln):word(s), lines(l), line_num(ln){ };
private:
	std::string word;
	std::shared_ptr<std::vector<std::string>> lines;
	std::shared_ptr<std::set<line_no>> line_num;
};

class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &infile);
	QueryResult query(std::string);
private:
	std::shared_ptr<std::vector<std::string>> file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

void print(std::ostream &os, QueryResult qr);
