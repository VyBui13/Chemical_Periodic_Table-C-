#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <iomanip>
#include "Color.h"
using std::cout;
using namespace std;

struct Chemic
{
	int num;
	double M;
	string name;
	string VNName;
	string team;

	string elecStructure;
	string period;
	string kind;
};


//process some nature
Chemic createChemic(int n) {
	Chemic a;
	a.num = n;
	if (n == 1) {
		a.name = "H";
		a.M = 1.008;
		a.VNName = "Hidro";
		a.team = "A";
	}
	else if (n == 2) {
		a.name = "He";
		a.M = 4.003;
		a.VNName = "Heli";
		a.team = "A";
	}
	else if (n == 3) {
		a.name = "Li";
		a.M = 6.94;
		a.VNName = "Liti";
		a.team = "A";
	}
	else if (n == 4) {
		a.name = "Be";
		a.M = 24.31;
		a.VNName = "Beri";
		a.team = "A";
	}
	else if (n == 5) {
		a.name = "B";
		a.M = 10.81;
		a.VNName = "Bo";
		a.team = "A";
	}
	else if (n == 6) {
		a.name = "C";
		a.M = 12.01;
		a.VNName = "Cacbon";
		a.team = "A";
	}
	else if (n == 7) {
		a.name = "N";
		a.M = 14.007;
		a.VNName = "Nito";
		a.team = "A";
	}
	else if (n == 8) {
		a.name = "O";
		a.M = 15.999;
		a.VNName = "Oxi";
		a.team = "A";
	}
	else if (n == 9) {
		a.name = "F";
		a.M = 18.998;
		a.VNName = "Flo";
		a.team = "A";
	}
	else if (n == 10) {
		a.name = "Ne";
		a.M = 20.18;
		a.VNName = "Neon";
		a.team = "A";
	}
	else if (n == 11) {
		a.name = "Na";
		a.M = 22.989;
		a.VNName = "Natri";
		a.team = "A";
	}
	else if (n == 12) {
		a.name = "Mg";
		a.M = 24.31;
		a.VNName = "Magie";
		a.team = "A";
	}
	else if (n == 13) {
		a.name = "Al";
		a.M = 26.98;
		a.VNName = "Nhom";
		a.team = "A";
	}
	else if (n == 14) {
		a.name = "Si";
		a.M = 28.09;
		a.VNName = "Silic";
		a.team = "A";
	}
	else if (n == 15) {
		a.name = "P";
		a.M = 30.97;
		a.VNName = "Photpho";
		a.team = "A";
	}
	else if (n == 16) {
		a.name = "S";
		a.M = 32.06;
		a.VNName = "Luu Huynh";
		a.team = "A";
	}
	else if (n == 17) {
		a.name = "Cl";
		a.M = 35.45;
		a.VNName = "Clo";
		a.team = "A";
	}
	else if (n == 18) {
		a.name = "Ar";
		a.M = 39.95;
		a.VNName = "Argon";
		a.team = "A";
	}
	else if (n == 19) {
		a.name = "K";
		a.M = 39.10;
		a.VNName = "Kali";
		a.team = "A";
	}
	else if (n == 20) {
		a.name = "Ca";
		a.M = 40.08;
		a.VNName = "Canxi";
		a.team = "A";
	}
	else if (n == 21) {
		a.name = "Sc";
		a.M = 44.96;
		a.VNName = "Scandi";
		a.team = "B";
	}
	else if (n == 22) {
		a.name = "Ti";
		a.M = 47.90;
		a.VNName = "Titan";
		a.team = "B";
	}
	else if (n == 23) {
		a.name = "V";
		a.M = 50.94;
		a.VNName = "Vanadi";
		a.team = "B";
	}
	else if (n == 24) {
		a.name = "Cr";
		a.M = 51.996;
		a.VNName = "Crom";
		a.team = "B";
	}
	else if (n == 25) {
		a.name = "Mn";
		a.M = 54.94;
		a.VNName = "Mangan";
		a.team = "B";
	}
	else if (n == 26) {
		a.name = "Fe";
		a.M = 55.85;
		a.VNName = "Sat";
		a.team = "B";
	}
	else if (n == 27) {
		a.name = "Co";
		a.M = 58.93;
		a.VNName = "Coban";
		a.team = "B";
	}
	else if (n == 28) {
		a.name = "Ni";
		a.M = 58.71;
		a.VNName = "Niken";
		a.team = "B";
	}
	else if (n == 29) {
		a.name = "Cu";
		a.M = 63.54;
		a.VNName = "Dong";
		a.team = "B";
	}
	else if (n == 30) {
		a.name = "Zn";
		a.M = 65.41;
		a.VNName = "Kem";
		a.team = "B";
	}
	else if (n == 31) {
		a.name = "Ga";
		a.M = 69.72;
		a.VNName = "Gali";
		a.team = "A";
	}
	else if (n == 32) {
		a.name = "Ge";
		a.M = 72.64;
		a.VNName = "Gemani";
		a.team = "A";
	}
	else if (n == 33) {
		a.name = "As";
		a.M = 74.92;
		a.VNName = "Asen";
		a.team = "A";
	}
	else if (n == 34) {
		a.name = "Se";
		a.M = 78.96;
		a.VNName = "Selen";
		a.team = "A";
	}
	else if (n == 35) {
		a.name = "Br";
		a.M = 79.91;
		a.VNName = "Brom";
		a.team = "A";
	}
	else if (n == 36) {
		a.name = "Kr";
		a.M = 83.80;
		a.VNName = "Kripton";
		a.team = "A";
	}

	else if (n == 37) {
		a.name = "Rb";
		a.M = 85.47;
		a.VNName = "Rubidi";
		a.team = "A";
	}
	else if (n == 38) {
		a.name = "Sr";
		a.M = 87.62;
		a.VNName = "Stronti";
		a.team = "A";
	}
	else if (n == 39) {
		a.name = "Y";
		a.M = 88.91;
		a.VNName = "Ytri";
		a.team = "B";
	}
	else if (n == 40) {
		a.name = "Zr";
		a.M = 91.22;
		a.VNName = "Ziriconi";
		a.team = "B";
	}
	else if (n == 41) {
		a.name = "Nb";
		a.M = 92.91;
		a.VNName = "Niobi";
		a.team = "B";
	}
	else if (n == 42) {
		a.name = "Mo";
		a.M = 95.94;
		a.VNName = "Molipden";
		a.team = "B";
	}
	else if (n == 43) {
		a.name = "Tc";
		a.M = 99;
		a.VNName = "Tecnexi";
		a.team = "B";
	}
	else if (n == 44) {
		a.name = "Ru";
		a.M = 101.07;
		a.VNName = "Ruteni";
		a.team = "B";
	}
	else if (n == 45) {
		a.name = "Rh";
		a.M = 102.91;
		a.VNName = "Rodi";
		a.team = "B";
	}
	else if (n == 46) {
		a.name = "Pd";
		a.M = 106.40;
		a.VNName = "Laladi";
		a.team = "B";
	}
	else if (n == 47) {
		a.name = "Ag";
		a.M = 107.87;
		a.VNName = "Bac";
		a.team = "B";
	}
	else if (n == 48) {
		a.name = "Cd";
		a.M = 112.41;
		a.VNName = "Cadimi";
		a.team = "B";
	}
	else if (n == 49) {
		a.name = "In";
		a.M = 114.82;
		a.VNName = "Indi";
		a.team = "A";
	}
	else if (n == 50) {
		a.name = "Sn";
		a.M = 118.69;
		a.VNName = "Thiec";
		a.team = "A";
	}
	else if (n == 51) {
		a.name = "Sb";
		a.M = 121.75;
		a.VNName = "Stibi";
		a.team = "A";
	}
	else if (n == 52) {
		a.name = "Te";
		a.M = 127.60;
		a.VNName = "Telu";
		a.team = "A";
	}
	else if (n == 53) {
		a.name = "I";
		a.M = 126.90;
		a.VNName = "Iot";
		a.team = "A";
	}
	else if (n == 54) {
		a.name = "Xe";
		a.M = 131.30;
		a.VNName = "Xenon";
		a.team = "A";
	}
	else if (n == 55) {
		a.name = "Cs";
		a.M = 132.91;
		a.VNName = "Xesi";
		a.team = "A";
	}
	else if (n == 56) {
		a.name = "Ba";
		a.M = 137.31;
		a.VNName = "Bari";
		a.team = "A";
	}
	else if (n == 57) {
		a.name = "La";
		a.M = 138.91;
		a.VNName = "Lactan";
		a.team = "A";
	}
	else if (n == 58) {
		a.name = "Ce";
		a.M = 140.12;
		a.VNName = "Xeri";
		a.team = "Lactan";
	}
	else if (n == 59) {
		a.name = "Pr";
		a.M = 140.91;
		a.VNName = "Prazeodim";
		a.team = "Lactan";
	}
	else if (n == 60) {
		a.name = "Nd";
		a.M = 144.24;
		a.VNName = "Neodim";
		a.team = "Lactan";
	}
	else if (n == 61) {
		a.name = "Pm";
		a.M = 147;
		a.VNName = "Prometi";
		a.team = "Lactan";
	}
	else if (n == 62) {
		a.name = "Sm";
		a.M = 150.35;
		a.VNName = "Samari";
		a.team = "Lactan";
	}
	else if (n == 63) {
		a.name = "Eu";
		a.M = 151.96;
		a.VNName = "Europi";
		a.team = "Lactan";
	}
	else if (n == 64) {
		a.name = "Gd";
		a.M = 157.25;
		a.VNName = "Gadolini";
		a.team = "Lactan";
	}
	else if (n == 65) {
		a.name = "Tb";
		a.M = 158.93;
		a.VNName = "Tebi";
		a.team = "Lactan";
	}
	else if (n == 66) {
		a.name = "Dy";
		a.M = 162.50;
		a.VNName = "Diproxi";
		a.team = "Lactan";
	}
	else if (n == 67) {
		a.name = "Ho";
		a.M = 164.93;
		a.VNName = "Honmi";
		a.team = "Lactan";
	}
	else if (n == 68) {
		a.name = "Er";
		a.M = 167.26;
		a.VNName = "Eribi";
		a.team = "Lactan";
	}
	else if (n == 69) {
		a.name = "Tm";
		a.M = 168.93;
		a.VNName = "Tuli";
		a.team = "Lactan";
	}
	else if (n == 70) {
		a.name = "Yb";
		a.M = 173.04;
		a.VNName = "Ytecbi";
		a.team = "Lactan";
	}
	else if (n == 71) {
		a.name = "Lu";
		a.M = 174.97;
		a.VNName = "Lutexi";
		a.team = "Lactan";
	}
	else if (n == 72) {
		a.name = "Hf";
		a.M = 178.49;
		a.VNName = "Hafini";
		a.team = "B";
	}
	else if (n == 73) {
		a.name = "Ta";
		a.M = 180,95;
		a.VNName = "Tantan";
		a.team = "B";
	}
	else if (n == 74) {
		a.name = "W";
		a.M = 183.85;
		a.VNName = "Vonfram";
		a.team = "B";
	}
	else if (n == 75) {
		a.name = "Re";
		a.M = 186.20;
		a.VNName = "Reni";
		a.team = "B";
	}
	else if (n == 76) {
		a.name = "Os";
		a.M = 190.20;
		a.VNName = "Osimi";
		a.team = "B";
	}
	else if (n == 77) {
		a.name = "Ir";
		a.M = 192.20;
		a.VNName = "Iridi";
		a.team = "B";
	}
	else if (n == 78) {
		a.name = "Pt";
		a.M = 195.09;
		a.VNName = "Platin";
		a.team = "B";
	}
	else if (n == 79) {
		a.name = "Au";
		a.M = 196.97;
		a.VNName = "Vang";
		a.team = "B";
	}
	else if (n == 80) {
		a.name = "Hg";
		a.M = 200.59;
		a.VNName = "Thuy Ngan";
		a.team = "B";
	}
	else if (n == 81) {
		a.name = "Tl";
		a.M = 204.37;
		a.VNName = "Tali";
		a.team = "A";
	}
	else if (n == 82) {
		a.name = "Pb";
		a.M = 207.20;
		a.VNName = "Chi";
		a.team = "A";
	}
	else if (n == 83) {
		a.name = "Bi";
		a.M = 208.98;
		a.VNName = "Bitmut";
		a.team = "A";
	}
	else if (n == 84) {
		a.name = "Po";
		a.M = 209;
		a.VNName = "Poloni";
		a.team = "A";
	}
	else if (n == 85) {
		a.name = "At";
		a.M = 210;
		a.VNName = "Atatin";
		a.team = "A";
	}
	else if (n == 86) {
		a.name = "Rn";
		a.M = 222;
		a.VNName = "Radon";
		a.team = "A";
	}
	else if (n == 87) {
		a.name = "Fr";
		a.M = 223;
		a.VNName = "Franxi";
		a.team = "A";
	}
	else if (n == 88) {
		a.name = "Ra";
		a.M = 226.03;
		a.VNName = "Radi";
		a.team = "A";
	}
	else if (n == 89) {
		a.name = "Ac";
		a.M = 227;
		a.VNName = "Actini";
		a.team = "B";
	}
	
	else if (n == 90) {
		a.name = "Th";
		a.M = 232.04;
		a.VNName = "Thori";
		a.team = "Actini";
	}
	else if (n == 91) {
		a.name = "Pa";
		a.M = 231.04;
		a.VNName = "Protactini";
		a.team = "Actini";
	}
	else if (n == 92) {
		a.name = "U";
		a.M = 238.03;
		a.VNName = "Urani";
		a.team = "Actini";
	}
	else if (n == 93) {
		a.name = "Np";
		a.M = 237;
		a.VNName = "Neptuni";
		a.team = "Actini";
	}
	else if (n == 94) {
		a.name = "Pu";
		a.M = 244;
		a.VNName = "Plutoni";
		a.team = "Actini";
	}
	else if (n == 95) {
		a.name = "Am";
		a.M = 243;
		a.VNName = "Amerixi";
		a.team = "Actini";
	}
	else if (n == 96) {
		a.name = "Cm";
		a.M = 247;
		a.VNName = "Curi";
		a.team = "Actini";
	}
	else if (n == 97) {
		a.name = "Bk";
		a.M = 247;
		a.VNName = "Beckeli";
		a.team = "Actini";
	}
	else if (n == 98) {
		a.name = "Cf";
		a.M = 251;
		a.VNName = "Califoni";
		a.team = "Actini";
	}
	else if (n == 99) {
		a.name = "Es";
		a.M = 252;
		a.VNName = "Ensteni";
		a.team = "Actini";
	}
	else if (n == 100) {
		a.name = "Fm";
		a.M = 257;
		a.VNName = "Fecmi";
		a.team = "Actini";
	}
	else if (n == 101) {
		a.name = "Md";
		a.M = 258;
		a.VNName = "Mendelevi";
		a.team = "Actini";
	}
	else if (n == 102) {
		a.name = "No";
		a.M = 259;
		a.VNName = "Nobeli";
		a.team = "Actini";
	}
	else if (n == 103) {
		a.name = "Lr";
		a.M = 260;
		a.VNName = "Lorenxi";
		a.team = "Actini";
	}
	else if (n == 104) {
		a.name = "Rf";
		a.M = 261;
		a.VNName = "Rozofodi";
		a.team = "B";
	}
	else if (n == 105) {
		a.name = "Db";
		a.M = 262;
		a.VNName = "Dupni";
		a.team = "B";
	}
	else if (n == 107) {
		a.name = "Bh";
		a.M = 266;
		a.VNName = "Bori";
		a.team = "B";
	}
	else if (n == 106) {
		a.name = "Sg";
		a.M = 266;
		a.VNName = "Siboqi";
		a.team = "B";
	}
	else if (n == 108) {
		a.name = "Hs";
		a.M = 264;
		a.VNName = "Hasi";
		a.team = "B";
	}
	else if (n == 109) {
		a.name = "Mt";
		a.M = 268;
		a.VNName = "Meitneri";
		a.team = "B";
	}
	else if (n == 110) {
		a.name = "Ds";
		a.M = 281;
		a.VNName = "Darmasiati";
		a.team = "B";
	}
	else if (n == 111) {
		a.name = "Rg";
		a.M = 272;
		a.VNName = "Roentgeni";
		a.team = "B";
	}
	else if (n == 112) {
		a.name = "Cn";
		a.M = 285;
		a.VNName = "Copenixi";
		a.team = "B";
	}
	else if (n == 113) {
		a.name = "Uut";
		a.M = 284;
		a.VNName = "Ununtri";
		a.team = "A";
	}
	else if (n == 114) {
		a.name = "Fl";
		a.M = 289;
		a.VNName = "Flerovi";
		a.team = "A";
	}
	else if (n == 115) {
		a.name = "Uup";
		a.M = 288;
		a.VNName = "Ununpenti";
		a.team = "A";
	}
	else if (n == 116) {
		a.name = "Lv";
		a.M = 292;
		a.VNName = "Livemori";
		a.team = "A";
	}
	return a;
}

