#include "stdafx.h"
#include <assert.h>
#include "Etudiant.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace TestProject1
{
	[TestClass]
	public ref class UnitTest1
	{
	private:
		TestContext^ testContextInstance;

	public: 
		/// <summary>
		///Obtient ou d�finit le contexte de test qui fournit
		///des informations sur la s�rie de tests active ainsi que ses fonctionnalit�s.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		#pragma region Additional test attributes
		//
		//Vous pouvez utiliser les attributs suppl�mentaires suivants lorsque vous �crivez vos tests :
		//
		//Utilisez ClassInitialize pour ex�cuter du code avant d'ex�cuter le premier test de la classe
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//Utilisez ClassCleanup pour ex�cuter du code une fois que tous les tests d'une classe ont �t� ex�cut�s
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		
		//Utilisez TestInitialize pour ex�cuter du code avant d'ex�cuter chaque test
		[TestInitialize()]
		void MyTestInitialize() {
			Etudiant::today = 2010;
		};
		
		//Utilisez TestCleanup pour ex�cuter du code apr�s que chaque test a �t� ex�cut�
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
		#pragma endregion 

		[TestMethod]
		void TestMethod1()
		{
			Etudiant E1 = Etudiant ("Thomas","Dupont",1990);
			int Resultat_attendu = Etudiant::today-1990;
			assert(E1.Age() ==Resultat_attendu);
			//
			// TODO: ajoutez ici la logique du test
			//
		};
	};
}
