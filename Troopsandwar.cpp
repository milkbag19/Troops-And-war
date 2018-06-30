
#include <iostream>
#include <windows.h>
#include <math.h>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <cwchar>
using namespace std;

int raid;
class text{

	public :
void Black(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x0 );
}
	public :
void DarkBlue(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x1 );
}
	public :
void DarkGreen(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x2 );
}
	public :
void DarkAqua(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x3 );
}
	public :
void DarkRed(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x4 );
}
	public :
void DarkPurple(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x5 );
}
	public :
void Gold(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x6 );
}
	public :
void Gray(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x7 );
}
	public :
void DarkGray(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x8 );
}
	public :
void Blue(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x9 );
}
	public :
void Green(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xa );
}
	public :
void Aqua(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xb );
}
	public :
void Red(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xc );
}
	public :
void LightPurple(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xd );
}
	public :
void Yellow(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xe );
}
	public :
void White(void){
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0xf );
}
};
void res(void){
	system("cls");
	cout<<"Resolution Options :\n\n<1> - 1080p\n<2> - 1366 x 768\n<3> - 1360 x 768\n";
	int rs;
	rs=getche();
	switch(rs){
	
	case'1':{
			CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   
		cfi.dwFontSize.Y = 38;                  
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			break;
	}
	case'2':{
			CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   
		cfi.dwFontSize.Y = 26;                  
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			break;
	}
	case'3':{
			CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   
		cfi.dwFontSize.Y = 24;                  
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			break;
	}
}
}
text tobj;
void clr(void){//Clear Screen
	system("cls");
}
void enter(void){//Enter
	cout << endl;
	system("pause");
	clr();
}
string Name;
int G, L, X, T, W, d, month, troopsMax, workersMax, deaths, y, ST, eta,troopslost;
char C;
void save(void){//Save
	clr();
	cout << "\nSaving...\n";
    ofstream outfile;
    outfile.open("Save");
    outfile << C << " " << deaths << " " << G << " " << L << " " << X << " " << T << " " << W << " " << month << " " << d << " " << y << " " << troopsMax << " " << workersMax << " " << Name;
    outfile.close();
    cout << "\nSave Complete!\n";
    enter();
}

void deletesave(void){
	clr();
	cout << "\nDeleting...\n";
    ofstream outfile;
    outfile.open("Save");
    outfile << C << " " << deaths << " " << G << " " << L << " " << X << " " << T << " " << W << " " << month << " " << d << " " << y << " " << troopsMax << " " << workersMax << " " << Name;
    outfile.close();
    cout << "\nDelete Complete!\n";
    enter();
}

void load(void){
	clr();
	cout << "\nLoading...\n";
    ifstream infile;
    infile.open("Save");
    infile >> C >> deaths >> G >> L >> X >> T >> W >> month >> d >> y >> troopsMax >> workersMax >> Name;
    infile.close();
    cout << "\nLoad Complete!\n";
    enter();
}

void quit(void){
	clr();
	cout << "\nBye!";
	Sleep(300);
	exit(0);
}
void invd (void){
	clr();
  	cout << "\n You've been attacked!\n You have no troops to defend...\n\n Your workers are unprotected\n and you have lost everything\n\n GAMEOVER...\n";
  	cout << "\n1-Load from last Save\n2-Quit";
  	char bc;
  	bc=getche();
  	switch(bc){
          case'1':{
            load();
            break;
          }
          case'2':{
            quit();
          }
      }
}
void bankruptcy(void){//Lose
	clr();
  	cout << "\nYou've ran out of Gold and Human Resources!\n";
  	cout << "\n1-Load from last Save\n2-Quit";
  	char bc;
  	bc=getche();
  	switch(bc){
          case'1':{
            load();
            break;
          }
          case'2':{
            quit();
          }
      }
}

void winbat(void){
	clr();
	int EFI;

	int troopslost = troopslost = EFI/2;

	int workersGain = W/8;
	cout << "We defended our home and we lost " << troopslost << " troops, " << workersGain << " workers!";
	T = T - troopslost;
	W = W - workersGain;
	cout << "\nWe gained " << 5 << " Experience!\n";
	X = X + 5;
	cout << "We gained " << 500 << " Gold!\n\n";
	G = G + 500;
	deaths = deaths + troopslost/1.25;
	enter();
}