int classElectron(char a) {
	if (a == 's') {
		return 2;
	}
	if (a == 'p') {
		return 6;
	}
	if (a == 'd') {
		return 10;
	}
	if (a == 'f') {
		return 14;
	}
	return 0;
}

int writeElectronStructure(int n, Chemic& a) {
	string elec = "";
	vector<vector<char>> rules =
	{
		{'s'},
		{'s', 'p'},
		{'s', 'p', 'd'},
		{'s' , 'p', 'd', 'f'},
		{'s' , 'p', 'd', 'f'},
		{'s' , 'p', 'd', 'f'},
		{'s' , 'p', 'd', 'f'},

	};
	vector<vector<bool>> check =
	{
		{false},
		{false, false},
		{false, false, false},
		{false, false, false, false},
		{false, false, false, false},
		{false, false, false, false},
		{false, false, false, false},
	};

	bool flag = false;
	int classE = 0;
	int kind = 0;
	stack<char> temp1;
	int tempCount = n;
	while (classE <= 6 && tempCount > 0) {
		int temp = 0;
			int tempClassE = classE;
			for (int i = 0; i < rules[classE].size(); i++) {
				int temp2 = tempCount;
				int pos1 = classE;
				int pos2 = i;
				if (check[pos1][pos2]) {
					continue;
				}
				while (pos2 != -1) {
					int classElec = classElectron(rules[pos1][pos2]);
					while (tempCount - temp > 0 && temp < classElec) {
						temp++;
					}
					elec += to_string(tempClassE + 1);
					elec += rules[pos1][pos2];
					elec += to_string(temp);
					tempCount -= temp;
					if (tempCount == 0) {
						flag = true;
						break;
					}
					check[pos1][pos2] = true;
					pos2--;
					if (pos2 >= 0) {
						pos1++;
						tempClassE++;
						temp = 0;
					}
					else {
						tempClassE = classE;
					}
				}
				kind = temp2 - tempCount;
				if (flag) {
					break;
				}
			}
			classE++;
		}
	a.elecStructure = elec;
	a.period = classE + 1;
	return kind;
}

