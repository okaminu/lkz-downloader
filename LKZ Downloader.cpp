#include <iostream>
#include <urlmon.h>
#include <string>
#include <sstream>
#pragma comment(lib, "urlmon.lib")
using namespace std;

string convertInt(int);
void main(){


string extension=".htm";
string url_part="http://www.lkzd.lki.lt/Zodynas/Zodziai.asp?txtZodis=";
string loc_part="C:\\LKZdownload\\";
string raide;
string url, loc;
string raidynas[32]={"a", "à", "b", "c", "è", "d", "e", "æ", "ë", "f", "g", "h", "i", "á", "y", "j", "k", "l", "m", "n", "o", "p", "r", "s", "ð", "t", "u", "ø", "û", "v", "z", "þ"};
cout<<"-----LKZ Downloader v1.0 (kopijuoti www.lkz.lt zodyna)----------"<<endl;
cout<<"by AurimasDGT (aurimasdgt@gmail.com)"<<endl;
cout<<endl;


cout<<"Iveskite kopijuojama raide, pvz a"<<endl;
cin>>raide;
cout<<"Iveskite Vieta diske, default C:\\LKZdownload\\"<<endl;
cin>>loc_part;
cout<<"Loading..."<<endl;

for(int i=0; i<32; i++){
url=url_part+raide+raidynas[i];
loc=loc_part+raide+raidynas[i]+extension;
HRESULT hr = URLDownloadToFile ( NULL, url.c_str(), loc.c_str(), 0, NULL );
}

system("pause");

}