void losebat(void){
	int EFI;
	clr();

	troopslost = troopslost =  EFI/1.25;

	int workersGain = W/8;
	cout << "We lost the defense...\n we lost " << troopslost << " troops, " << workersGain << " workers and lost our land! \n(-" << (T*(1+(L/10))) * 2 << "(Troops)\n(-" << (T*(1+(L/10))) * 2 << "(Workers)";
	enter();

	troopsMax = troopsMax - troopsMax/4;
	workersMax = workersMax - workersMax/4;
	T = T - troopslost;
	W = W - workersGain;
	if(workersMax < 1){
		workersMax = 0;
	}
	if(troopsMax < 1){
		troopsMax = 0;
	}
	if(workersMax < W){
		W = workersMax;
	}
	if(troopsMax < T){
		T = troopsMax;
	}
	deaths = deaths + troopslost;
	enter();


if(T<0) {

	T=0;
}
}

void dayEnd(void){
	clr();
	G = G -((T*20)+(L*10)+(W*15));
	d++;
	cout << "\n\nEnd of Day:\n-----------------\n";
	if(raid == 1){
		cout<<"\n\nYour troops are still making their way...";
	}
  	int rng;
      rng = rand() % 4;
	  int rng2;
	 rng2 = rand() % 4;
	if(rng == 1){//Battles
		if(T>0){

              switch(rng2){

              case 0:{

		float EF;

		EF = (1.5*L) + ((X/7.5)/2)-(EF/3);
		int EFI = (1.5*L) + ((X/7.5)/2)-(EF/3);
            EF = EFI/2;
		cout << "An army approaches\nThey have ~" <<EFI << " Troops\n";
		float BP = ((T/EF)/2)*100;
		cout<<"\n\n Our Stratigists have predicted we have a %"<< BP <<" of winning!";
		enter();
         if (BP > 100){
         	winbat();
		 }
		else if((rand() % 101) < BP){
              	winbat();
            }
        	else{
              	losebat();
              }
              break;
              }
              case 1:{

		float EF;

		EF = (1.5*L) + ((X/7.5)/2)-(EF/3);
		int EFI = (1.5*L) + ((X/7.5)/2)-(EF/3);
            EF = EFI/2;
		cout << "An army approaches\nThey have ~" <<EFI << " Troops\n";
		float BP = ((T/EF)/2)*100;
		cout<<"\n\n Our Stratigists have predicted we have a %"<< BP <<" of winning!";
		enter();
         if (BP > 100){
         	winbat();
		 }
		else if((rand() % 101) < BP){
              	winbat();
            }
        	else{
              	losebat();
              }
              break;
              }

            case 2:{

		float EF;

		EF = (1.5*L) + ((X/7.5)/2);
		int EFI = (1.5*L) + ((X/7.5)/2);
            EF = EFI/2;
		cout << "An army approaches\nThey have ~" <<EFI << " Troops\n";
		float BP = ((T/EF)/2)*100;
		cout<<"\n\n Our Stratigists have predicted we have a %"<< BP <<" of winning!";
		enter();
         if (BP > 100){
         	winbat();
		 }
		else if((rand() % 101) < BP){
              	winbat();
            }
        	else{
              	losebat();
              }
              break;
              }
              case 3:{

		float EF;

		EF = (1.5*L) + ((X/7.5)/2);
		int EFI = (1.5*L) + ((X/7.5)/2);
            EF = EFI/2;
		cout << "An army approaches\nThey have ~" <<EFI << " Troops\n";
		float BP = ((T/EF)/2)*100;
		cout<<"\n\n Our Stratigists have predicted we have a %"<< BP <<" of winning!";
		enter();
         if (BP > 100){
         	winbat();
		 }
		else if((rand() % 101) < BP){
              	winbat();
            }
        	else{
              	losebat();
              }
              break;
              }
              }
         }
     // ------------
		 else{
		 	invd();
		 }
	}



  	float pd = d;
  	if( pd/7 == 1 ||pd/7 == 2 ||pd/7 == 3 ||pd/7 == 4){//Pay
		G = G + (W*250);
		int GoldChange = (W*250);
		cout << "You have sold your worker's product!\nIts payday fellas!\nWe earned " << GoldChange << " Gold!";
	}
	if(d==30){//Month Up
		month++;
		d = 1;
	}
	if(month==13){//Year Up
		y++;
		month = 1;
	}
	if(G < -2500){//Bankruptcy
		cout << "-Troops and Workers have Left\n";
		T = T - L;
		W = W - (2 * L);
		cout << "  -Lost " << T-L << " Troops!\n  -Lost " << W-(2*L) << " Workers!\n";
        	if(T < 1 || W < 1){
            	bankruptcy();
            }
	}
	if(workersMax < 1){
		workersMax = 0;
	}
	if(troopsMax < 1){
		troopsMax = 0;
	}
	if(W < 1){
		W = 0;
	}
	if(T < 1){
		T = 0;
	}
	if(workersMax < W){
		W = workersMax;
	}
	if(troopsMax < T){
		T = troopsMax;
	}
	if(L != 1){
		X= 100+X+(.75*L);
		cout << L+(.75*L) << " experience points gained!\n";
	}
	if(X>(400*(L*1.1))){
		cout << "\n\nLEVEL UP!\n";
		X = X-(400*(L*1.1));
		L++;
	}
	eta--;
	if(eta == 0){

		if(rng == 1){//Battles
		float EF;
		EF = (1.5*L) + ((X/7.5)/2);
		int EFI = (1.5*L) + ((X/10)/2);
		cout << "Your army approaches\nWe have ~" << ST << " Troops\n";
		int bp = ((ST/EFI)/2)*100;
		cout<<"\n\n Our Stratigists have predicted we have a %"<< bp <<" of winning!";
              enter();
		if((rand() % 101) < bp){
              	winbat();
            }
        	else{
              	losebat();
              }
	}

	}
	enter();

}

