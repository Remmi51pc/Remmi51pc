#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<time.h>
#include<stdio.h>
#include<string>
#include<conio.h>


using namespace std;

void czas_funkcja(){

    time_t czas;
    struct tm * ptr;
    time( & czas );
    ptr = localtime( & czas );
    char * data = asctime( ptr );
    system("cls");
    cout << "Data: " << data;

}
int main (){

string login, haslo;//logowanie

long double a,b;//kalkulator
string wybor_kalkulator;//kalkulator
string wybor, wyborglowny,pomoc,wyborpopomocy;//kalkulator

float trapez1,trapez2,trapez3,trojkat1,trojkat2,prostokat1,prostokat2,romb1,romb2,objetosc1,objetosc2,objetosc3,rownoleglobok1, rownoleglobok2;//pole figur

int liczbalosowa; //losowanie innych odpowiedzi
//milionerzy v
string pierwsze, drugie, trzecie, czwarte, piate, szoste, siodme, pierwsze1, drugie1, trzecie1,czwarte1,piate1,szoste1,siodme1, pierwsze2, drugie2, trzecie2,czwarte2,piate2,szoste2,siodme2,pierwsze3,drugie3,trzecie3,czwarte3,piate3,szoste3,siodme3,pierwsze4,drugie4,trzecie4,czwarte4,piate4,szoste4,siodme4,pierwsze5,drugie5,trzecie5,czwarte5,piate5,szoste5,siodme5 ;
int od_losuj,do_losuj;//losowanie liczby
int jakasliczba, strzal, ile_prob=0,poziomtrudnosci;//zgadywanka

int x=1,y=25;
char z='a',literka;// program szybkie pisanie
int bledy=0;
string c;

cout<<"*"<<endl;
cout<<"*"<<endl;
cout<<"*"<<endl;
cout<<"*"<<endl;
cout<<"*"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"**"<<endl;
cout<<"**"<<endl;
cout<<"**"<<endl;
cout<<"**"<<endl;
cout<<"**"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***"<<endl;
cout<<"***"<<endl;
cout<<"***"<<endl;
cout<<"***"<<endl;
cout<<"***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"*** "<<endl;
cout<<"*** "<<endl;
cout<<"****"<<endl;
cout<<"*** "<<endl;
cout<<"*** "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***  "<<endl;
cout<<"***  "<<endl;
cout<<"*****"<<endl;
cout<<"***  "<<endl;
cout<<"***  "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   "<<endl;
cout<<"***   "<<endl;
cout<<"******"<<endl;
cout<<"***   "<<endl;
cout<<"***   "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   *"<<endl;
cout<<"***   *"<<endl;
cout<<"*******"<<endl;
cout<<"***   *"<<endl;
cout<<"***   *"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   **"<<endl;
cout<<"***   **"<<endl;
cout<<"********"<<endl;
cout<<"***   **"<<endl;
cout<<"***   **"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***"<<endl;
cout<<"***   ***"<<endl;
cout<<"*********"<<endl;
cout<<"***   ***"<<endl;
cout<<"***   ***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   *** "<<endl;
cout<<"***   *** "<<endl;
cout<<"********* "<<endl;
cout<<"***   *** "<<endl;
cout<<"***   *** "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***  "<<endl;
cout<<"***   ***  "<<endl;
cout<<"*********  "<<endl;
cout<<"***   ***  "<<endl;
cout<<"***   ***  "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   "<<endl;
cout<<"***   ***   "<<endl;
cout<<"*********   "<<endl;
cout<<"***   ***   "<<endl;
cout<<"***   ***   "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   *"<<endl;
cout<<"***   ***   *"<<endl;
cout<<"*********   *"<<endl;
cout<<"***   ***   *"<<endl;
cout<<"***   ***   *"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   **"<<endl;
cout<<"***   ***   **"<<endl;
cout<<"*********   **"<<endl;
cout<<"***   ***   **"<<endl;
cout<<"***   ***   **"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ***"<<endl;
cout<<"***   ***   ***"<<endl;
cout<<"*********   ***"<<endl;
cout<<"***   ***   ***"<<endl;
cout<<"***   ***   ***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ****"<<endl;
cout<<"***   ***   *** "<<endl;
cout<<"*********   ****"<<endl;
cout<<"***   ***   *** "<<endl;
cout<<"***   ***   ****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   *****"<<endl;
cout<<"***   ***   ***  "<<endl;
cout<<"*********   *****"<<endl;
cout<<"***   ***   ***  "<<endl;
cout<<"***   ***   *****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******"<<endl;
cout<<"***   ***   ***   "<<endl;
cout<<"*********   ******"<<endl;
cout<<"***   ***   ***   "<<endl;
cout<<"***   ***   ******"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ****** "<<endl;
cout<<"***   ***   ***    "<<endl;
cout<<"*********   ****** "<<endl;
cout<<"***   ***   ***    "<<endl;
cout<<"***   ***   ****** "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******  "<<endl;
cout<<"***   ***   ***     "<<endl;
cout<<"*********   ******  "<<endl;
cout<<"***   ***   ***     "<<endl;
cout<<"***   ***   ******  "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   "<<endl;
cout<<"***   ***   ***      "<<endl;
cout<<"*********   ******   "<<endl;
cout<<"***   ***   ***      "<<endl;
cout<<"***   ***   ******   "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   *"<<endl;
cout<<"***   ***   ***      *"<<endl;
cout<<"*********   ******   *"<<endl;
cout<<"***   ***   ***      *"<<endl;
cout<<"***   ***   ******   *"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   **"<<endl;
cout<<"***   ***   ***      **"<<endl;
cout<<"*********   ******   **"<<endl;
cout<<"***   ***   ***      **"<<endl;
cout<<"***   ***   ******   **"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***"<<endl;
cout<<"***   ***   ***      ***"<<endl;
cout<<"*********   ******   ***"<<endl;
cout<<"***   ***   ***      ***"<<endl;
cout<<"***   ***   ******   ***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   *** "<<endl;
cout<<"***   ***   ***      *** "<<endl;
cout<<"*********   ******   *** "<<endl;
cout<<"***   ***   ***      ****"<<endl;
cout<<"***   ***   ******   ****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***  "<<endl;
cout<<"***   ***   ***      ***  "<<endl;
cout<<"*********   ******   ***  "<<endl;
cout<<"***   ***   ***      *****"<<endl;
cout<<"***   ***   ******   *****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***   "<<endl;
cout<<"***   ***   ***      ***   "<<endl;
cout<<"*********   ******   ***   "<<endl;
cout<<"***   ***   ***      ******"<<endl;
cout<<"***   ***   ******   ******"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***    "<<endl;
cout<<"***   ***   ***      ***    "<<endl;
cout<<"*********   ******   ***    "<<endl;
cout<<"***   ***   ***      ****** "<<endl;
cout<<"***   ***   ******   ****** "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***     "<<endl;
cout<<"***   ***   ***      ***     "<<endl;
cout<<"*********   ******   ***     "<<endl;
cout<<"***   ***   ***      ******  "<<endl;
cout<<"***   ***   ******   ******  "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      "<<endl;
cout<<"***   ***   ***      ***      "<<endl;
cout<<"*********   ******   ***      "<<endl;
cout<<"***   ***   ***      ******   "<<endl;
cout<<"***   ***   ******   ******   "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      *"<<endl;
cout<<"***   ***   ***      ***      *"<<endl;
cout<<"*********   ******   ***      *"<<endl;
cout<<"***   ***   ***      ******   *"<<endl;
cout<<"***   ***   ******   ******   *"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      **"<<endl;
cout<<"***   ***   ***      ***      **"<<endl;
cout<<"*********   ******   ***      **"<<endl;
cout<<"***   ***   ***      ******   **"<<endl;
cout<<"***   ***   ******   ******   **"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***"<<endl;
cout<<"***   ***   ***      ***      ***"<<endl;
cout<<"*********   ******   ***      ***"<<endl;
cout<<"***   ***   ***      ******   ***"<<endl;
cout<<"***   ***   ******   ******   ***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      *** "<<endl;
cout<<"***   ***   ***      ***      *** "<<endl;
cout<<"*********   ******   ***      *** "<<endl;
cout<<"***   ***   ***      ******   ****"<<endl;
cout<<"***   ***   ******   ******   ****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***  "<<endl;
cout<<"***   ***   ***      ***      ***  "<<endl;
cout<<"*********   ******   ***      ***  "<<endl;
cout<<"***   ***   ***      ******   *****"<<endl;
cout<<"***   ***   ******   ******   *****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***   "<<endl;
cout<<"***   ***   ***      ***      ***   "<<endl;
cout<<"*********   ******   ***      ***   "<<endl;
cout<<"***   ***   ***      ******   ******"<<endl;
cout<<"***   ***   ******   ******   ******"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***    "<<endl;
cout<<"***   ***   ***      ***      ***    "<<endl;
cout<<"*********   ******   ***      ***    "<<endl;
cout<<"***   ***   ***      ******   ****** "<<endl;
cout<<"***   ***   ******   ******   ****** "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***     "<<endl;
cout<<"***   ***   ***      ***      ***     "<<endl;
cout<<"*********   ******   ***      ***     "<<endl;
cout<<"***   ***   ***      ******   ******  "<<endl;
cout<<"***   ***   ******   ******   ******  "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      "<<endl;
cout<<"***   ***   ***      ***      ***      "<<endl;
cout<<"*********   ******   ***      ***      "<<endl;
cout<<"***   ***   ***      ******   ******   "<<endl;
cout<<"***   ***   ******   ******   ******   "<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      *"<<endl;
cout<<"***   ***   ***      ***      ***      *"<<endl;
cout<<"*********   ******   ***      ***      *"<<endl;
cout<<"***   ***   ***      ******   ******   *"<<endl;
cout<<"***   ***   ******   ******   ******   *"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      **"<<endl;
cout<<"***   ***   ***      ***      ***      **"<<endl;
cout<<"*********   ******   ***      ***      **"<<endl;
cout<<"***   ***   ***      ******   ******   **"<<endl;
cout<<"***   ***   ******   ******   ******   **"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      ***"<<endl;
cout<<"***   ***   ***      ***      ***      ***"<<endl;
cout<<"*********   ******   ***      ***      ***"<<endl;
cout<<"***   ***   ***      ******   ******   ***"<<endl;
cout<<"***   ***   ******   ******   ******   ***"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      ****"<<endl;
cout<<"***   ***   ***      ***      ***      *** "<<endl;
cout<<"*********   ******   ***      ***      *** "<<endl;
cout<<"***   ***   ***      ******   ******   *** "<<endl;
cout<<"***   ***   ******   ******   ******   ****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      *****"<<endl;
cout<<"***   ***   ***      ***      ***      ***  "<<endl;
cout<<"*********   ******   ***      ***      ***  "<<endl;
cout<<"***   ***   ***      ******   ******   ***  "<<endl;
cout<<"***   ***   ******   ******   ******   *****"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      ******"<<endl;
cout<<"***   ***   ***      ***      ***      ***   "<<endl;
cout<<"*********   ******   ***      ***      ***   "<<endl;
cout<<"***   ***   ***      ******   ******   ***   "<<endl;
cout<<"***   ***   ******   ******   ******   ******"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      *******"<<endl;
cout<<"***   ***   ***      ***      ***      ***   *"<<endl;
cout<<"*********   ******   ***      ***      ***   *"<<endl;
cout<<"***   ***   ***      ******   ******   ***   *"<<endl;
cout<<"***   ***   ******   ******   ******   *******"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      ********"<<endl;
cout<<"***   ***   ***      ***      ***      ***   **"<<endl;
cout<<"*********   ******   ***      ***      ***   **"<<endl;
cout<<"***   ***   ***      ******   ******   ***   **"<<endl;
cout<<"***   ***   ******   ******   ******   ********"<<"\a"<<endl;
Sleep(30);
system("cls");
cout<<"***   ***   ******   ***      ***      *********"<<endl;
cout<<"***   ***   ***      ***      ***      ***   ***"<<endl;
cout<<"*********   ******   ***      ***      ***   ***"<<endl;
cout<<"***   ***   ***      ******   ******   ***   ***"<<endl;
cout<<"***   ***   ******   ******   ******   *********"<<"\a"<<endl;
Sleep(30);
system("cls");

system("cls");
cout<<"------------------"<<endl;
cout<<"|    MANFRED   |R| alpha 1.4"<<endl;
cout<<"------------------"<<endl;
cout<<"Witaj jestem Manfred"<<endl;
cout<<"zaloguj sie"<<endl;
cin>>login>>haslo;
if((login=="hack")&&(haslo=="it")){

system("cls");
cout<<"Dostep przyznany :)"<<"\a"<<endl;
Sleep(2000);


while(1){
system("cls");
czas_funkcja();
cout<<"------------------"<<endl;
cout<<"|    MANFRED   |R| alpha 1.4"<<endl;
cout<<"------------------"<<endl;
cout<<"Witaj jestem Manfred"<<endl;
cout<<"Napisz : pomoc : by zobaczyc obslugiwane komendy"<<endl;

getline(cin,wyborglowny);
if (wyborglowny == "pomoc"){
    system("cls");
    cout<<"Bierzace komendy: "<<endl;
    cout<<"wlacz kalkulator"<<endl;
    cout<<"lubisz mnie?"<<endl;
    cout<<"oblicz pole figury"<<endl;
    cout<<"autorzy"<<endl;
    cout<<"pokaz animacje"<<endl;
    cout<<"zamknij sie"<<endl;
    cout<<"lubie cie"<<endl;
    cout<<"wlacz milionerow"<<endl;
    cout<<"xd"<<endl;
    cout<<"hej"<<endl;
    cout<<"siema"<<endl;
    cout<<"siemka"<<endl;
    cout<<"jak sie czujesz"<<endl;
    cout<<"losuj liczbe"<<endl;
    cout<<"program do szybkiego pisania"<<endl;
    cout<<"zgadywanka"<<endl;
    cout<<"zawolaj pupila"<<endl;
	system("Pause");
}

else if ((wyborglowny == "wlacz kalkulator")||(wyborglowny=="kalkulator")||(wyborglowny=="kalkulatorek")||(wyborglowny=="uruchom kalkulator")){
while(1){
system("cls");
cout<<"by obliczyc napisz oblicz by wylaczyc stop"<<endl;
cin>>wybor_kalkulator;
if(wybor_kalkulator == "oblicz"){
cout<<"Podaj dwa argumenty i znak co chcesz z tym zrobic np: 213 + 123 pamietaj o spacji! napisz stop by wylaczyc"<<endl;
cin>>a>>wybor>>b;
system("cls");
if(wybor=="+"){
    cout<<"Twoim wynikiem jest: "<<a+b<<endl;
	system("Pause");
	continue;
}

else if(wybor=="-"){
    cout<<"Twoim wynikiem jest: "<<a-b<<endl;
    	system("Pause");
    	continue;
}

else if(wybor=="*"){
    cout<<"Twoim wynikiem jest: "<<a*b<<endl;
    	system("Pause");
    	continue;
}

else if(wybor=="/"){
    cout<<"Twoim wynikiem jest: "<<a/b<<endl;
    	system("Pause");
    	continue;
}

}
break;
}
}




else if(wyborglowny=="lubisz mnie?"){
    cout<<" "<<endl;
    cout<<"Tak, bardzo!!!"<<endl;
    	system("Pause");
}
else if(wyborglowny=="program do szybkiego pisania"){
    cout<<"napisz start aby zaczac!"<<endl;
cin>>c;
if(c=="start"){
    time_t start, koniec;

    double roznica;

    time( & start );



while (x<=y){


    system("cls");
    cout<<z<<endl;
    cin>>literka;
    if(z==literka){
        cout<<"Dobrze"<<endl;
        Sleep(500);
    }
    else{
        bledy++;
    }

     z=z+5;
     if(z>=122){
        z=97;
        z=z+x;
     }

     x++;


}
time( & koniec );
    roznica = difftime( koniec, start );
    cout << "Cwiczenie zajelo Ci: " << roznica << " sekund"<<endl;
    cout<<"Ilosc twoich bledow: "<<bledy<<endl;
system("Pause");



}
}




else if(wyborglowny=="autorzy"){
    cout<<" "<<endl;
    cout<<"RemmiStudios"<<endl;
    	system("Pause");
}





else if (wyborglowny=="oblicz pole figury"){
    cout<<"Podaj jakiej figury chcesz obliczyc pole: lub napisz 'objetosc' by policzyc objetosc prostopadloscianu pamietaj bez polskich liter!"<<endl;
cin>>wybor;
system ("cls");
if(wybor == "trapez"){
    cout<<"podaj podstawe"<<endl;
    cin>>trapez1;
    cout<<"podaj druga podstawe"<<endl;
    cin>>trapez2;

    cout<<"Podaj wysokosc"<<endl;
    cin>>trapez3;
    system("cls");
    cout<<((trapez1 + trapez2) * trapez3) / 2<<endl;
    Sleep(5000);
system("Pause");
}
else if(wybor == "trojkat"){
    cout<<"Podaj podstawe"<<endl;
    cin>>trojkat1;
    cout<<"Podaj wysokosc"<<endl;
    cin>>trojkat2;
    system("cls");
    cout<<trojkat1 * trojkat2 /2<<endl;
    Sleep(5000);
system("Pause");
}
else if(wybor == "prostokat"){
    cout<<"Podaj jeden bok"<<endl;
    cin>>prostokat1;
    cout<<"Podaj drugi bok"<<endl;
    cin>>prostokat2;
    system("cls");
    cout<<prostokat1 * prostokat2<<endl;
    Sleep(5000);
system("Pause");
}
else if(wybor == "romb"){
    cout<<"Podaj pierwsza przekatna"<<endl;
    cin>>romb1;
    cout<<"Podaj druga przekatna"<<endl;
    cin>>romb2;
    system("cls");
    cout<<romb1*romb2/2<<endl;
    Sleep(5000);
system("Pause");
}
else if(wybor=="objetosc"){
    cout<<"Podaj pierwszy bok"<<endl;
    cin>>objetosc1;
    cout<<"Podaj drugi bok"<<endl;
    cin>>objetosc2;
    cout<<"Podaj trzeci bok"<<endl;
    cin>>objetosc3;
    system("cls");
    cout<<objetosc1 * objetosc2 * objetosc3<<endl;
    system("Pause");

}
else if(wybor=="rownoleglobok"){
    cout<<"Podaj dlugosc podtawy"<<endl;
    cin>>rownoleglobok1;
    cout<<"Podaj wysokosc wysokosci"<<endl;
    cin>>rownoleglobok2;
    system("cls");
    cout<<rownoleglobok1 * rownoleglobok2<<endl;
    system("Pause");

}
else{
    cout<<"Blad! podaj nazwe danej figury!"<<endl;
    system("Pause");

}
}
else if ((wyborglowny=="pokaz animacje")||(wyborglowny=="wlacz animacje")||(wyborglowny=="uruchom animacje")||(wyborglowny=="animacja")){
cout<<"***   ***"<<endl;
cout<<"***   ***"<<endl;
cout<<"*********"<<endl;
cout<<"***   ***"<<endl;
cout<<"***   ***"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<"***   ***   ******"<<endl;
cout<<"***   ***   ***"<<endl;
cout<<"*********   ******"<<endl;
cout<<"***   ***   ***"<<endl;
cout<<"***   ***   ******"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<"***   ***   ******   ***   "<<endl;
cout<<"***   ***   ***      ***   "<<endl;
cout<<"*********   ******   ***   "<<endl;
cout<<"***   ***   ***      ******"<<endl;
cout<<"***   ***   ******   ******"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<"***   ***   ******   ***      ***"<<endl;
cout<<"***   ***   ***      ***      ***"<<endl;
cout<<"*********   ******   ***      ***"<<endl;
cout<<"***   ***   ***      ******   ******"<<endl;
cout<<"***   ***   ******   ******   ******"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<"***   ***   ******   ***      ***      *********"<<endl;
cout<<"***   ***   ***      ***      ***      ***   ***"<<endl;
cout<<"*********   ******   ***      ***      ***   ***"<<endl;
cout<<"***   ***   ***      ******   ******   ***   ***"<<endl;
cout<<"***   ***   ******   ******   ******   *********"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*        *"<<endl;
cout<<"*  _--_  *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*        *"<<endl;
cout<<"*  ----  *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<"\a"<<endl;
Sleep(1000);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*        *"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
cout<<"*        *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
cout<<"*   --   *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
cout<<"*  _  _  *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
cout<<"*   ||   *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
cout<<"*        *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
cout<<"*  *  *  *"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
cout<<"**********"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
cout<<"/ / / / /"<<endl;
Beep(1567, 200);
Sleep(200);
system("cls");
cout<<" / / / / /"<<endl;
Beep(1567, 200);
system("cls");
Sleep(1000);
system("Pause");


}
else if(wyborglowny=="ale jaja"){
    cout<<"XD"<<endl;
    system("Pause");
}
else if(wyborglowny=="zamknij sie"){
    cout<<"Sam tego chciales"<<endl;
    Sleep(1000);
    return 0;
}
else if(wyborglowny=="lubie cie"){
    cout<<"Dzieki"<<endl;
    cout<<"Ja ciebie tez :) "<<endl;
    system("Pause");
}
else if((wyborglowny=="milionerzy")||(wyborglowny=="wlacz milionerow")||(wyborglowny=="uruchom milionerow")){
int liczba;
system("cls");
    cout << " _______________________________________________________________________"<<endl;
    cout << "|R|                                                                     |"<<endl;
    cout << "|-                     Witaj w programie Milionerzy!                    |"<<endl;
    cout << "|Zabiore cie na 7 pytan w ktorych bedziesz mogl wygrac 1 milion zlotych!|"<<endl;
    cout << "|_______________________________________________________________________|"<<endl;
    Sleep(5000);
    Beep(1567, 200);
    system("cls");
    srand(time(NULL));
    liczba = rand()%120 + 1;
    if(liczba <= 20){
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Pierwsze pytanie brzmi: kto byl pierwszym krolem Polski?"<<endl;
    cout<<" a Kazimierz Wielki         b Boleslaw Chrobry"<<endl;
    cout<<" c Wladyslaw Jagiello       d Mieszko I       "<<endl;
    cin>>pierwsze;
    if(pierwsze == "b"){
        cout<<"Poprawna odpowiedz wygrywasz 500 zl"<<endl;
        Sleep(5000);
    }
    else{
        cout<<"Niestety nie. Poprwna odpowiedzial byl Boleslaw Chrobry. Sproboj ponownie."<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Drugie pytanie brzmi: kiedy rozpetala sie druga wojna swiatowa?"<<endl;
    cout<<"a 1939      b 1940"<<endl;
    cout<<"c 1895      d 1919"<<endl;
    cin>>drugie;
    if(drugie== "a"){
        cout<<"Brawo kolejne pytanie juz za toba wygrywasz 1500zl"<<endl;
        Sleep(5000);
    }
    else{
        cout<<"Niestety nie. Poprawny rok to 1939. Sproboj ponownie."<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Twoje trzecie pytanie brzmi: Jaka jest stolica dominikany"<<endl;
    cout<<"a Praga            b Monte cristi"<<endl;
    cout<<"c Pont-au-prince   d Santo domingo"<<endl;
    cin>>trzecie;system("Pause");
    if(trzecie == "d"){
        cout<<"Brawo! trzecie pytanie juz za nami. Zgarniasz 5000zl!"<<endl;
        Sleep(5000);
    }

    else{
        cout<<"Niestety nie. Poprawna odpowiedz to Santo domingo.Sproboj ponownie"<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Twoje czwarte pytanie brzmi: ktore polskie miasto lezy jak najblizej poludnia"<<endl;
    cout<<"a Kutno        b Ostrzeszow"<<endl;
    cout<<"c Kwidzyn      d Radymno"<<endl;
    cin>>czwarte;
    if(czwarte == "c"){
        cout<<"Masz wielki mozg. Brawo juz masz 15 tysiecy zl!"<<endl;
        Sleep(5000);

    }
    else{
        cout<<"Niestety bledna odpowiedz ale zaszedles juz daleko."<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Twoje piate pytanie brzmi: Jakie miasto jest piate w rankingu ludnosci w Polsce."<<endl;
    cout<<"a Rzeszow       b Poznan"<<endl;
    cout<<"c Lodz          d gdansk"<<endl;
    cin>>piate;
    if(piate == "b"){
        cout<<"Masz wielka wiedze oby tak dalej! Wygrywasz 45 tysiecy zl!"<<endl;
        Sleep(5000);
    }
    else{
        cout<<"Niestety. pomyliles sie. sproboj ponownie."<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Twoje szoste pytanie brzmi: Ile kilometrow ma wisla"<<endl;
    cout<<"a 1074      b 994"<<endl;
    cout<<"c 1054      d 1047"<<endl;
    cin>>szoste;
    if(szoste == "d"){
        cout<<"Jestes super. wygrywasz 250 tysiecy zl"<<endl;
        Sleep(5000);
    }
    else{
        cout<<"Niestety pomyliles sie. ale nie martw sie zaszedles daleko"<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    system("cls");
    cout<<"---"<<endl;
    cout<<"|R|"<<endl;
    cout<<"---"<<endl;
    cout<<"Twoje siodme pytanie brzmi: Jaki szczyt z podanych jest najwyzszy"<<endl;
    cout<<"a Barania gora       b Grossglockner"<<endl;
    cout<<"c Wildspitze         d Rysy"<<endl;
    cin>>siodme;
    if(siodme == "b"){
        cout<<" Jestes extra! Brawo! masz 1 milion zl"<<endl;
        Sleep(5000);
    }
    else {
        cout<<"Zaszedles daleko ale poprawna odpowiedzal byl Grossglockner"<<"\a"<<endl;
        Sleep(5000);
        return 0;
    }
    }



    else if ((liczba > 20) && (liczba <= 40)){
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;   srand(time(NULL));
    liczba = rand()%100 + 1;
        cout<<"Twoje pierwsze pytanie brzmi: ktory klawisz bezposrednio wlacza menadzera zadan w komputerze?"<<endl;
        cout<<"a ctrl + alt + del           b ctrl + shift + esc"<<endl;
        cout<<"c ctrl + del                 d ctrl + tab + del  "<<endl;
        cin>>pierwsze1;
        if(pierwsze1 == "b"){
            cout<<"Brawo! Wygrywasz 500zl!"<<endl;
            Sleep(5000);
        }
        else {
            cout<<"Niestety pomyliles sie"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje drugie pytanie brzmi: Jaki jest najwiekszy samolot swiata?"<<endl;
        cout<<"a Airbus a 380         b An 225 mriya"<<endl;
        cout<<"c boeing 787           d boeing 747"<<endl;
        cin>>drugie1;
        if(drugie1 == "b"){
            cout<<"Brawo wygrywasz 1500 zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety. Pomyliles sie"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje trzecie pytanie brzmi: Kiedy zostala uchwalona konstytucja?"<<endl;
        cout<<"a 3 maja 1791       b 3 maja 1690"<<endl;
        cout<<"c 3 maja 1796       d 3 maja 1787"<<endl;
        cin>>trzecie1;
        if(trzecie1 == "a"){
            cout<<"Masz wielka wiedze. Otrzymujesz 5000zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Blad. poprawna odpowiedzial byl 3 maja 1791"<<"\a"<<endl;
            Sleep(5000);
            return 0;

        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje czwarte pytanie brzmi: Jak nazywa sie stolica meksyku?"<<endl;
        cout<<"a Panama       b Lizbona"<<endl;
        cout<<"c Meksyk       d Lima"<<endl;
        cin>>czwarte1;
        if(czwarte1 == "c"){
            cout<<"Super! wygrywasz 15 tysiecy zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety. pomyliles sie"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piate pytanie brzmi: Na co trafila przyslowiowa kosa?"<<endl;
        cout<<"a na kamien        b na kose"<<endl;
        cout<<"c na siekiere      d na droge"<<endl;
        cin>>piate1;
        if(piate1 == "a"){
            cout<<" Brawo zgarniasz 45 tysiecy zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety pomyliles sie. poprwna odpowiedial byl kamien"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje szoste pytanie brzmi: Jaka firma samochodow sprzedala najwiecej egzemplazy w 2018roku?"<<endl;
        cout<<"a Ford       b Nissan"<<endl;
        cout<<"c Honda      d volkswagen"<<endl;
        cin>>szoste1;
        if(szoste1 == "d"){
            cout<<"Jestes swietny! zgarniasz 250 tysiecy zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Pomyliles sie poprawna odpowiedz to volkswagen"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje siodme pytanie brzmi: co jest tradycyjnym srodkiem transportu Amiszow?"<<endl;
        cout<<"a zapszeg     b skuter sniezny"<<endl;
        cout<<"c konie       d samochody"<<endl;
        cin>>siodme1;
        if(siodme1 == "a"){
            cout<<"Brawo! wygrywasz milion!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety. pomyliles sie. poprawna odpowiedzial byl zapszeg"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
    }





    else if((liczba >40) && (liczba <= 60)){
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje pierwsze pytanie brzmi: ktorego skrotu uzyjesz by zamknac wlaczona aplikacje?"<<endl;
        cout<<"a ctrl + z       b alt + f6"<<endl;
        cout<<"c alt + f4       d ctrl + c"<<endl;
        cin>>pierwsze2;
        if(pierwsze2 == "c"){
            cout<<"Brawo! otrzymujesz 500zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Blad. Poprawna odpowiedzial jest alt + f4"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje drugie pytanie brzmi: Jonasz Kofta spiewal abysmy pamietali o"<<endl;
        cout<<"a ogrodach       b pomnikach"<<endl;
        cout<<"c kwiatach       d najblizszych"<<endl;
        cin>>drugie2;
        if(drugie2 == "a"){
            cout<<"Brawo! masz 1500zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety. Blad. Poprawna odpowiedzial sa ogrody"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje trzeie pytanie brzmi: Choc pomaluj moj swiat na:"<<endl;
        cout<<" a czerwono                b kolorowo"<<endl;
        cout<<" c zolto i na niebiesko    d zielono i zolto"<<endl;
        cin>>trzecie2;
        if(trzecie2 == "c"){
            cout<<"Brawo! otrzymujesz 5000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Pomyliles sie poprawna odpowiedz to zolto i niebieko"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"twoje czwarte pytanie brzmi: Jak mial na imie kot z pewnej bajki ktory chcial dopasc myszke?"<<endl;
        cout<<"a Jerry       b Tom"<<endl;
        cout<<"c Hilary      d Jon"<<endl;
        cin>>czwarte2;
        if(czwarte2 == "b"){
            cout<<"Poprawna odpowiedz. Zgarniasz 15tys zl"<<endl;
            Sleep(5000);

        }
        else{
            cout<<"Poprawna odpowiedzial byl Tom"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piate pytanie brzmi: Jak sie nazywa ukochana Schreka?"<<endl;
        cout<<"a Filemona     b Falomona"<<endl;
        cout<<"c Fiona        d Fiana"<<endl;
        cin>>piate2;
        if(piate2 == "c"){
            cout<<"Poprawna odpowiedz. Masz juz 45tysiecy zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Poprawna odpowiedzial byla Fiona"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje szoste pytanie brzmi: Ktora marka telefonow sprzedala ich najwiecej w 2019?"<<endl;
        cout<<"a Samsung      b Huawei"<<endl;
        cout<<"c Xiaomi       d Iphone"<<endl;
        cin>>szoste2;
        if(szoste2 == "a"){
            cout<<"Brawo zgarniasz 250 tysiecy zl"<<endl;
            Sleep(5000);
        }
         else{
            cout<<"Pomyliles sie. Poprawna odpowiezial byl Samsung"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje siodme pytanie brzmi: W ktorym roku Polska weszla do uni Europejskiej?"<<endl;
        cout<<" a 25 maja 2001 roku        b 16 kwietnia 2003 roku"<<endl;
        cout<<" c 17 marca 2000 roku       d 1 maja 2004 roku"<<endl;
        cin>>siodme2;
        if(siodme2 == "d"){
            cout<<"Wygrywasz milion zlotych!"<<endl;
            Sleep(5000);

        }
        else {
            cout<<"Pomyliles sie na ostanim pytaniu. poprawna odpowiedzal byl 1 maja 2004 roku"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }


    }




    else if((liczba>60) && (liczba <=80)){

        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piersze pytanie brzmi: ktory z wymienionych produktow moze zjesc weganin?"<<endl;
        cout<<" a miod      b jablko"<<endl;
        cout<<" c twarog    d jajko"<<endl;
        cin>>pierwsze3;
        if(pierwsze3 == "b"){
            cout<<"Brawo pierwsze pytanie juz za toba. Masz 500zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo jablko"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje drugie pytanie brzmi: Ryszard Riedel spiewal w zespole:?"<<endl;
        cout<<" a marmolady      b Powidla"<<endl;
        cout<<" c dzem           d konfitury"<<endl;
        cin>>drugie3;
        if(drugie3 == "c"){
            cout<<"Brawo drugie pytanie juz za toba. Masz 1500zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl dzem"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje trzecie pytanie brzmi: Najwiekszy Polski ptak drapiezny to:?"<<endl;
        cout<<" a bielik        b sokol"<<endl;
        cout<<" c sep           d myszolow"<<endl;
        cin>>trzecie3;
        if(trzecie3 == "a"){
            cout<<"Brawo trzecie pytanie juz za toba. Masz 5000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl bielik"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje czwarte pytanie brzmi:ktora z tych Polskich elektrowni nie jest wodna?"<<endl;
        cout<<" a Roznow        b Solina"<<endl;
        cout<<" c Belchatow     d Wloclawek"<<endl;
        cin>>czwarte3;
        if(czwarte3 == "c"){
            cout<<"Brawo czwarte pytanie juz za toba. Masz 15000zl!"<<endl;
            Sleep(5000);ile_prob++;
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl Belchatow"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piate pytanie brzmi: Jaki jest symbol chemiczny Potasu?"<<endl;
        cout<<" a P          b Po"<<endl;
        cout<<" c K          d S"<<endl;
        cin>>piate3;
        if(piate3 == "c"){
            cout<<"Brawo piate pytanie juz za toba. Masz 45000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byla litera K"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje szoste pytanie brzmi: Jaka litera oznaczone sa drogi ekspresowe w Polsce?"<<endl;
        cout<<" a P          b A"<<endl;
        cout<<" c K          d S"<<endl;
        cin>>szoste3;
        if(szoste3 == "d"){
            cout<<"Brawo szoste pytanie juz za toba. Masz 250000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byla litera S"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje siodme pytanie brzmi: W ktorym z tych miast metro powstalo najwczesniej?"<<endl;
        cout<<" a w Londynie          b w Moskwie"<<endl;
        cout<<" c w Tokio             d w Madrycie"<<endl;
        cin>>siodme3;
        if(siodme3 == "a"){
            cout<<"Brawo siodme pytanie juz za toba. Masz milion!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl Londyn"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }



    }






    else if((liczba>80) && (liczba<=100)) {

        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje pierwsze pytanie brzmi: Czym jest wejscie aux?"<<endl;
        cout<<" a wejsciem sluchawkowym              b sluzy do podlaczania myszek"<<endl;
        cout<<" c wejsciem do ladowania laptopow     d wejsciem telewizyjnym"<<endl;
        cin>>pierwsze4;
        if(pierwsze4 == "a"){
            cout<<"Brawo pierwsze pytanie juz za toba. Masz 500zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo wejscie sluchawkowe"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje drugie pytanie brzmi: Niezapominajka jest koloru:?"<<endl;
        cout<<" a rozowego              b bialego"<<endl;
        cout<<" c czerwonego            d niebieskiego"<<endl;
        cin>>drugie4;
        if(drugie4 == "d"){
            cout<<"Brawo drugie pytanie juz za toba. Masz 1500zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl kolor niebieski."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje trzecie pytanie brzmi: Kim byl Louis Armstrong:?"<<endl;
        cout<<" a konstruktorem             b astronauta"<<endl;
        cout<<" c trebaczem jazzowym        d pisarzem"<<endl;
        cin>>trzecie4;
        if(trzecie4 == "c"){
            cout<<"Brawo trzecie pytanie juz za toba. Masz 5000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl trebacz jazzowy."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje czwarte pytanie brzmi: Kto porwal piekna Helene w 'lliadzie' Homera?"<<endl;
        cout<<" a Achilles              b Hektor"<<endl;
        cout<<" c Parys                 d Agamemnon"<<endl;
        cin>>czwarte4;
        if(czwarte4 == "c"){
            cout<<"Brawo czwarte pytanie juz za toba. Masz 15000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byl Parys."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piate pytanie brzmi: Z jakiego kraju pochodzi Pele?"<<endl;
        cout<<" a z Chin              b z Brazylli"<<endl;
        cout<<" c z Holandi           d z Argentyny"<<endl;
        cin>>piate4;
        if(piate4 == "b"){
            cout<<"Brawo piate pytanie juz za toba. Masz 45000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byla Brazylia."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje szoste pytanie brzmi: Jaka moc daje pierscien wladzy wystepujacy w trylogi Wladca Pierscieni i Hobbit?"<<endl;
        cout<<" a Niewidzialnosc              b Nadlucka szybkosc"<<endl;
        cout<<" c Nadludzka sile              d Latanie"<<endl;
        cin>>szoste4;
        if(szoste4 == "a"){
            cout<<"Brawo szoste pytanie juz za toba. Masz 250000zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byla Niewidzialnosc."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }
        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje siodme pytanie brzmi: co nie jest ogrodzeniem?"<<endl;
        cout<<" a Palisada              b Zarzuela"<<endl;
        cout<<" c Ostrokol              d Zeriba"<<endl;
        cin>>siodme4;
        if(siodme4 == "b"){
            cout<<"Brawo siodme pytanie juz za toba. Masz Milion zl!"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byla Zarzuela."<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }






        }

    else if((liczba>100) && (liczba<120)){


        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje pierwsze pytanie brzmi: ile swiatow ma minecraft?"<<endl;
        cout<<" a 1             b 2"<<endl;
        cout<<" c 3             d 4"<<endl;
        cin>>pierwsze5;
        if(pierwsze5 == "c"){
            cout<<"Brawo pierwsze pytanie juz za toba. Masz 500zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo 3"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }

                system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje drugie pytanie brzmi: Jak Poznaniacy mowia na ziemniaki?"<<endl;
        cout<<" a Kartofle            b Pyry"<<endl;
        cout<<" c Ziemniaki           d Gajdy"<<endl;
        cin>>drugie5;
        if(drugie5 == "b"){
            cout<<"Brawo drugie pytanie juz za toba. Masz 1500zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial byly pyry"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }

        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje trzecie pytanie brzmi: Ile metrow ma Palac kultury?"<<endl;
        cout<<" a 237            b 245"<<endl;
        cout<<" c 198            d 315"<<endl;
        cin>>trzecie5;
        if(trzecie5 == "a"){
            cout<<"Brawo trzecie pytanie juz za toba. Masz 5000zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo 237 metrow"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }

        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje czwarte pytanie brzmi: Ile jest krai w Europie?"<<endl;
        cout<<" a 46           b 54"<<endl;
        cout<<" c 37           d 27"<<endl;
        cin>>czwarte5;
        if(czwarte5 == "a"){
            cout<<"Brawo czwarte pytanie juz za toba. Masz 15000zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo 46"<<"\a"<<endl;
            Sleep(5000);
            return 0;
        }

        system("cls");
        cout<<"---"<<endl;
        cout<<"|R|"<<endl;
        cout<<"---"<<endl;
        cout<<"Twoje piate pytanie brzmi: Ile jest krai na swiecie?"<<endl;
        cout<<" a 198          b 224"<<endl;
        cout<<" c 143          d 194"<<endl;
        cin>>piate5;
        if(piate5 == "d"){
            cout<<"Brawo piate pytanie juz za toba. Masz 15000zl"<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Niestety blad poprawna odpowiedzial bylo 194"<<"\a"<<endl;
            Sleep(5000);
            return 0;

    }


}
}
else if (wyborglowny=="xd"){
    cout<<"XD Haha ale smieszne"<<endl;
    system("Pause");
}
else if(wyborglowny=="hej"){
    cout<<"Czesc dawno sie nie widzielismy! Tesknilem za toba!"<<endl;
    system("Pause");
}
else if(wyborglowny=="siemka"){
    cout<<"Witaj przyjacielu!"<<endl;
    system("Pause");
}
else if(wyborglowny=="siema"){
    cout<<"Czesc jak sie czujesz"<<endl;
    system("Pause");
}
else if(wyborglowny=="jak sie czujesz"){
    cout<<"Dobrze a ty?"<<endl;
    int a;
    cin>>a;
    cout<<"O to fajnie :) xd"<<endl;
    system("Pause");
    system("cls");
}
else if((wyborglowny=="glupi jestes")||(wyborglowny=="nie lubie cie")){
    srand(time(NULL));
    liczbalosowa = rand()%10 + 1;
    if(liczbalosowa == 1)
    {
        cout<<"Niewiem co powiedziec Xd"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==2){
        cout<<"Nie mam pomyslu jak ci pomoc lol"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==3){
        cout<<"nie zostalem zaprogramowany na taki warunek xd"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==4){
        cout<<"Tomasz problem xd"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==5){
        cout<<"beka z ciebie typie bo glupoty gadasz lol"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==6){
        cout<<"Nie ma takiej komendy"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==7){
        cout<<"☻♥♦♣♠ Xd"<<endl;
        system("Pause");
    }
    else if(liczbalosowa==8){
        cout<<"crash!!!"<<endl;

        Sleep(1000);
        while (1){
            Sleep(20);
            cout<<"100011101001010001010101010";
        }
    }
    else if(liczbalosowa==9){
        cout<<"Tomaszproblem!!!"<<endl;
        Sleep(1000);
        while (1){
            Sleep(30);
            cout<<"Tomaszproblem";
        }
    }
    else if(liczbalosowa==10){
        cout<<"XD bzdury gadasz xd"<<endl;
        system("Pause");
    }


}
else if(wyborglowny=="losuj liczbe"){
    while(1){
    system("cls");
    cout<<"do ilu losowac?"<<endl;
    cin>>do_losuj;
    system("cls");
    srand(time(NULL));
    liczbalosowa = rand()%do_losuj + 1;
    cout<<"Wylosowany numer to: "<<liczbalosowa<<endl;
    system("Pause");
    }
}
else if(wyborglowny=="zgadywanka"){
    system("cls");
    cout<<"witaj. Zagrajmy w zgadywanke"<<endl;
    cout<<"Podaj ile chcesz miec prob na wygrana"<<endl;
    cin>>poziomtrudnosci;
    Sleep(2000);
    system("cls");
    cout<<"Pomyslalem liczbe w zakresie od 1 do 100... "<<endl;
    Sleep(3000);
    srand(time(NULL));
    jakasliczba = rand()%100 + 1;
    ile_prob = 0;
    while(strzal != jakasliczba)
    {

        if(ile_prob == poziomtrudnosci)
        {
            cout<<"Przegrales. Minelo "<<poziomtrudnosci<<" prob. Sproboj ponownie"<<endl;
            Beep(1567, 200);
            Sleep(5000);
            break;
        }
        cout<<"Zgadnij jaka to:"<<endl;
        cin>>strzal;
        if(strzal >= 101)
        {
            cout<<"blad"<<"\a"<<endl;
            Sleep(2000);
            continue;
        }
        if(strzal == jakasliczba)
        {

            cout<<"Brawo zgadles! Zajelo ci to "<<ile_prob<<" Prob"<< endl;
            Beep(1567, 200);
            Sleep(5000);
            system("cls");
            cout<<"Dziekuje za gre"<<endl;
            Sleep(3000);
            system("cls");
            break;
        }


        else if(strzal < jakasliczba)
        {
        cout<<"Za malo"<<"\a"<<endl;
        Sleep(1000);
        system("cls");
        ile_prob++;
        continue;
        }



        else if (strzal > jakasliczba)
        {
        cout<<"Za duzo"<<"\a"<<endl;
        Sleep(1000);
        system("cls");
        ile_prob++;
        continue;
        }

break;

    }
}
else if(wyborglowny=="zawolaj pupila"){
    while(1){
    Beep(30000, 100);
    a=a+a;

}
}
}
}
else{
    cout<<"login lub haslo niepoprawne :("<<"\a"<<endl;
}
}