string kind(int n) {
	if (n == 1) {
		return "I";
	}
	else if (n == 2) {
		return "II";
	}
	else if (n == 3) {
		return "III";
	}
	else if (n == 4) {
		return "IV";
	}
	else if (n == 5) {
		return "V";
	}
	else if (n == 6) {
		return "VI";
	}
	else if (n == 7) {
		return "VII";
	}
	else if (n == 8) {
		return "VIII";
	}
}
/////////////////////////////////////////////////////////////////////////////////

//print special blankets
void rowBlank1() {
	cout << "+" << "------" << "+";
}

void rowBlank2() {
	cout << "|" << setw(6) << " " << "|";
}

void rowBlank3(string a) {
	if (a == " ") {
		cout << "|" << setw(6) << " " << "|";
	}
	else {
		cout << "| " << "Type" << " |";
	}
}

void rowBlank4(string a) {
	if (a == " ") {
		cout << "|" << setw(6) << " " << "|";
	}
	else {
		cout << "|" << a << "|";
	}

}

void rowBlank5() {
	cout << "|" << setw(6) << " " << "|";
}

void rowBlank6() {
	cout << "+" << "------" << "+";
}

void printBlanket(string a, int n) {
	if (n == 1) {
		rowBlank1();
	}
	else if (n == 2) {
		rowBlank2();
	}
	else if (n == 3) {
		rowBlank3(a);
	}
	else if (n == 4) {
		rowBlank4(a);
	}
	else if (n == 5) {
		rowBlank5();
	}
	else if (n == 6) {
		rowBlank6();
	}
}
////////////////////////////////////////////////////////////////////////////////////////


