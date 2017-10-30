#ifndef _YAZARLAR_H
#define _YAZARLAR_H
const int maxYazarSayisi = 30;
const int maxKitapSayisi = 30;

class yazarlar{
public:
	yazarlar();
	virtual ~yazarlar();
	void yazarinKitaplari();
	void yazarBilgileri();
private:
	char *yazarinAdi[maxYazarSayisi];
	char *kitaplari[maxYazarSayisi][maxKitapSayisi];
}

#endif

