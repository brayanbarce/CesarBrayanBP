#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>	/*STARTUPINFO, PROCESS_INFORMATION*/
#include "Pol_Directory.h"
#include "String_Tokenizer.h"
#include "Polinomio.h"
#define PRINTING_DEBUG
#define MAXSIZE	1000
int last_backslash(TCHAR*);
void get_substr(TCHAR* cmdL,int intCantidad,char charBuf[MAXSIZE]);
#define TEST_SHELL
#ifdef TEST_SHELL
	#define COMANDO_0

class comando0{

////Prototipos de funciones
public:

void proccess_operation(Pol_Directory&,string&,unsigned char,string&);
void do_suma(Pol_Directory&,string&,string&);
void do_resta(Pol_Directory&,string&,string&);
void do_mult(Pol_Directory&,string&,string&);
void do_save(Pol_Directory&);
//
//
////	cout<<"Dummy HOLA MUNDO desde "<<argv[0]<<"!!!"<<endl;
////	cout<<"Dummy HOLA MUNDO!!!"<<endl;
//
};

int main(){
  //Abrir funci'/on principal, declarar variables y crear el objeto archivo
    
    		  
  string var1, var2;
  int op, op2, op3;
  
  cout << "\t\t\tOPERACIONES CON POLINOMIOS\n\n";
  cout << "Elija la operacion a realizar:\n\n";
  	cout << "1. Suma\n2. Resta\n3. Multiplicacion\n\n";
  	cin >> op3;
  
    		switch(op3){
		case 1:{
				fstream archivo("workspace.txt");
    do{
  	system("cls");
  	cout << "\t\t\t\tSUMA\n\n";
  	cout << "Elija una opcion para continuar presionando 1 o 2 y despues enter:\n\n";
  	cout << "1. Nuevo registro\n2. Salir\n";
  	cin >> op;
  	cin.ignore();
  	
  	if(op == 1)
  	{
  		system("cls");	
  		if(!archivo.is_open())
  		{
  			archivo.open("workspace.txt", ios::out);
		  }
		  cout << "Ingrese los polinomios escribiendo todos los coeficientes en forma de fraccion ´/´ y separados por ´:´\n";
		  cout << "Ejemplo: x1/x2:y1/y2:z1/z3\n";
		  cout << "Escriba primero el polinomio de menor grado\n\n";
		  cout << "Variable 1: ";
		  getline(cin, var1);
		  cout << "Variable 2: ";
		  getline(cin, var2);
		  system("cls");
		  cout << "\nElija la siguiente opcion a realizar presionando 1 o 2 segun sea el caso:\n\n";
		  cout << "1. Guardar registro\n2. Regresar\n";
		  cin >> op2;
		  
		  if(op2 == 1)
		  {
		  	archivo << "var1\n" << var1 << endl;
		  	archivo << "var2\n" << var2 << endl;
		  	
		  	system("cls");
		  	
		  	cout << "Registro guardado con exito...\n";
		  	system("pause");
		  	   	comando0 s;
   	   char workspace[]="workspace.txt";
   	     string source_name=string(workspace);
  Pol_Directory the_directory;
  the_directory.load_data(source_name);
  
  s.proccess_operation(the_directory, var1,'+',var2);
  system("pause");
		  	system("cls");
		  }
		  archivo.close();
	  }
  }while(op !=2);

			break;
		}
		case 2:{
				fstream archivo("workspace.txt");
    do{
  	system("cls");
  	cout << "\t\t\t\tRESTA\n\n";
  	cout << "Elija una opcion para continuar presionando 1 o 2 y despues enter:\n\n";
  	cout << "1. Nuevo registro\n2. Salir\n";
  	cin >> op;
  	cin.ignore();
  	
  	if(op == 1)
  	{
  		system("cls");	
  		if(!archivo.is_open())
  		{
  			archivo.open("workspace.txt", ios::out);
		  }
		  cout << "Ingrese los polinomios escribiendo todos los coeficientes en forma de fraccion ´/´ y separados por ´:´\n";
		  cout << "Ejemplo: x1/x2:y1/y2:z1/z3\n";
		  cout << "Los coeficientes deben ser del mismo grado\n\n";
		  cout << "Variable 1: ";
		  getline(cin, var1);
		  cout << "Variable 2: ";
		  getline(cin, var2);
		  system("cls");
		  cout << "\nElija la siguiente opcion a realizar presionando 1 o 2 segun sea el caso:\n\n";
		  cout << "1. Guardar registro\n2. Regresar\n";
		  cin >> op2;
		  
		  if(op2 == 1)
		  {
		  	archivo << "var1\n" << var1 << endl;
		  	archivo << "var2\n" << var2 << endl;
		  	
		  	system("cls");
		  	
		  	cout << "Registro guardado con exito...\n";
		  	system("pause");
   	comando0 s;
   	   char workspace[]="workspace.txt";
   	     string source_name=string(workspace);
  Pol_Directory the_directory;
  the_directory.load_data(source_name);
  
  s.proccess_operation(the_directory, var1,'-',var2);
  system("pause");
		  	system("cls");
		  }
		  archivo.close();
	  }
  }while(op !=2);

			break;
		}
				case 3:{
				fstream archivo("workspace.txt");
    do{
  	system("cls");
  	cout << "\t\t\t\tMULTIPLICACION\n\n";
  	cout << "Elija una opcion para continuar presionando 1 o 2 y despues enter:\n\n";
  	cout << "1. Nuevo registro\n2. Salir\n";
  	cin >> op;
  	cin.ignore();
  	
  	if(op == 1)
  	{
  		system("cls");	
  		if(!archivo.is_open())
  		{
  			archivo.open("workspace.txt", ios::out);
		  }
		  cout << "Ingrese los polinomios escribiendo todos los coeficientes en forma de fraccion ´/´ y separados por ´:´\n";
		  cout << "Ejemplo: x1/x2:y1/y2:z1/z3\n\n";
		  cout << "Escriba primero el polinomio de menor grado\n\n";
		  cout << "Variable 1: ";
		  getline(cin, var1);
		  cout << "Variable 2: ";
		  getline(cin, var2);
		  system("cls");
		  cout << "\nElija la siguiente opcion a realizar presionando 1 o 2 segun sea el caso:\n\n";
		  cout << "1. Guardar registro\n2. Regresar\n";
		  cin >> op2;
		  
		  if(op2 == 1)
		  {
		  	archivo << "var1\n" << var1 << endl;
		  	archivo << "var2\n" << var2 << endl;
		  	
		  	system("cls");
		  	
		  	cout << "Registro guardado con exito...\n";
		  	system("pause");
   	comando0 s;
   	   char workspace[]="workspace.txt";
   	     string source_name=string(workspace);
  Pol_Directory the_directory;
  the_directory.load_data(source_name);
  
  s.proccess_operation(the_directory, var1,'*',var2);
  system("pause");
		  	system("cls");
		  }
		  archivo.close();
	  }
  }while(op !=2);

			break;
		}
	}
	

    
 
  //TCHAR*              cmdline;
  //STARTUPINFO         startup_info;
 /// PROCESS_INFORMATION process_info;

  //char charBuffer[MAXSIZE];
  //char exepath[MAXSIZE];
  //char str[MAXSIZE];

 // cmdline = GetCommandLine();	/*obtiene la orden o comando equivalente de CLI*/
  								/*CLI: Command Line Interface*/
//  cout<<"IMPRIMIR cmdline, ... REVISAR"<<endl;/*OK Si se obtiene el comando con*/
                                              /*el que se est\'a ejecutando este*/
                                              /*programa, Ahora, ver para que se usa*/
//  cout<<cmdline<<endl;

 // int intCantidad=last_backslash(cmdline);
 // printf("intCantidad=%i\n",intCantidad);
 // get_substr(cmdline,intCantidad,charBuffer);
//  printf("charBuffer:\n%s\n",charBuffer);
 // system("PAUSE");
 

 
//  sprintf(exepath,"%s%s",charBuffer,"comando0.exe");
//  char dummy[]="dummy";
//  sprintf(str,"%s ./%s %s %s %s %s","comando0.exe",
//  	  workspace,"var1","+","var2",dummy);
// printf("IMPRIMIR COMANDO A EJECUTAR PASANDO ARGUMENTOS:\n");	
//  printf("%s\n",str);
//  fill_n( (char*)&process_info, sizeof( PROCESS_INFORMATION ), 0 );
//  fill_n( (char*)&startup_info, sizeof( STARTUPINFO ),         0 );
//  startup_info.cb = sizeof( STARTUPINFO );
//  if (!CreateProcess(
//         exepath,
//         str,
//         NULL,
//         NULL,
//         TRUE,
//         NORMAL_PRIORITY_CLASS,
//         NULL,
//         NULL,
//         &startup_info,
//         &process_info
//         )){
//   	return 2;
//  }
// CloseHandle( process_info.hThread );
// // wait for the child program to terminate
//  WaitForSingleObject( process_info.hProcess, INFINITE );
//  cout<<"TERMINO EL PROCESO QUE USA comando0.exe"<<endl;
//  system("PAUSE");

  //Leer el resultado

 /* string coeffs0=the_directory.lookup_entry("ans");
  String_Tokenizer tokenizer0(coeffs0,":");
  vector<string> arr0;
  while(tokenizer0.has_more_tokens()){
    arr0.push_back(tokenizer0.next_token());
  }//end while()
  cout<<"arr0:"<<endl;
  for(int i=0;i<arr0.size();i++){
    cout<<"arr0[i] = "<<arr0[i]<<endl;
  }
  system("PAUSE");
  int num,den;	//numerador,denominador//
  Rac *RacPt0=new Rac[arr0.size()];
  string stringIntNum,stringIntDen;
  String_Tokenizer tokenizerForRac;
  for(int i=0;i<arr0.size();i++){
	tokenizerForRac=String_Tokenizer(arr0[i],"/");
		
	stringIntNum=tokenizerForRac.next_token();
	num=atoi(stringIntNum.c_str());
		
	stringIntDen=tokenizerForRac.next_token();
	den=atoi(stringIntDen.c_str());
		
	*(RacPt0+i)=Rac(num,den);
  }
  Polinomio PolResult0(arr0.size()-1,RacPt0);
  cout<<PolResult0<<endl;
  cout<<PolResult0.string_show()<<endl;
  */  
  system("PAUSE");
  return 0;
}//end main()
#endif //testshell
/**
 * Devuelve la cantidad de car\'acteres que hay que usar de cmdL 
 * para incluir hasta el \'ultimo backslash (es decir, desde el 
 * car\'acter 0 hasta el car\'acter que devuelve esta funci\'on)
 */