void createTable(vector<Chemic>& a) {
	Chemic temp;
	for (int i = 0; i < 116; i++) {
		temp = createChemic(i + 1);
		a.push_back(temp);
	}
}

void rowTable1() {
	cout << "+" << "------" << "+";
}

void rowTable2(Chemic a) {
	if (a.num < 10) {
		cout << "|" << a.num << setw(5) << " " << "|";
	}
	else if (a.num < 100) {
		cout << "|" << a.num << setw(4) << " " << "|";
	}
	else {
		cout << "|" << a.num << setw(3) << " " << "|";
	}
}

void rowTable3(Chemic a) {
	if (a.name.size() == 1) {
		cout << "|" << " " << a.name << setw(4) << " " << "|";
	}
	else if (a.name.size() == 2) {
		cout << "|" << " " << a.name << setw(3) << " " << "|";
	}
	else {
		cout << "|" << " " << a.name << setw(2) << " " << "|";
	}
}

void rowTable4() {
	cout << "|" << setw(6) << " " << "|";

}

void rowTable5(Chemic a) {
	if (a.M < 10) {
		cout << "|" << a.M << "  " << "|";
	}
	else if (a.M < 100) {
		cout << "|" << a.M << " " << "|";
	}
	else {
		cout << "|" << a.M << "|";
	}
}

void rowTable6() {
	cout << "+" << "------" << "+";
}

void printRowTable(int n, Chemic temp) {
	if (n == 1) {
		rowTable1();
	}
	else if (n == 2) {
		rowTable2(temp);
	}
	else if (n == 3) {
		rowTable3(temp);
	}
	else if (n == 4) {
		rowTable4();
	}
	else if (n == 5) {
		rowTable5(temp);
	}
	else if (n == 6) {
		rowTable6();
	}
}

