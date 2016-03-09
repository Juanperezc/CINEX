/*
 *  MPersona.cpp
 *  Creado: 22/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 17/04/2012
 */

#include "MPersona.h"
MPersona :: MPersona(){}

void MPersona :: SetCedula(string ced){
   cedula = ced;
}
   
void MPersona :: SetNombre(string nomb){
   nombre = nomb;
}  

void MPersona :: SetDir(string d){
   dir = d;
}  
void MPersona :: SetTlf(string t){
   tlf = t;
}  

void MPersona :: SetSexo(int sex){
   sexo = sex;
}  
void MPersona :: SetEdoCivil(int e){
   edocivil = e;
}  

void MPersona :: SetEdad(int ed){
   edad = ed;
}
   
string MPersona :: GetCedula(){
   return cedula;
}     

string MPersona :: GetNombre(){
   return nombre;
}        

string MPersona :: GetDir(){
   return dir;
}        
string MPersona :: GetTlf(){
   return tlf;
}        

int MPersona :: GetSexo(){
   return sexo;
}      

int MPersona :: GetEdoCivil(){
   return edocivil;
}      

int MPersona :: GetEdad(){
   return edad;
}
