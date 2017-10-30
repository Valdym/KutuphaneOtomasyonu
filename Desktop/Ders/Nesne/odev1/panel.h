#ifndef _PANEL_H
#define _PANEL_H
#include <string>
using namespace std;

class panel{
public:
	panel();
	virtual ~panel();
	char girisYap();
	void kontrolEt(string ,string );

private:
	char *kullaniciAdi;
	char sifre[35];
};

#endif