/******
*ohjelman nimi: harjoitus 9
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka toimii laskimena. Käyttäjältä kysytään kaksi kokonaislukua, jonka jälkeen ohjelma antaa valikon laskutoimituksista. Valikko nayttaa seuraavalta:

VALIKKO 1. Summa 2. Erotus 3. Tulo 4. Osamaara 5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
*versio 1.0
*pvm: 24.9.2014
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int toiminto;

	cout << "Anna kokonaisluku 1 ";
	cin >> luku1;
	cout << "Anna kokonaisluku 2 ";
	cin >> luku2;

	cout << "VALIKKO\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos \n";

	cin >> toiminto;

	if (toiminto == 1)
		cout << (luku1 + luku2);
	if (toiminto == 2)
		cout << (luku1 - luku2);
	if (toiminto == 3)
		cout << (luku1 * luku2);
	if (toiminto == 4)
		cout << ((float)luku1 / luku2);
	if (toiminto == 5)
		cout << (luku1 % luku2);

	return 0;


}