//int last_backslash(TCHAR* cmdL){
//	int r=0,i=0,intI=0;
//	while('\0'!=cmdL[i]){
//		if('\\'==cmdL[i]){
//			r++;
//		}
//		i++;
//	}/*Now r is the amount of backslashes*/
//	i=0;
//	while((intI<r)&&('\0'!=cmdL[i])){
//		if('\\'==cmdL[i]){
//			intI++;
//		}
//		i++;
//	}
//	return i;
//}
//
//void get_substr(TCHAR* cmdL,int intCantidad,char charBuf[MAXSIZE]){
//	int i=0;
//	while(i<intCantidad){
//		charBuf[i]=cmdL[i];
//		i++;
//	}
//	charBuf[i]='\0';
//}

void comando0::do_suma(Pol_Directory& the_directory,string& op1, string& op2){
	string operando1=op1;
	string operando2=op2;
#ifdef PRINTING_DEBUG
	cout<<"operando1="<<operando1<<endl;
	cout<<"operando2="<<operando2<<endl;
#endif
//	string coeffs1=the_directory.lookup_entry(operando1);
//	string coeffs2=the_directory.lookup_entry(operando2);
//#ifdef PRINTING_DEBUG
//	cout<<"coeffs1="<<coeffs1<<endl;
//	cout<<"coeffs2="<<coeffs2<<endl;
//#endif
	String_Tokenizer tokenizer1(operando1,":");
	String_Tokenizer tokenizer2(operando2,":");
	vector<string> arr1;
	vector<string> arr2;
	while(tokenizer1.has_more_tokens()){
        arr1.push_back(tokenizer1.next_token());
    }//end while()
	while(tokenizer2.has_more_tokens()){
        arr2.push_back(tokenizer2.next_token());
    }//end while()
#ifdef PRINTING_DEBUG
    for(int i=0;i<arr1.size();i++){
    	cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<arr2.size();i++){
    	cout<<arr2[i]<<" ";
	}
	cout<<endl;
#endif
	int num,den;	/*numerador,denominador*/
	Rac *RacPt1=new Rac[arr1.size()],*RacPt2=new Rac[arr2.size()];
	string stringIntNum,stringIntDen;
	String_Tokenizer tokenizerForRac;
	for(int i=0;i<arr1.size();i++){
		tokenizerForRac=String_Tokenizer(arr1[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt1+i)=Rac(num,den);
	}
	Polinomio PolOp1(arr1.size()-1,RacPt1);
//	RacPt=new Rac[arr2.size()];
	for(int i=0;i<arr2.size();i++){
		tokenizerForRac=String_Tokenizer(arr2[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt2+i)=Rac(num,den);
	}
	Polinomio PolOp2(arr2.size()-1,RacPt2);
	Polinomio PolResult=PolOp1+PolOp2;
//Polinomio PolResult=operator+(PolOp1&);
	string resultado=PolResult.string_show();
#ifdef PRINTING_DEBUG	
	cout<<PolOp1<<endl;
	cout<<PolOp2<<endl;
	cout<<PolResult<<endl;
	cout<<resultado<<endl;
#endif
	the_directory.add_or_change_entry("ans",resultado);	
}

void comando0::do_resta(Pol_Directory& the_directory,string& op1, string& op2){
	string operando1=op1;
	string operando2=op2;
#ifdef PRINTING_DEBUG
	cout<<"operando1="<<operando1<<endl;
	cout<<"operando2="<<operando2<<endl;
#endif
//	string coeffs1=the_directory.lookup_entry(operando1);
//	string coeffs2=the_directory.lookup_entry(operando2);
//#ifdef PRINTING_DEBUG
//	cout<<"coeffs1="<<coeffs1<<endl;
//	cout<<"coeffs2="<<coeffs2<<endl;
//#endif
	String_Tokenizer tokenizer1(operando1,":");
	String_Tokenizer tokenizer2(operando2,":");
	vector<string> arr1;
	vector<string> arr2;
	while(tokenizer1.has_more_tokens()){
        arr1.push_back(tokenizer1.next_token());
    }//end while()
	while(tokenizer2.has_more_tokens()){
        arr2.push_back(tokenizer2.next_token());
    }//end while()
#ifdef PRINTING_DEBUG
    for(int i=0;i<arr1.size();i++){
    	cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<arr2.size();i++){
    	cout<<arr2[i]<<" ";
	}
	cout<<endl;
#endif
	int num,den;	/*numerador,denominador*/
	Rac *RacPt1=new Rac[arr1.size()],*RacPt2=new Rac[arr2.size()];
	string stringIntNum,stringIntDen;
	String_Tokenizer tokenizerForRac;
	for(int i=0;i<arr1.size();i++){
		tokenizerForRac=String_Tokenizer(arr1[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt1+i)=Rac(num,den);
	}
	Polinomio PolOp1(arr1.size()-1,RacPt1);
//	RacPt=new Rac[arr2.size()];
	for(int i=0;i<arr2.size();i++){
		tokenizerForRac=String_Tokenizer(arr2[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt2+i)=Rac(num,den);
	}
	Polinomio PolOp2(arr2.size()-1,RacPt2);
	Polinomio PolResult=PolOp1-PolOp2;
//Polinomio PolResult=operator+(PolOp1&);
	string resultado=PolResult.string_show();
#ifdef PRINTING_DEBUG	
	cout<<PolOp1<<endl;
	cout<<PolOp2<<endl;
	cout<<PolResult<<endl;
	cout<<resultado<<endl;
#endif
	the_directory.add_or_change_entry("ans",resultado);	
}

void comando0::do_mult(Pol_Directory& the_directory,string& op1, string& op2){
	string operando1=op1;
	string operando2=op2;
#ifdef PRINTING_DEBUG
	cout<<"operando1="<<operando1<<endl;
	cout<<"operando2="<<operando2<<endl;
#endif
//	string coeffs1=the_directory.lookup_entry(operando1);
//	string coeffs2=the_directory.lookup_entry(operando2);
//#ifdef PRINTING_DEBUG
//	cout<<"coeffs1="<<coeffs1<<endl;
//	cout<<"coeffs2="<<coeffs2<<endl;
//#endif
	String_Tokenizer tokenizer1(operando1,":");
	String_Tokenizer tokenizer2(operando2,":");
	vector<string> arr1;
	vector<string> arr2;
	while(tokenizer1.has_more_tokens()){
        arr1.push_back(tokenizer1.next_token());
    }//end while()
	while(tokenizer2.has_more_tokens()){
        arr2.push_back(tokenizer2.next_token());
    }//end while()
#ifdef PRINTING_DEBUG
    for(int i=0;i<arr1.size();i++){
    	cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<arr2.size();i++){
    	cout<<arr2[i]<<" ";
	}
	cout<<endl;
#endif
	int num,den;	/*numerador,denominador*/
	Rac *RacPt1=new Rac[arr1.size()],*RacPt2=new Rac[arr2.size()];
	string stringIntNum,stringIntDen;
	String_Tokenizer tokenizerForRac;
	for(int i=0;i<arr1.size();i++){
		tokenizerForRac=String_Tokenizer(arr1[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt1+i)=Rac(num,den);
	}
	Polinomio PolOp1(arr1.size()-1,RacPt1);
//	RacPt=new Rac[arr2.size()];
	for(int i=0;i<arr2.size();i++){
		tokenizerForRac=String_Tokenizer(arr2[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt2+i)=Rac(num,den);
	}
	Polinomio PolOp2(arr2.size()-1,RacPt2);
	Polinomio PolResult=(PolOp1)*(PolOp2);
//Polinomio PolResult=operator+(PolOp1&);
	string resultado=PolResult.string_show();
#ifdef PRINTING_DEBUG	
	cout<<PolOp1<<endl;
	cout<<PolOp2<<endl;
	cout<<PolResult<<endl;
	cout<<resultado<<endl;
#endif
	the_directory.add_or_change_entry("ans",resultado);	
}

void comando0::do_save(Pol_Directory& the_directory){
	the_directory.save();
}

void comando0::proccess_operation(Pol_Directory& the_directory,string& op1,unsigned char operador,string& op2){
//	#define PRINTING_DEBUG
#ifdef PRINTING_DEBUG
	cout<<"operador="<<operador<<endl;
#endif
	switch(operador){
		case '+':{
			do_suma(the_directory,op1,op2);
			break;
		}
		case '-':{
			do_resta(the_directory,op1,op2);
			break;
		}
		case '*':{
			do_mult(the_directory,op1,op2);
			break;
		}
	}
	do_save(the_directory);
}

