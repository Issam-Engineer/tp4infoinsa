// Canon_Noir_Dll.h : fichier d'en-tête principal pour la DLL Canon_Noir_Dll
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CCanon_Noir_DllApp
// Consultez Canon_Noir_Dll.cpp pour l'implémentation de cette classe
//

class CCanon_Noir_DllApp : public CWinApp
{
public:
	CCanon_Noir_DllApp();

// Substitutions
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
