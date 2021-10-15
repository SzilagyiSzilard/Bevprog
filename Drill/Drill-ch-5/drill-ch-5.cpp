 #include "std_lib_facilities.h"
int main()
try { 
	//1. Cout << "Success!\n";	//Cout nagy betuvel nem fogadja el ...
	//cout << "Success!\n";
	
	//2. cout << "Success!\n;	//hiányzik a második a " ...
	//cout << "Success!\n";

	//3. cout << "Success" << !\n"	// hiányzik a " !\n elött és a ; a végén...
	//cout << "Success" << "!\n";
	
	//4. cout << success << '\n';		//a succes nincs " " jelek közt...
	//cout << "success" << '\n';

	//5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; 	//nem fér össze a string anz int tipusus vektorral...
	//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

	//6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";		//vektor meghatározásán kívül mindenhol [] kell nem (), az if feltétele hamis mivel v[5]=7  feltétel meg az hogy v[5]!=7...
	//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

	//7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";	 	// a "cond az if-ben nincs meghatározva...
	//if (true) cout << "Success!\n"; else cout << "Fail!\n";

	//8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; 		//ha c false-ra van állitva... 
	//bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";

	//9. string s = "ape"; bool c = "fool"<s; if (!c) cout << "Success!\n"; 	//a bool boo ként van irva , a "<s" miatt a c false...
	//string s = "ape"; bool c = "fool"<s; if (!c) cout << "Success!\n"; 
	
	//10. string s = "ape"; if (s=="fool") cout << "Success!\n"; 	//s meg van határozva mint "ape" nem lehet true s=="fool"-ra...
	//string s = "ape"; if (s!="fool") cout << "Success!\n";

	//11. string s = "ape"; if (s=="fool") cout < "Success!\n"; 		// --||-- ugyan az mint a 10. + itt hiányzik a '<' a cout után...
	//string s = "ape"; if (s!="fool") cout << "Success!\n";
	
	//12. string s = "ape"; if (s+"fool") cout < "Success!\n"; 		//cout után '<' hiányzik, a string tipusu s-el nem müködik...
	//bool s = "ape"; if (s+"fool") cout << "Success!\n";

	//13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";  //a for-ba ha 0<v.size() miatt végtelen ciklus... 
	//vector<char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n";
	
	//14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";	//hiba nincs , de a for és vektor hasztalan a for utáni ; miatt...
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

	//15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];		//az s nem 6 betü hanem 10 , így ez a for nem irja ki teljesen...
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

	//16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";		//if ben helyesen nincs "then" a feltétel után... 
	//if (true) cout << "Success!\n"; else cout << "Fail!\n";

	//17. int x = 2000; char c = x; if (c==2) cout << "Success!\n";	//a char 1 karaktert képes kezelni amit ' ' közt kell megadni int formájút nem ...
	//int x = 2000; int c = x; if (c==2000) cout << "Success!\n";

	//18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; 	//idk , nincs benne hiba ...
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

	//19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";	//hiányzik <type> rész 
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

	//20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";	//while-ba ha j++ van akkor az i nem változik , szóval i sose lesz nagyobb 10 nél => végtelen ciklus...
	//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";

	//21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";	//x-2-nél a'–' egy különleges karakter nem '-' x-2=0 , 0 nem lehet osztani, elöbb végzi a müveletet és mivel az 5 és az x is int tipusnak megfelel , az eredmény is int az osztás után , szóval 5 helyett 5.0 kell a helyes eredményhez.. vagy doublebe beolvasni az x=et.
	//int x = 2; double d = 5.0/x+2; if (d==2*x+0.5) cout << "Success!\n";

	//22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];		//string után nem kell <type> mint a vektornál...
	//string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];

	//23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";		//j nincs meghatározva, whileba j++ al végtelen ciklus jön létre...
	//int i=0,j=1; while (i<10) ++i; if (j<i) cout << "Success!\n";

	//24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
	//int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
	
	//25. cin << "Success!\n"; //cin beolvas nem kiir... 
        //cout << "Success!\n";


     keep_window_open();
          return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}
