/**
*\file  enum.h
*\brief File which contains the enumaration corresponding to the different states (Etat)
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

/**
*\enum enumEtat
*\brief Enum which allows to change the current state of the motor whith indices
*/
enum enumEtat{
	ATTENTENBJOUEURS,
	ATTENTEINITIALISATION,
	ATTENTEPREMLANCERDE,
	ATTENTELANCERDE,
	ATTENTECHOIXBATEAU,
	PROPOSEDEPLACEMENT,
	ATTENTEDEPLACEMENT,
	ETATTRESOR,
	ETATDEPOT,
	DUEL,
	ETATTIR,
	ATTENTECHOIXBATVISE,
	ETATCANONFIN,
	ETATFINPARTIE,
};