void bigmap(void){
	cin.clear();
	clr();
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	cout << "$                                                                                    $\n";
	cout << "$ [O]______________                                                       [P]         $\n";
	cout << "$   ||            \\_______________________________________________________||         $\n";
	cout << "$   ||                    _____________||                                  ||        $\n";
	cout << "$   ||            _______/                                                 ||        $\n";
	cout << "$   \\___________/      ||                                                 ||        $\n";
	cout << "$              [H]      \\__________________                              ||        $\n";
	cout << "$                        /                 ||                              ||        $\n";
	cout << "$                    ___/                   \\_____________________________||        $\n";
	cout << "$                    |                         ||                          ||        $\n";
	cout << "$                    [J]            [T]________||                          [K]        $\n";
	cout << "$                                                                                    $\n";
	cout << "$                                                                                    $\n";
	cout << "$   o - Homebase    p - Karltina   j - Nairda   t - Baggod   k - Norima   h - Jan    $\n";
	cout << "$                                                                                    $\n";
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
	cout << "What do you want to do?\n1-Raid\n2-Check Distance\n3-Back\n\n";
	char map;
	map=getche();
	switch(map){
		case'1':{
			if(L > 1){
				clr();
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	cout << "$                                                                                    $\n";
	cout << "$ [O]______________                                                       [P]         $\n";
	cout << "$   ||            \\_______________________________________________________||         $\n";
	cout << "$   ||                    _____________||                                  ||        $\n";
	cout << "$   ||            _______/                                                 ||        $\n";
	cout << "$   \\___________/      ||                                                 ||        $\n";
	cout << "$              [H]      \\__________________                              ||        $\n";
	cout << "$                        /                 ||                              ||        $\n";
	cout << "$                    ___/                   \\_____________________________||        $\n";
	cout << "$                    |                         ||                          ||        $\n";
	cout << "$                    [J]            [T]________||                          [K]        $\n";
	cout << "$                                                                                    $\n";
	cout << "$                                                                                    $\n";
	cout << "$   o - Homebase    p - Karltina   j - Nairda   t - Baggod   k - Norima   h - Jan    $\n";
	cout << "$                                                                                    $\n";
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
				cout << "Pick a location (letter code)                                                30km/day\n";
				cout << "b for Back\n\n";
				
				map=getche();
				switch(map){
					case'o':{
						cout << "You cannot raid Homebase\n";
						break;
					}
					case'p':{
						cout << "It will take 3 days to travel here.\n Is this ok?\n1-Yes\n2-No\n\n";
						map=getche();
                                    int EF = (2*L) + ((X/10)/2);
                                	eta = 3;
						switch(map){
							case'1':{
								
								raid = 0;
                                            	cout << "The enemy has " << EF << " troops";
								cout << "How many troops would you like to send?";
                                            	cout << "1- +10% (" << EF+(EF/10) <<")\n2- 25% (" << (T/4) <<")\n3- 50% (" << T/2 << ")\n4- 75% (" << 3*(T/4) << ")\n5- 100% (" << T <<")\n\n";
                                            	char st;
                                          		st=getche();
											  	switch (st){
											        case'1':{
											        	ST = EF+(EF/10);
											            T = T-ST;
											            break;
											 		}
											        case'2':{
											          	ST = T/4;
											            T = T-ST;
											            break;
													}
											        case'3':{
											          	ST = T/2;
											            T = T-ST;
											            break;
													}
											        case'4':{
											          	ST = 3*(T/4);
											            T = T-ST;
											            break;
													}
											        case'5':{
											         	ST = T;
											            T = T-ST;
											            break;
													}
											  }
								break;
							}
							case'2':{
								break;
							}
						}
						break;
					}
					case'j':{
						cout << "It will take 2 days to travel here.\n Is this ok?\n1-Yes\n2-No\n\n";
						map=getche();
                                    int EF = (1.2*L) + ((X/10)/2);
                                	eta = 2;
						switch(map){
							case'1':{
								raid = 0;
                                            	cout << "The enemy has " << EF << " troops";
								cout << "How many troops would you like to send?";
                                            	cout << "1- +10% (" << EF+(EF/10) <<")\n2- 25% (" << (T/4) <<")\n3- 50% (" << T/2 << ")\n4- 75% (" << 3*(T/4) << ")\n5- 100% (" << T <<")\n\n";
                                            	char st;
                                          		st=getche();
											  	switch (st){
											        case'1':{
											        	ST = EF+(EF/10);
											            T = T-ST;
											            break;
											 		}
											        case'2':{
											          	ST = T/4;
											            T = T-ST;
											            break;
													}
											        case'3':{
											          	ST = T/2;
											            T = T-ST;
											            break;
													}
											        case'4':{
											          	ST = 3*(T/4);
											            T = T-ST;
											            break;
													}
											        case'5':{
											         	ST = T;
											            T = T-ST;
											            break;
													}
											  }
								break;
							}
							case'2':{
								break;
							}
						}
						break;
					}
					case't':{
						cout << "It will take 3 days to travel here.\n Is this ok?\n1-Yes\n2-No\n\n";
						map=getche();
                                    int EF = (.8*L) + ((X/10)/2);
                                	eta = 3;
						switch(map){
							case'1':{
								raid = 0;
                                            	cout << "The enemy has " << EF << " troops";
								cout << "How many troops would you like to send?";
                                            	cout << "1- +10% (" << EF+(EF/10) <<")\n2- 25% (" << (T/4) <<")\n3- 50% (" << T/2 << ")\n4- 75% (" << 3*(T/4) << ")\n5- 100% (" << T <<")\n\n";
                                            	char st;
                                          		st=getche();
											  	switch (st){
											        case'1':{
											        	ST = EF+(EF/10);
											            T = T-ST;
											            break;
											 		}
											        case'2':{
											          	ST = T/4;
											            T = T-ST;
											            break;
													}
											        case'3':{
											          	ST = T/2;
											            T = T-ST;
											            break;
													}
											        case'4':{
											          	ST = 3*(T/4);
											            T = T-ST;
											            break;
													}
											        case'5':{
											         	ST = T;
											            T = T-ST;
											            break;
													}
											  }
								break;
							}
							case'2':{
								break;
							}
						}
						break;
					}
					case'k':{
						cout << "It will take 3 days to travel here.\n Is this ok?\n1-Yes\n2-No\n\n";
						map=getche();
                                    int EF = (2.4*L) + ((X/10)/2);
                                	eta = 3;
						switch(map){
							case'1':{
								raid = 0;
                                            	cout << "The enemy has " << EF << " troops";
								cout << "How many troops would you like to send?";
                                            	cout << "1- +10% (" << EF+(EF/10) <<")\n2- 25% (" << (T/4) <<")\n3- 50% (" << T/2 << ")\n4- 75% (" << 3*(T/4) << ")\n5- 100% (" << T <<")\n\n";
                                            	char st;
                                          		st=getche();
											  	switch (st){
											        case'1':{
											        	ST = EF+(EF/10);
											            T = T-ST;
											            break;
											 		}
											        case'2':{
											          	ST = T/4;
											            T = T-ST;
											            break;
													}
											        case'3':{
											          	ST = T/2;
											            T = T-ST;
											            break;
													}
											        case'4':{
											          	ST = 3*(T/4);
											            T = T-ST;
											            break;
													}
											        case'5':{
											         	ST = T;
											            T = T-ST;
											            break;
													}
											  }
								break;
							}
							case'2':{
								break;
							}
						}
						break;
					}
					case'h':{
						cout << "It will take 1 day to travel here.\n Is this ok?\n1-Yes\n2-No\n\n";
						map=getche();
                                    int EF = (.37*L) + ((X/10)/2);
                                	eta = 1;
						switch(map){
							case'1':{
								raid = 0;
                                            	cout << "The enemy has " << EF << " troops";
								cout << "How many troops would you like to send?";
                                            	cout << "1- +10% (" << EF+(EF/10) <<")\n2- 25% (" << (T/4) <<")\n3- 50% (" << T/2 << ")\n4- 75% (" << 3*(T/4) << ")\n5- 100% (" << T <<")\n\n";
                                            	char st;
                                          		st=getche();
											  	switch (st){
											        case'1':{
											        	ST = EF+(EF/10);
											            T = T-ST;
											            break;
											 		}
											        case'2':{
											          	ST = T/4;
											            T = T-ST;
											            break;
													}
											        case'3':{
											          	ST = T/2;
											            T = T-ST;
											            break;
													}
											        case'4':{
											          	ST = 3*(T/4);
											            T = T-ST;
											            break;
													}
											        case'5':{
											         	ST = T;
											            T = T-ST;
											            break;
													}
											  }
								break;
							}
							case'2':{
								break;
							}
						}
						break;
					}
					case'b':{
						bigmap();
						break;
					}
                            cout << ST << " Troops have been sent out!";
                            enter();
				}
				break;
			}
			break;
		}
		case'2':{
			for(;;){
				clr();
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	cout << "$                                                                                    $\n";
	cout << "$ [O]______________                                                       [P]         $\n";
	cout << "$   ||            \\_______________________________________________________||         $\n";
	cout << "$   ||                    _____________||                                  ||        $\n";
	cout << "$   ||            _______/                                                 ||        $\n";
	cout << "$   \\___________/      ||                                                 ||        $\n";
	cout << "$              [H]      \\__________________                              ||        $\n";
	cout << "$                        /                 ||                              ||        $\n";
	cout << "$                    ___/                   \\_____________________________||        $\n";
	cout << "$                    |                         ||                          ||        $\n";
	cout << "$                    [J]            [T]________||                          [K]        $\n";
	cout << "$                                                                                    $\n";
	cout << "$                                                                                    $\n";
	cout << "$   o - Homebase    p - Karltina   j - Nairda   t - Baggod   k - Norima   h - Jan    $\n";
	cout << "$                                                                                    $\n";
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
				cout << "Pick a location (letter input)                                                30km/day\n";
				cout << "b for Back\n\n";
				cin >> map;
				switch(map){
					case'o':{
						cout << "The distance from Homebase to Homebase is 0km\nIt will take roughly 0 days to travel there\n";
						break;
					}
					case'p':{
						cout << "The distance form Homebase to Karltina is 73km\nIt will take roughly 3 days to travel there\n";
						break;
					}
					case'j':{
						cout << "The distance from Homebase to Nairda is 36km\nIt will take roughly 2 days to travel there\n";
						break;
					}
					case't':{
						cout << "The distance from Homebase to Baggod is 64km\nIt will take roughly 3 days to travel there\n";
						break;
					}
					case'k':{
						cout << "The distance from Homebase to Norima is 80km\nIt will take roughly 3 days to travel there\n";
						break;
					}
					case'h':{
						cout << "The distance from Homebase to Jan is 15km\n It will take a day to travel there\n";
						break;
					}
					case'b':{
						bigmap();
						break;

				}
				enter();
				break;
			}
		}
		case'3':{
			break;
		}
	}
}
}
void game(void){
	for(;;){
		cin.clear();
		clr();
		int Cit = (L+W+T)*1.25;
		cout <<"The " << Name << " Empire! \n\n";
		cout << "\nGold:             " << G;
		cout << "\nLevel:            " << L;
		cout << "\nExperience:       " << X;
		cout << "\nLand Owned:       " << troopsMax * 1000 + workersMax * 1000 << " square meters";
		cout << "\nTroops:           " << T << " / " << troopsMax;
		cout << "\nWorkers:          " << W << " / " << workersMax;
		cout << "\nTotal Citizens:   " << Cit;
		cout << "\nDate:             " << month << " / " << d << " / " << y;
		cout << "\n                  m / d / y";
		cout << "\nDeaths:           " << deaths;
		cout << "\n\nWhat shall we do commander?";
		cout << "\n\n1-Pass Time\n2-Shop\n3-Map\n4-Options\n5-Load\n6-Save\n7-Exit\n\n";
		char gi;
		gi=getche();
		switch(gi){
			case'1':{
				break;
			}
			case'2':{
				clr();
				cout << "Welcome to the Shop!\n\n";
				cout << G << " - Gold\n";
				cout << T << " / " << troopsMax << " - Troops\n" << W << " / " << workersMax << " - Workers\n";
				cout << "1 - Troop        20G   (Defenses)\n";
				cout << "2 - Worker       15G    (Income)\n";
				cout << "3 - More Land   7500G    (Area)\n";
				cout << "4 - Back\n";
				char si;
				si=getche();
				switch(si){
					case'1':{//Troops
					clr();
						cout << G << " - Gold\n";
						cout << "\nTroops:           " << T << " / " << troopsMax;
						cout << "\nWorkers:          " << W << " / " << workersMax;
						cout << "\n\n1- 1 Troop      (20G)\n2- 10 Troops    (200G)\n3- 100 Troops   (10000G)\n4- Fill Max (Relative)\n5- Cancel";
						char tsi;
						tsi=getche();
						switch(tsi){
							case'1':{
								clr();
								if(G>19 && !((T+1) > troopsMax) && T < troopsMax){
									G = G - 20;
									cout << "-20 Gold.\n";
									T = T + 1;
									cout << "UPDATE: Troops Increased by 1!\n";
									enter();
								}
								else{
									cout << "Not enough Gold or space, returning to Main Screen\n";
									enter();
								}
								break;
							}
							case'2':{
								clr();
								if(G>199 && !((T+10) > troopsMax) && T < troopsMax){
									G = G - 200;
									cout << "-200 Gold.\n";
									T = T + 10;
									cout << "UPDATE: Troops Increased by 10!\n";
									enter();
								}
								else{
									cout << "Not enough Gold or space, returning to Main Screen\n";
									enter();
								}
								break;
							}
							case'3':{
								clr();
								if(G>1999 && !((T+100) > troopsMax) && T < troopsMax){
									G = G - 1500;
									cout << "-1500 Gold.\n";
									T = T + 100;
									cout << "UPDATE: Troops Increased by 100!\n";
									enter();
								}
								else{
									cout << "Not enough Gold or space, returning to Main Screen\n";
									enter();
								}
								break;
							}
							case'5':{
								clr();
								cout << "Options:\n--------\n\n1-";
								break;
							}
							case'4':{
								clr();
								if(G>((troopsMax-T)*20) ){
								G = G - (troopsMax-T)*20;
								T = troopsMax;
								break;
							  }
							  else {
							  	cout<<"Not enough Gold or space, returning to Main Screen\n";
							  	enter();
							  }
							}
						}
						break;
					}
					case'2':{//Workers
							clr();
							cout << "\nTroops:           " << T << " / " << troopsMax;
							cout << "\nWorkers:          " << W << " / " << workersMax;
							cout << "\n\n1- 1 Worker     (15G)\n2- 10 Workers   (150G)\n3- 100 Workers  (1500G)\nx4- Fill Max (Relative)\n5- Cancel";
							char wsi;
							wsi=getche();
							switch(wsi){
								case'1':{
									clr();
									if(G>14 && !((W+1) > workersMax) && W < workersMax){
										G = G - 15;
										cout << "-15 Gold.\n";
										W = W + 1;
										cout << "UPDATE: Workers Increased by 1!\n";
										enter();
									}
									else{
										cout << "Not enough Gold or Space, returning to Main Screen\n";
										enter();
									}
									break;
								}
								case'2':{
									clr();
									if(G>149 && !((W+10) > workersMax) && W < workersMax){
										G = G - 150;
										cout << "-150 Gold.\n";
										W = W + 10;
										cout << "UPDATE: Workers Increased by 10!\n";
										enter();
									}
									else{
										cout << "Not enough Gold or Space, returning to Main Screen\n";
										enter();
									}
									break;
								}
								case'3':{
									clr();
									if(G>1499 && !((W+100) > workersMax) && W < workersMax){
										G = G - 1500;
										cout << "-1500 Gold.\n";
										W = W + 100;
										cout << "UPDATE: Workers Increased by 100!\n";
										enter();
									}
									else{
										cout << "Not enough Gold or Space, returning to Main Screen\n";
										enter();
									}
									break;
								}
								case'4':{
									clr();
								if(G>((workersMax-W)*20) ){
								G = G - (workersMax-W)*20;
								W = workersMax;
									break;
								}
                                              case'5':{
                                                break;
                                              }
                                                }
							}
						break;
					}
					case'3':{//Land
						clr();
						if(G>7499){
							cout << "-7500 Gold.\n";
							cout << "UPDATE: Max Workers increased by 10!\n";
							G = G - 7500;
							workersMax = workersMax + 30;
							troopsMax = troopsMax + 15;
							cout << "UPDATE: Max Troops increased by 20!\n";
							enter();
						}
						else{
							cout << "Not enough Gold, returning to Main Screen\n";
						}
						break;
					}
					case'4':{//Back
						break;
					}
					break;
				}
				game();
				break;
			}
			case'3':{
				bigmap();
				game();
				break;
			}
			case'4':{
				clr();
				cout << "Options Menu:\n";
				cout << "Text Colour:\n1-Green\n2-Blue\n3-Red\n4-Pink\n5-Yellow\n6-White\n\n";
				char a;
				a=getche();
				switch(a){
					case'1':{
						tobj.Green();
						C=1;
						break;
					}
					case'2':{
						tobj.Aqua();
						C=2;
						break;
					}
					case'3':{
						tobj.Red();
						C=3;
						break;
					}
					case'4':{
						tobj.LightPurple();
						C=4;
						break;
					}
					case'5':{
						tobj.Yellow();
						C=5;
						break;
					}
					default:{
						tobj.White();
						break;
					}
				}
				game();
				break;
			}
			case'5':{
				cout << "Are you sure you want to load?\n1-Yes\n2-No\n\n";
				char a;
				a=getche();
				switch(a){
					case'1':{
						load();
						break;
					}
					default:{
						game();
						break;
					}
				}
			}
			case'6':{
				save();
				game();
				break;
			}
			case'7':{
				clr();
				cout << "\n1-Save First\n2-Just Exit\n\n";;
				char soq;
				soq=getche();
				switch(soq){
					case'1':{
						save();
						quit();
					}
					case'2':{
						quit();
					}
				}
			}
		}
		dayEnd();
	}
}
void menu(void){
	tobj.Aqua();
	for(;;){
		clr();
		cout << "\nCascade\n\n";
		cout << "1. <New Game>\n2. <Load Game>\n3. <Delete Save>\n4. <Options>\n5. <Exit>\nInput : ";
		char mmi;
		mmi=getche();
		switch(mmi){
			case'1':{

				G = 6000;
				d = 1;
				month = 1;
				y = 1;
				workersMax = 20;
				troopsMax = 10;
				W = 0;
				T = 0;
				X = 0;
				L = 1;
				clr();
				cout << "What would you like to name your empire? : ";
				cin >> Name;
				game();
				break;
			}
			case'2':{
				load();
				switch(C){
					case'1':{
						tobj.Green();
						C=1;
						break;
					}
					case'2':{
						tobj.Aqua();
						C=2;
						break;
					}
					case'3':{
						tobj.Red();
						C=3;
						break;
					}
					case'4':{
						tobj.LightPurple();
						C=4;
						break;
					}
					case'5':{
						tobj.Yellow();
						C=5;
						break;
					}
					default:{
						tobj.White();
						break;
					}
				}
				game();
				break;
			}
			case'3':{

				G = 6000;
				d = 1;
				month = 1;
				y = 1;
				workersMax = 20;
				troopsMax = 10;

				W = 0;
				T = 0;
				X = 0;
				L = 0;
				deletesave();
				menu();
			}
			case'4':{
				res();
				break;
			}
			case '5':{
				exit(0);
				break;
			}
		}
	}
}

int main(){


	menu();
}