void printTable(vector<Chemic> a) {
	int row = 1;
	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";
		TextColor(10);
		printRowTable(row, a[0]);
		TextColor(7);
		printBlanket(" ", row);
		for (int i = 0; i < 14; i++) {
			if (row == 3 && i == 6) {
				cout << "MADE BY ";
				continue;
			}
			else if (row == 3 && i == 7) {
				cout << "VY BUI  ";
				continue;
			}
			cout << setw(8) << " ";

		}
		printBlanket(" ", row);
		TextColor(10);
		printRowTable(row, a[1]);
		cout << "\n";
		row++;
	}
	Sleep(500);

	int start = 2;
	row = 1;
	int count = 1;
	while (count != 3) {
		while (row != 7) {
			cout << "\t";
			cout << "\t";
			cout << "\t";

			TextColor(10);
			printRowTable(row, a[start]);
			printRowTable(row, a[start + 1]);
			for (int i = 0; i < 10; i++) {
				cout << setw(8) << " ";
			}
			for (int j = start + 2; j < start + 8; j++) {
				TextColor(13);
				printRowTable(row, a[j]);
			}
			cout << "\n";
			row++;
		}
		start += 8;
		count++;
		row = 1;
		Sleep(500);

	}

	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";


		for (int i = start; i < start + 18; i++) {
			if (i == 18) {
				TextColor(10);
			}
			else if (i == 20) {
				TextColor(14);
			}
			else if (i == 30) {
				TextColor(13);
			}
			printRowTable(row, a[i]);
		}
		cout << "\n";
		row++;
	}
	start += 18;

	row = 1;
	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";

		for (int i = start; i < start + 18; i++) {
			if (i == 36) {
				TextColor(10);
			}
			else if (i == 38) {
				TextColor(14);
			}
			else if (i == 48) {
				TextColor(13);
			}
			printRowTable(row, a[i]);
		}
		cout << "\n";
		row++;
	}
	start += 18;
	row = 1;
	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";

		for (int i = start; i < start + 3; i++) {
			if (i == start) {
				TextColor(10);
			}
			else if (i == 56) {
				TextColor(14);
			}
			printRowTable(row, a[i]);
		}
		for (int i = start + 17; i < start + 32; i++) {
			if (i == 80) {
				TextColor(13);
			}
			printRowTable(row, a[i]);
		}
		cout << "\n";
		row++;
	}
	start += 32;
	row = 1;
	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";

		for (int i = start; i < start + 3; i++) {
			if (i == start) {
				TextColor(10);
			}
			else if (i == 88) {
				TextColor(14);
			}
			printRowTable(row, a[i]);
		}
		for (int i = start + 17; i < start + 30; i++) {
			if (i == 112) {
				TextColor(13);
			}
			printRowTable(row, a[i]);
		}
		cout << "\n";
		row++;
	}

	cout << "\n";
	row = 1;
	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";

		cout << setw(8) << " ";
		TextColor(14);
		printBlanket("Lactan", row);
		for (int i = 57; i < 71; i++) {
			printRowTable(row, a[i]);
		}
		cout << setw(8) << " ";
		cout << setw(8) << " ";

		row++;
		cout << "\n";
	}

	row = 1;
	Sleep(500);

	while (row != 7) {
		cout << "\t";
		cout << "\t";
		cout << "\t";

		cout << setw(8) << " ";

		printBlanket("Actini", row);
		for (int i = 89; i < 103; i++) {
			printRowTable(row, a[i]);
		}
		cout << setw(8) << " ";
		cout << setw(8) << " ";

		row++;
		cout << "\n";
	}
}
/////////////////////////////////////////////////////////////////////////////////

string kindTeam(int n) {
	if (n == 1) {
		return "I";
	}
	else if (n == 2) {
		return "II";
	}
	else if (n == 3) {
		return "III";
	}
	else if (n == 4) {
		return "IV";
	}
	else if (n == 5) {
		return "V";
	}
	else if (n == 6) {
		return "VI";
	}
	else if (n == 7) {
		return "VII";
	}
	else if (n >= 8 && n <= 10) {
		return "VIII";
	}
	else if (n == 11) {
		return "I";
	}
	else if (n == 12) {
		return "II";
	}
}

void findE(Chemic& a) {
	int kindTemp = writeElectronStructure(a.num, a);
	string teamTemp = a.team;
	string team = "";
	if (teamTemp != "Lactan" && teamTemp != "Actini" && a.num <= 112) {
		team = kindTeam(kindTemp);
		team += teamTemp;
	}
	cout << team;
}

//Print big letter
void row1(char a) {
	if (a == 'A') {
		cout << setw(3) << right << "A" << setw(2) << " " << "\t";
	}
	else if (a == 'B') {
		cout << "BBBB " << "\t";
	}
	else if (a == 'C') {
		cout << setw(4) << right << "CCC" << " " << "\t";
	}
	else if (a == 'D') {
		cout << "DDDD" << " " << "\t";

	}
	else if (a == 'E') {
		cout << "EEEEE" << "\t";

	}
	else if (a == 'F') {
		cout << "FFFFF" << "\t";

	}
	else if (a == 'G') {
		cout << setw(4) << right << "GGG" << "\t";
	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";

	}
	else if (a == 'I') {
		cout << "IIIII" << "\t";

	}
	else if (a == 'J') {
		cout << "JJJJJ" << "\t";

	}
	else if (a == 'K') {
		cout << "K" << setw(4) << right << "K" << "\t";

	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "M" << setw(4) << right << "M" << "\t";
	}
	else if (a == 'N') {
		cout << "N" << setw(4) << right << "N" << "\t";
	}
	else if (a == 'O') {
		cout << setw(4) << right << "OOO" << " " << "\t";

	}
	else if (a == 'P') {
		cout << "PPPP " << "\t";

	}
	else if (a == 'Q') {
		cout << setw(4) << right << "QQQ" << " " << "\t";

	}
	else if (a == 'R') {
		cout << "RRRR " << "\t";

	}
	else if (a == 'S') {
		cout << setw(4) << "SSS" << " " << "\t";

	}
	else if (a == 'T') {
		cout << "TTTTT" << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << "V" << setw(4) << "V" << "\t";

	}
	else if (a == 'W') {
		cout << "W" << setw(4) << "W" << "\t";

	}
	else if (a == 'X') {
		cout << "X" << setw(4) << "X" << "\t";

	}
	else if (a == 'Y') {
		cout << "Y" << setw(4) << "Y" << "\t";

	}
}

