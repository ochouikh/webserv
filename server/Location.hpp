#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <iostream>
#include <vector>

class Location
{
	private:
		std::string												path;
		std::string												root;
		std::vector<std::string>								index;
		size_t													clientMaxBodySize;
		std::vector<std::string>								allowMethods;
		std::string												redirection;
		bool													autoIndex;
		std::vector<std::pair<std::string, std::string> >		cgiExec;
		bool													acceptUpload;
		std::string												uploadLocation;
		std::vector<std::pair<std::string, std::vector<int> > >	errorPages;
		unsigned int											cgiTimeout;

	public:
		Location(void);
		Location(std::string path, std::string root, std::vector<std::string> index, 
			int clientMaxBodySize, std::vector<std::string> allowMethods, std::string redirection, bool autoIndex,
				std::pair<std::string, std::string> cgiExec, bool acceptUpload,
					std::string uploadLocation, unsigned int cgiTimeout);
		~Location(void);

		const std::string& getRedirection() const;

		void	setcgiTimeOut(unsigned int cgiTimeout);
		void	setPath(std::string path);
		void	setRoot(std::string root);
		void	setIndex(std::vector<std::string> index);
		void	setClientMaxBodySize(int clientMaxBodySize);
		void	setAllowMethods(std::vector<std::string> allowMethods);
		void	setRedirection(std::string redirection);
		void	setAutoIndex(bool autoIndex);
		void	setCgiExec(std::pair<std::string, std::string> cgiExec, std::string num);
		void	setAcceptUpload(bool acceptUpload);
		void	setUploadLocation(std::string uploadLocation);
		void	setErrorPages(std::pair<std::string, std::vector<int> > errorPage, std::string num);

		unsigned int	getcgiTimeOut(void);
		size_t	getClientMaxBodySize(void);
		std::vector<std::pair<std::string, std::vector<int> > >	getErrorPages(void);
		std::string	getPath(void);
		std::string	getRoot(void);
		std::vector<std::string>	getIndex(void);
		bool	getAutoIndex(void);
		bool	getAcceptUpload(void);
		std::vector<std::pair<std::string, std::string> >	getCgiExec(void);
		std::string	getUploadLocation(void);
		std::vector<std::string>&	getAllowMethods(void);
};

#endif
