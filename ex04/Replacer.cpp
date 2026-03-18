#include "Replacer.hpp"
#include <iostream>
#include <fstream>

static bool readFileContent(const std::string &filename, std::string &content)
{
	std::ifstream ifs;
	char c;

	content.clear();
	ifs.open(filename.c_str());
	if(!ifs.is_open())
	{
		std::cout << "Error: could not open input file." << std::endl;
		return(false);
	}
	while(ifs.get(c))
		content += c;
	if(!ifs.eof())
	{
		std::cout << "Error: could not read input file." << std::endl;
		return(false);
	}
	return(true);
}

static std::string replaceAllOccurrences(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string result;
	std::string::size_type pos;
	std::string::size_type found;

	if(s1.empty())
		return(content);
	pos = 0;
	found = content.find(s1, pos);
	while(found != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
		found = content.find(s1, pos);
	}
	result += content.substr(pos);
	return(result);
}

static bool writeFileContent(const std::string &filename, const std::string &content)
{
	std::ofstream ofs;

	ofs.open(filename.c_str());
	if(!ofs.is_open())
	{
		std::cout << "Error: could not open output file." << std::endl;
		return(false);
	}
	ofs << content;
	if(!ofs)
	{
		std::cout << "Error: could not write output file." << std::endl;
		return(false);
	}
	return(true);
}

bool processReplacement(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::string content;
	std::string replaced;
	std::string outputFilename;

	if(s1.empty())
	{
		std::cout << "Error: s1 must not be empty." << std::endl;
		return(false);
	}
	if(!readFileContent(filename, content))
		return(false);
	replaced = replaceAllOccurrences(content, s1, s2);
	outputFilename = filename + ".replace";
	if(!writeFileContent(outputFilename, replaced))
		return(false);
	return(true);
}