void row2(char a) {
	if (a == 'A') {
		cout << setw(2) << right << "A" << setw(2) << right << "A" << " " << "\t";
	}
	else if (a == 'B') {
		cout << "B" << setw(4) << right << "B" << "\t";
	}
	else if (a == 'C') {
		cout << "C" << setw(4) << right << "C" << "\t";
	}
	else if (a == 'D') {
		cout << "D" << setw(4) << right << "D" << "\t";

	}
	else if (a == 'E') {
		cout << "E" << setw(4) << " " << "\t";

	}
	else if (a == 'F') {
		cout << "F" << setw(4) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << "G" << setw(4) << right << "G" << "\t";

	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";
	}
	else if (a == 'I') {
		cout << setw(3) << right << "I" << setw(2) << " " << "\t";
	}
	else if (a == 'J') {
		cout << setw(3) << right << "J" << setw(2) << " " << "\t";
	}
	else if (a == 'K') {
		cout << "K" << setw(3) << right << "K" << " " << "\t";
	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "MM" << setw(3) << right << "MM" << "\t";

	}
	else if (a == 'N') {
		cout << "NN" << setw(3) << right << "N" << "\t";

	}
	else if (a == 'O') {
		cout << "O" << setw(4) << "O" << "\t";

	}
	else if (a == 'P') {
		cout << "P" << setw(4) << right << "P" << "\t";

	}
	else if (a == 'Q') {
		cout << "Q" << setw(4) << right << "Q" << "\t";

	}
	else if (a == 'R') {
		cout << "R" << setw(4) << "R" << "\t";

	}
	else if (a == 'S') {
		cout << "S" << setw(4) << "S" << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << "V" << setw(4) << "V" << "\t";

	}
	else if (a == 'W') {
		cout << "W" << setw(4) << "W" << "\t";

	}
	else if (a == 'X') {
		cout << "X" << setw(4) << "X" << "\t";

	}
	else if (a == 'Y') {
		cout << setw(2) << "Y" << setw(2) << "Y" << " " << "\t";

	}
}

void row3(char a) {
	if (a == 'A') {
		cout << "A" << setw(4) << right << "A" << "\t";
	}
	else if (a == 'B') {
		cout << "B" << setw(4) << right << "B" << "\t";
	}
	else if (a == 'C') {
		cout << "C" << setw(4) << " " << "\t";
	}
	else if (a == 'D') {
		cout << "D" << setw(4) << right << "D" << "\t";

	}
	else if (a == 'E') {
		cout << "E" << setw(4) << " " << "\t";

	}
	else if (a == 'F') {
		cout << "F" << setw(4) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << "G" << setw(4) << right << " " << "\t";

	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";

	}
	else if (a == 'I') {
		cout << setw(3) << right << "I" << setw(2) << " " << "\t";

	}
	else if (a == 'J') {
		cout << setw(3) << right << "J" << setw(2) << " " << "\t";

	}
	else if (a == 'K') {
		cout << "K" << setw(2) << right << "K" << setw(2) << " " << "\t";

	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "MM" << setw(3) << right << "MM" << "\t";

	}
	else if (a == 'N') {
		cout << "N N N" << "\t";

	}
	else if (a == 'O') {
		cout << "O" << setw(4) << "O" << "\t";

	}
	else if (a == 'P') {
		cout << "P" << setw(4) << right << "P" << "\t";

	}
	else if (a == 'Q') {
		cout << "Q" << setw(4) << right << "Q" << "\t";

	}
	else if (a == 'R') {
		cout << "R" << setw(4) << "R" << "\t";

	}
	else if (a == 'S') {
		cout << "S" << setw(4) << " " << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << "V" << setw(4) << "V" << "\t";

	}
	else if (a == 'W') {
		cout << "W" << setw(4) << "W" << "\t";

	}
	else if (a == 'X') {
		cout << setw(2) << "X" << setw(2) << "X" << " " << "\t";

	}
	else if (a == 'Y') {
		cout << setw(3) << "Y" << setw(2) << "\t";

	}
}

void row4(char a) {
	if (a == 'A') {
		cout << "AAAAA" << "\t";
	}
	else if (a == 'B') {
		cout << "BBBB " << "\t";
	}
	else if (a == 'C') {
		cout << "C" << setw(4) << " " << "\t";
	}
	else if (a == 'D') {
		cout << "D" << setw(4) << right << "D" << "\t";

	}
	else if (a == 'E') {
		cout << "EEE" << setw(2) << " " << "\t";

	}
	else if (a == 'F') {
		cout << "FFF" << setw(2) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << "GGGGG" << "\t";

	}
	else if (a == 'H') {
		cout << "HHHHH" << "\t";

	}
	else if (a == 'I') {
		cout << setw(3) << right << "I" << setw(2) << " " << "\t";

	}
	else if (a == 'J') {
		cout << setw(3) << right << "J" << setw(2) << " " << "\t";

	}
	else if (a == 'K') {
		cout << "KK" << setw(3) << " " << "\t";

	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "M M M" << "\t";

	}
	else if (a == 'N') {
		cout << "N" << setw(4) << right << "NN" << "\t";

	}
	else if (a == 'O') {
		cout << "O" << setw(4) << "O" << "\t";

	}
	else if (a == 'P') {
		cout << "PPPP " << "\t";

	}
	else if (a == 'Q') {
		cout << "Q" << setw(4) << right << "Q" << "\t";

	}
	else if (a == 'R') {
		cout << "RRRR " << "\t";

	}
	else if (a == 'S') {
		cout << setw(4) << "SSS" << " " << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << "V" << setw(4) << "V" << "\t";

	}
	else if (a == 'W') {
		cout << "W" << setw(2) << "W" << setw(2) << "W" << "\t";

	}
	else if (a == 'X') {
		cout << setw(3) << "X" << setw(2) << " " << "\t";

	}
	else if (a == 'Y') {
		cout << setw(3) << "Y" << setw(2) << "\t";

	}
}

