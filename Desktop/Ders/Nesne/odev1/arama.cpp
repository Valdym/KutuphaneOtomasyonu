#include <iostream>       // std::cout
#include <string>         // std::string
const int MAX = 3;			//Tablodaki yazar sayısı
using namespace std;

int main ()
{
  string str[MAX][MAX];
  for(int i=0;i<MAX-1;i++){
	  for(int j=0;j<MAX-1;j++){
		  cout<<"Lutfen bir kullanıcı giriniz"<<endl;
		  cin>>str[i][j];
	  }
  }

  string kelime;
  cout<<"Aradığınız kullanıcının adını girin"<<endl;
  cin>>kelime;
  bool sorgu;
  // different member versions of find in the same order as above:
  for(int i=0;i<MAX-1;++i){
	for(int j=0;j<MAX-1;++j){
	  sorgu=str[i][j].find(kelime) != string::npos;
	  if(sorgu==1){
		  cout<<"Aradığınız kullanıcı "<<j+1<<". satırda bulunmuştur :"<<str[i][j]<<endl;
	  }
	}
  }
	  /*	  if (found!=std::string::npos)
      std::cout << "second 'ahmet' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';
*/
  return 0;
}
