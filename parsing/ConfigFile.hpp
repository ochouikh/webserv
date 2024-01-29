#ifndef CONFIGFILE_HPP
#define CONFIGFILE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <utility>
#include <vector>

#include "../server/Server.hpp"

enum {
	SERVER,
	OPEN_BRACKET,
	CLOSE_BRACKET,
	LISTEN,
	SERVER_NAME,
	LOCATION,
	ROOT,
	INDEX,
	ERROR_PAGE,
	CLIENT_MAX_BODY_SIZE,
	ALLOW_METHODS,
	RETURN,
	AUTO_INDEX,
	CGI_EXEC,
	ACCEPT_UPLOAD,
	UPLOAD_LOCATION,
	WORD,
	CGI_TIMEOUT,
	END_OF_LINE,
	END_OF_BRACKET
};

typedef struct s_ckeckDup
{
	bool	locationHasCloseBracket;
	bool	hasRoot;
	bool	hasIndex;
	bool	hasClientMaxBodySize;
	bool	hasAllowMethods;
	bool	hasReturn;
	bool	hasAutoIndex;
	bool	hasAcceptUpload;
	bool	hasUploadLocation;
	bool	hasCgiTimeout;
}			t_checkDup;

typedef std::vector<std::pair<int, std::string> >	Tokens;

std::vector<Server>	parser(int ac, char* av[]);
Tokens	tokenizer(char *file);
void	printError(std::string name);
int		toInt(std::string str);
std::string	toStr(int num);
int		isNum(std::string str);
int		isAlpha(std::string str);
int		isAlnum(std::string str);
int		isPath(std::string str);
int		isFile(std::string str);
int		isUrl(std::string str);
int		isExtension(std::string str);
int		isIp(std::string str);
int		isWord(std::string str);
int		isLocationPath(std::string str);
void	skipSlash(std::string & str);

#endif