void row5(char a) {
	if (a == 'A') {
		cout << "A" << setw(4) << right << "A" << "\t";
	}
	else if (a == 'B') {
		cout << "B" << setw(4) << right << "B" << "\t";
	}
	else if (a == 'C') {
		cout << "C" << setw(4) << " " << "\t";
	}
	else if (a == 'D') {
		cout << "D" << setw(4) << right << "D" << "\t";

	}
	else if (a == 'E') {
		cout << "E" << setw(4) << " " << "\t";

	}
	else if (a == 'F') {
		cout << "F" << setw(4) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << "G" << setw(4) << right << "G" << "\t";

	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";

	}
	else if (a == 'I') {
		cout << setw(3) << right << "I" << setw(2) << " " << "\t";

	}
	else if (a == 'J') {
		cout << "J" << setw(2) << right << "J" << setw(2) << " " << "\t";

	}
	else if (a == 'K') {
		cout << "K" << setw(2) << right << "K" << setw(2) << " " << "\t";

	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "M" << setw(4) << right << "M" << "\t";

	}
	else if (a == 'N') {
		cout << "N" << setw(4) << right << "N" << "\t";

	}
	else if (a == 'O') {
		cout << "O" << setw(4) << "O" << "\t";

	}
	else if (a == 'P') {
		cout << "P" << setw(4) << " " << "\t";

	}
	else if (a == 'Q') {
		cout << "Q" << setw(4) << right << "Q" << "\t";

	}
	else if (a == 'R') {
		cout << "R" << setw(2) << "R" << setw(2) << " " << "\t";

	}
	else if (a == 'S') {
		cout << setw(5) << "S" << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << "V" << setw(4) << "V" << "\t";

	}
	else if (a == 'W') {
		cout << "WW" << setw(3) << "WW" << "\t";

	}
	else if (a == 'X') {
		cout << setw(2) << "X" << setw(2) << "X" << " " << "\t";

	}
	else if (a == 'Y') {
		cout << setw(3) << "Y" << setw(2) << "\t";

	}
}

void row6(char a) {
	if (a == 'A') {
		cout << "A" << setw(4) << right << "A" << "\t";
	}
	else if (a == 'B') {
		cout << "B" << setw(4) << right << "B" << "\t";
	}
	else if (a == 'C') {
		cout << "C" << setw(4) << right << "C" << "\t";
	}
	else if (a == 'D') {
		cout << "D" << setw(4) << right << "D" << "\t";

	}
	else if (a == 'E') {
		cout << "E" << setw(4) << " " << "\t";

	}
	else if (a == 'F') {
		cout << "F" << setw(4) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << "G" << setw(4) << right << "G" << "\t";

	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";

	}
	else if (a == 'I') {
		cout << setw(3) << right << "I" << setw(2) << " " << "\t";

	}
	else if (a == 'J') {
		cout << "J" << setw(2) << right << "J" << setw(2) << " " << "\t";

	}
	else if (a == 'K') {
		cout << "K" << setw(3) << right << "K" << " " << "\t";

	}
	else if (a == 'L') {
		cout << "L" << setw(4) << " " << "\t";

	}
	else if (a == 'M') {
		cout << "M" << setw(4) << right << "M" << "\t";

	}
	else if (a == 'N') {
		cout << "N" << setw(4) << right << "N" << "\t";

	}
	else if (a == 'O') {
		cout << "O" << setw(4) << "O" << "\t";

	}
	else if (a == 'P') {
		cout << "P" << setw(4) << " " << "\t";

	}
	else if (a == 'Q') {
		cout << "Q" << setw(3) << right << "Q" << " " << "\t";

	}
	else if (a == 'R') {
		cout << "R" << setw(3) << "R" << setw(1) << " " << "\t";

	}
	else if (a == 'S') {
		cout << "S" << setw(4) << "S" << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << "U" << setw(4) << "U" << "\t";

	}
	else if (a == 'V') {
		cout << setw(2) << "V" << setw(2) << "V" << " " << "\t";

	}
	else if (a == 'W') {
		cout << "WW" << setw(3) << "WW" << "\t";

	}
	else if (a == 'X') {
		cout << "X" << setw(4) << "X" << "\t";

	}
	else if (a == 'Y') {
		cout << setw(3) << "Y" << setw(2) << "\t";

	}
}

