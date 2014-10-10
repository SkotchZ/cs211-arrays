#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */
void print254(int x){
	int j = 254;
	for (int i = 0; i < x;i++)
	cout << static_cast<char>(j);
}

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size] = {};
	nwhite = nother = 0;

	char c;
	i = 0;
	while ((c = src[i++]) != 0)
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
		for (int i = 0; i < size; ++i){
			cout << "    " << i << ':';
			print254(ndigit[i]);
			cout << endl;
		}
		cout << "white:"; print254(nwhite); cout<< endl;
		cout << "other:"; print254(nother); cout << endl;
	
}
