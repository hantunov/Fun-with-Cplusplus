Napraviti klasu Auto sa sljedećim obveznim poljima:

•	motor (Motor*)  - privatno polje
•	niz guma vector<Guma*>
•	dodati nekoliko drugih jednostavnih polja po vlastitom izboru – min. 2 – primjerice, naziv, boja, broj vrata i sl.
•	void ugradiMotor(Motor* m) i Motor* izvadiMotor() – funkcije pomoću kojih u Auto ugrađujete motor i vadite motor iz auta
•	void staviGume(vector<Guma*> gume) i vector<Guma*> skiniGume()
•	void ispis() – ispisati podatke o automobilu, motoru i gumama

Klasa Motor ima javna polja naziv i kubikaža. Klasa guma ima javna polja id (različit za svaku gumu) gume i tip (ljetne/zimske).
U main programu napraviti sljedeće:

1.	Kreirati jedan objekt tipa Motor (m1) i 4 zimske gume.
2.	Kreirati objekt tipa Auto (a1) i ugraditi mu motor m1 i 4 gume. Objekt a1 kreirati koristeći operator „new“.
3.	Ispisati podatke automobila
4.	„Pojačati“ motor automobila a1 tako da mu povećate kubikažu
5.	Pretvoriti gume automobila a1 iz zimskih u ljetne (ili obrnuto, ovisno što ste izabrali)
6.	Ispisati podatke automobila
7.	Osloboditi memoriju za Automobil a1