void row7(char a) {
	if (a == 'A') {
		cout << "A" << setw(4) << right << "A" << "\t";
	}
	else if (a == 'B') {
		cout << "BBBB " << "\t";
	}
	else if (a == 'C') {
		cout << setw(4) << right << "CCC" << " " << "\t";
	}
	else if (a == 'D') {
		cout << "DDDD" << " " << "\t";

	}
	else if (a == 'E') {
		cout << "EEEEE" << "\t";

	}
	else if (a == 'F') {
		cout << "F" << setw(4) << right << " " << "\t";

	}
	else if (a == 'G') {
		cout << setw(4) << right << "GGG" << "\t";
	}
	else if (a == 'H') {
		cout << "H" << setw(4) << right << "H" << "\t";

	}
	else if (a == 'I') {
		cout << "IIIII" << "\t";

	}
	else if (a == 'J') {
		cout << setw(3) << right << "JJ" << setw(2) << " " << "\t";

	}
	else if (a == 'K') {
		cout << "K" << setw(4) << right << "K" << "\t";

	}
	else if (a == 'L') {
		cout << "LLLLL" << "\t";

	}
	else if (a == 'M') {
		cout << "M" << setw(4) << right << "M" << "\t";

	}
	else if (a == 'N') {
		cout << "N" << setw(4) << right << "N" << "\t";

	}
	else if (a == 'O') {
		cout << setw(4) << right << "OOO" << " " << "\t";

	}
	else if (a == 'P') {
		cout << "P" << setw(4) << " " << "\t";

	}
	else if (a == 'Q') {
		cout << setw(3) << right << "QQ" << setw(2) << "Q" << "\t";

	}
	else if (a == 'R') {
		cout << "R" << setw(4) << "R" << "\t";

	}
	else if (a == 'S') {
		cout << setw(4) << "SSS" << " " << "\t";

	}
	else if (a == 'T') {
		cout << setw(3) << "T" << setw(2) << " " << "\t";

	}
	else if (a == 'U') {
		cout << setw(4) << "UUU" << " " << "\t";

	}
	else if (a == 'V') {
		cout << setw(3) << "V" << setw(2) << " " << "\t";

	}
	else if (a == 'W') {
		cout << "W" << setw(4) << "W" << "\t";

	}
	else if (a == 'X') {
		cout << "X" << setw(4) << "X" << "\t";

	}
	else if (a == 'Y') {
		cout << setw(3) << "Y" << setw(2) << "\t";

	}
}

void upcaseLetter(string& a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == ' ') {
			continue;
		}
		if (a[i] == '$') {
			i = i + 3;
			continue;
		}
		a[i] &= (~32);
	}
}

void row1Sign(char a) {
	if (a == 'j') {
		cout << setw(4) << "..." << " " << "\t";

	}
	else if (a == 's') {
		cout << setw(5) << "//" << "\t";

	}
	else if (a == 'f') {
		cout << "\\\\   " << "\t";

	}
	else if (a == 'x') {
		cout << "~~" << setw(3) << " " << "\t";

	}
	else if (a == 'r') {
		cout << setw(4) << "??" << " " << "\t";

	}
}

void row2Sign(char a) {
	if (a == 'j') {
		cout << setw(4) << "..." << " " << "\t";

	}
	else if (a == 's') {
		cout << setw(4) << "//" << " " << "\t";

	}
	else if (a == 'f') {
		cout << setw(3) << "\\\\" << "  " << "\t";

	}
	else if (a == 'x') {
		cout << "~" << setw(2) << "~" << setw(2) << "~" << "\t";

	}
	else if (a == 'r') {
		cout << setw(4) << "?" << " " << "\t";

	}
}

void row3Sign(char a) {
	if (a == 'j') {
		cout << setw(4) << "..." << " " << "\t";

	}
	else if (a == 's') {
		cout << " //" << setw(2) << " " << "\t";

	}
	else if (a == 'f') {
		cout << setw(5) << "\\\\ " << "\t";

	}
	else if (a == 'x') {
		cout << setw(5) << "~~" << "\t";

	}
	else if (a == 'r') {
		cout << setw(3) << "?" << "  " << "\t";

	}
}

void Sign(char a, int i) {
	if (i == 1) {
		row1Sign(a);
	}
	else if (i == 2) {
		row2Sign(a);
	}
	else if (i == 3) {
		row3Sign(a);
	}
}

void bigLetter(char a, int i) {
	if (i == 1) {
		row1(a);
	}
	else if (i == 2) {
		row2(a);
	}
	else if (i == 3) {
		row3(a);
	}
	else if (i == 4) {
		row4(a);
	}
	else if (i == 5) {
		row5(a);
	}
	else if (i == 6) {
		row6(a);
	}
	else if (i == 7) {
		row7(a);
	}
}

void print(string a) {
	int row = 1;

	while (row != 8) {
		/*cout << "\t\t\t";*/
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == ' ') {
				cout << "\t";
				continue;
			}
			bigLetter(a[i], row);
		}
		cout << "\n";
		row++;
	}


}
/////////////////////////////////////////////////////////////////////////////////



void Menu() {
	
	int row = 1;
	string a = "MENU";
	cout << "\t\t\t\t\t\t\t";
	cout << setfill('*');
	TextColor(3);
	cout << setw(72) << "*";

	cout << setfill(' ');
	cout << "\n";
	cout << "\t\t\t\t\t\t\t";
	cout << "*" << setw(70) << " " << "*\n";
	while (row != 8) {
		cout << "\t\t\t\t\t\t\t";
		TextColor(3);
		cout  << "*";
		cout << setw(15) << " " << "\t";
		TextColor(4);

			for (int i = 0; i < a.size(); i++) {
				bigLetter(a[i], row);
			}
		
		TextColor(3);
		cout << setw(15) << " ";
		cout << "*";

		cout << "\n";
		row++;
	}

	cout << "\t\t\t\t\t\t\t";
	cout << "*" << setw(70) << " " << "*\n";
	cout << "\t\t\t\t\t\t\t";

	cout << setfill('*');
	cout << setw(72) << "*";
	cout << setfill(' ');
	cout << "\n";
}

int main() {
	Sleep(1000);
	cout << fixed << setprecision(2);
	TextColor(11);
	print("CHEMISTRY PERIODIC TABLE");
	cout << setfill('=');
	TextColor(6);
	cout << setw(191) << " " << "\n";
	cout << setfill(' ');
	vector<Chemic> a;
	createTable(a);
	Sleep(500);
	printTable(a);

	cout << setfill('=');
	TextColor(6);
	cout << setw(191) << " " << "\n";
	cout << setfill(' ');
	cout << "\n";
	
	Sleep(1000);
	findE(a[21]);
}