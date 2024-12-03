# Webserv

Webserv is a web server built in C++98, designed to emulate the behavior of NGINX. This project provides a deep dive into the mechanics of the Hypertext Transfer Protocol (HTTP/1.1), offering hands-on experience with web server functionality and architecture.

## Table of Contents
- [Installation](#installation)
- [Overview](#overview)
- [Features](#features)
- [Showcase](#showcase)
- [Contributors](#contributors)

## Installation

Clone the repository:  
```bash  
git clone git@github.com:ochouikh/webserv.git
cd webserv
```  
Compile the project using the provided Makefile:  
```bash  
make  
```  
Run the server:  
```bash  
./webserv [configuration file]  
```  
Example:  
```bash  
./webserv webserv.conf  
```
Go to the browser and run:
```bash  
http://localhost:8000
```

## Overview

HTTP is the backbone of the World Wide Web, enabling communication between servers and clients like web browsers. This project empowers you to build your own HTTP server, offering hands-on experience in:

- Processing HTTP requests (GET, POST, DELETE).
- Serving static web pages.
- Managing file uploads seamlessly.
- Implementing error handling and creating custom error pages.

The core objective of Webserv is to deepen your understanding of HTTP and network programming while honing your skills in C++.

## Features

- Fully compliant with HTTP/1.1 standards.
- Capable of serving static HTML pages.
- Supports file uploads for enhanced functionality.
- Utilizes non-blocking I/O with mechanisms like poll(), epoll(), or similar for efficient performance.
- Includes a configuration file for customizable server settings.
- Handles multiple clients and supports multiple ports simultaneously.
- Features dynamic error handling with customizable default error pages.
- Integrates CGI for executing server-side scripts.
- Offers support for cookies and session management for a better user experience.

## Showcase
</br></br>

<img src="https://github.com/ochouikh/webserv/blob/master/showcase/home.png" alt="image" width="700" height="auto">
<img src="https://github.com/ochouikh/webserv/blob/master/showcase/static%20websites.png" alt="image" width="700" height="auto">
<img src="https://github.com/ochouikh/webserv/blob/master/showcase/upload.png" alt="image" width="700" height="auto">
<img src="https://github.com/ochouikh/webserv/blob/master/showcase/cgi.png" alt="image" width="700" height="auto">

## Contributors

* [Mohssine El Aini](https://github.com/mel-aini)
* [Houssam eddine](https://github.com/hel-mamo)
