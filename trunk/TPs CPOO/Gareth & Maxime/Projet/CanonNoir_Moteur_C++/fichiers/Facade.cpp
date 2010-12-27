/**
*\file Facade.cpp
*\brief File which contains the functions and code of the Facade class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "Facade.h"
#include "MoteurJeu.h"



void Facade::execute(){
	_moteur->execute();
}

int Facade::getAngle(){
	return _angle;
}

int Facade::getPuissance(){
	return _puissance;
}

int Facade::getCouleur1(){
	return _couleur1;
}

int Facade::getCouleur2(){
	return _couleur2;
}

int Facade::getCouleur3(){
	return _couleur3;
}

int Facade::getCouleur4(){
	return _couleur4;
}

void Facade::setClicDe(bool b){
	_clicDe=b;
}

void Facade::setAfficherDe1(bool b){
	_afficherDe1=b;
}

void Facade::setAfficherDe2(bool b){
	_afficherDe2=b;
}

void Facade::setChoixDe1(bool b){
	_choixDe1=b;
}

void Facade::setChoixDe2(bool b){
	_choixDe2=b;
}

void Facade::setChoix2De(bool b){
	_choix2De=b;
}

void Facade::setX(int u){
	_clicX=u;
}

void Facade::setY(int u){
	_clicY=u;
}

void Facade::setx1(int i){
	_x1=i;
}

void Facade::setx2(int i){
	_x2=i;
}

void Facade::setx3(int i){
	_x3=i;
}

void Facade::setx4(int i){
	_x4=i;
}

void Facade::setx5(int i){
	_x5=i;
}

void Facade::setx6(int i){
	_x6=i;
}

void Facade::setx7(int i){
	_x7=i;
}

void Facade::setx8(int i){
	_x8=i;
}

void Facade::sety1(int i){
	_y1=i;
}

void Facade::sety2(int i){
	_y2=i;
}

void Facade::sety3(int i){
	_y3=i;
}

void Facade::sety4(int i){
	_y4=i;
}

void Facade::sety5(int i){
	_y5=i;
}

void Facade::sety6(int i){
	_y6=i;
}

void Facade::sety7(int i){
	_y7=i;
}

void Facade::sety8(int i){
	_y8=i;
}