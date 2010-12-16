/**
*\file  enum.h
*\brief File which contains the enumaration corresponding to the different states (Etat)
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

enum enumEtat {
	ATTENTENBJOUEURS = 0,
	ATTENTEINITIALISATION = 1,
	ATTENTEPREMLANCERDE = 2,
	ATTENTELANCERDE = 3,
	ATTENTECHOIXBATEAU = 4,
	PROPOSEDEPLACEMENT = 5,
	ATTENTEDEPLACEMENT = 6,
	DUEL = 7,
	ETATTIR = 8,
	ATTENTECANONPUISSANCE = 9,
	ATTENTECANONANGLE = 10,
	ETATCANONFIN  = 11,
	ETATTRESOR = 12,
	ETATDEPOT = 13,
	ETATFINPARTIE = 14,
	ATTENTECHOIXDE
};