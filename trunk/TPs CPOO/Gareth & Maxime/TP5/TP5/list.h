//=======================================================================
// list.h
//=======================================================================

#ifndef LIST_H
#define LIST_H

#include <iostream>

// Pre-declarations necessaires pour l'utilisation des classes amies
template <class T> class List;
template <class T> class ListIterator;

// =====================================================================
// Classe: definition de la classe ListElement<T> decrivant un element de
//         liste.
//         Tous les membres de la classe ListElement sont definis prives,
//         ainsi seules les classes amies List et ListIterator y ont accès.
// =====================================================================
template <class T> class ListElement {
	private:
		// Valeur de l'element
		T _value;

		// Membres pour le chainage
		ListElement<T>* _prev;
		ListElement<T>* _next;

		// Constructeurs et destructeur : ils mettent a jour le chainage au sein de la liste
		ListElement(const T& v) : _value(v), _prev(0), _next(0) {}
		ListElement(ListElement<T>* p, ListElement<T>* n)
			:  _prev(p), _next(n) {
			if (n != 0) n->_prev = this;
			if (p != 0) p->_next = this;
		}
		ListElement(const T& v,ListElement<T>* p, ListElement<T>* n)
			: _value(v), _prev(p), _next(n) {
			if (n != 0) n->_prev = this;
			if (p != 0) p->_next = this;
		}
		~ListElement() {
			if (_prev != 0) _prev->_next = _next;
			if (_next != 0) _next->_prev = _prev;
		}

		// Classes amies
		friend class List<T>;
		friend class ListIterator<T>;
};



// Predeclaration de List pour pouvoir pre-declarer des operateurs
template <class T> class List;

// Pre-declaration pouvoir declarer ces operateurs amis de List
template <class T> std::ostream& operator<<(std::ostream& out, const List<T>& lref);
template <class T> std::istream& operator>>(std::istream& in, List<T>& lref);

// =====================================================================
// Classe: definition de la classe List<T> decrivant des listes generiques
//         La gestion de la liste est en double chainage avec deux elements
//         fictifs _head et _tail pour gerer le chainage.
// =====================================================================
template <class T> class List {
	private:
		// Les deux elements fictifs
		ListElement<T>* _head;
		ListElement<T>* _tail;

		// Nombre d'elements contenus
		int _card;

		// =====================================================================
		// But: suppression des elements contenus (mais pas les elements fictifs)
		// =====================================================================
		void _freelist() {
			ListElement<T>* tmp = _head->_next;
			while (tmp != _tail) {
				ListElement<T>* n = tmp->_next;
				_card--;
				delete tmp;
				tmp = n;
			}
		}

	protected:
		// Definition du type enumere eListPosition
		// Definition des differents emplacements d'insertion d'un nouvel element
		// dans une liste.
		enum eListPosition {
			LP_first = -2, // en debut de liste
			LP_last = -1,  // en fin de liste
			LP_pos = 0     // a une position donnee (entre 1 et le cardinal de la liste)
		};

	public:
		// =====================================================================
		// But: constructeur par defaut : creation d'une liste vide
		// =====================================================================
		List() : _card(0) {
			_head = new ListElement<T>(0, 0);
			_tail = new ListElement<T>(_head, 0);
			_head->_next = _tail;
		}

		// =====================================================================
		// But: constructeur par recopie
		// =====================================================================
		List(const List<T>& lref)
			: _card(0) {
			_head = new ListElement<T>(0, 0);
			_tail = new ListElement<T>(_head, 0);
			_head->_next=_tail;

			ListElement<T>* tmp = lref._head->_next;
			while (tmp != lref._tail) {
				ListElement<T>* toadd;
				// Ajout a la fin de la liste
				toadd = new ListElement<T>(tmp->_value,_tail->_prev,_tail);
				_card++;
				tmp = tmp->_next;
			}
		}

		// =====================================================================
		// But: destructeur
		// =====================================================================
		~List() {
			_freelist();
			delete _head;
			delete _tail;
		}

		// =====================================================================
		// But: operateur d'affectation
		// =====================================================================
		List<T>& operator=(const List<T>& lref) {
			if (this != &lref) {
				_freelist();
				ListElement<T>* tmp = lref._head->_next;
				while (tmp != lref._tail) {
		ListElement<T>* toadd;
		// Ajout a la fin de la liste
		toadd = new ListElement<T>(tmp->_value,_tail->_prev,_tail);
		_card++;
		tmp = tmp->_next;
				}
			}
			return *this;
		}

		// =====================================================================
		// But: test d'appartenance d'un element a une liste, rend l'index si present
		// =====================================================================
		bool operator==(const T& v) const {
			int res = 0;
			int idx = 0;
			ListElement<T>* tmp = _head->_next;
			while ((tmp != _tail) && (!res)) {
				res = (tmp->_value == v);
				tmp = tmp->_next;
				idx++;
			}
			return (res ? idx : 0);
		}

		// =====================================================================
		// But: cardinal de la liste
		// =====================================================================
		int card() const { return _card; }

		// =====================================================================
		// But: ajout d'un element a une liste (par defaut en tête de liste)
		// =====================================================================
		void addElement(const T& v, eListPosition pos = LP_first) {
			ListElement<T>* toadd;
			switch (pos) {
			case LP_first:	// Ajout en debut
				toadd = new ListElement<T>(v, _head, _head->_next);
				_card++;
				break;
			case LP_last:	// Ajout en fin
				toadd = new ListElement<T>(v, _tail->_prev, _tail);
				_card++;
				break;
			case LP_pos: // Pas d'ajout en position 0 de la liste
			default:
				int realpos = pos;
				ListElement<T>* tmp = _head->_next;
				while ((tmp != _tail) && (realpos > 1)) {
		tmp = tmp->_next;
		realpos--;
				}
				// Ajout effectif de l'element
				if (realpos == 0) {
		toadd = new ListElement<T>(v,tmp->_prev,tmp);
				}
				_card++;
				break;
			}
		}

		// =====================================================================
		// But: operateur d'ajout d'un element a une liste (l'ajout se fait en
		//	  debut de liste)
		// =====================================================================
		List<T> operator+(const T& v) const {
			List<T> lres(*this);
			lres.addElement(v,LP_first);
			return lres;
		}

		// =====================================================================
		// But: operateur de suppression d'un element d'une liste
		// =====================================================================
		List<T> operator-(const T& v) const {
			List<T> lres(*this);
			lres.delElement(v);
			return lres;
		}

		// =====================================================================
		// But: suppression d'un element
		// =====================================================================
		void delElement(const T& v) {
			// Recherche de l'element
			ListElement<T>* tmp = _head->_next;
			while ((tmp != _tail) && (tmp->_value != v)) {
				tmp = tmp->_next;
			}
			// Si l'element a ete trouve, le detruire
			if (tmp != _tail) {
				delete tmp;
				_card--;
			}
		}

		// =====================================================================
		// But: accès a un element donne de la liste en donnant un indice
		// =====================================================================
		T& operator[](const int& idx) const {
			int id = 1;
			ListElement<T>* tmp = _head->_next;
			while ((tmp != _tail) && (id != idx)) {
				tmp = tmp->_next;
				id++;
			}
			return tmp->_value;
		}

		// =====================================================================
		// But: iterateur de liste a partir du debut
		// =====================================================================
		ListIterator<T> beg() const {
			return ListIterator<T>(*this);
		}

		// =====================================================================
		// But: iterateur de liste a partir de la fin
		// =====================================================================
		ListIterator<T> end() {
			ListIterator<T> res(*this);
			res._crtelt = _tail->_prev;
			return res;
		}

		// =====================================================================
		// But: iterateur de liste a partir d'une position donnee
		// =====================================================================
		ListIterator<T> pos(const int& idx) {
			int realpos(idx);
			ListIterator<T> res(*this);
			ListElement<T>* tmp = _head->_next;
			while ((tmp != _tail) && (realpos > 1)) {
				tmp = tmp->_next;
				realpos--;
			}
			res._crtelt = tmp;
			return res;
		}

		// =====================================================================
		// But: operateur d'affichage d'une liste dans un flux
		// =====================================================================
		friend std::ostream& operator<< <T>(std::ostream& out,const List<T>& lref);

		// =====================================================================
		// But: operateur de lecture d'une liste dans un flux
		// =====================================================================
		friend std::istream& operator>> <T>(std::istream& in,List<T>& lref);

		// Classe amie
		friend class ListIterator<T>;
};



// =====================================================================
// Classe: definition de la classe ListIterator<T> de parcours des listes
// =====================================================================
template <class T> class ListIterator {
		// La liste de reference
		const List<T>& _listref;
		// La position courante
		ListElement<T>* _crtelt;

		// Constructeur : on ne cree un iterateur que grâce a la classe List
		ListIterator(const List<T>& lref) : _listref(lref) { _crtelt = lref._head->_next; }

	public:
		// Destructeur */
		~ListIterator() {}
		// Fin du parcours (on est sur l'un des elements fictifs
		int finished() const { return ((_crtelt == _listref._tail) || (_crtelt == _listref._head)); }
		// Parcours en marche avant
		ListIterator<T>& operator++() { _crtelt = _crtelt->_next; return *this; }
		// Parcours en marche arrière
		ListIterator<T>& operator--() { _crtelt = _crtelt->_prev; return *this; }
		// Recuperation de l'element courant
		T& get() { return _crtelt->_value; }

		// Classe amie
		friend class List<T>;
};

template <class T>
std::ostream& operator<<(std::ostream& out, const List<T>& lref) {
	out << lref.card() << "    ";
	for (ListIterator<T> iterlst = lref.beg(); !(iterlst.finished()); ++iterlst) {
		out << iterlst.get() << "  ";
	}
	return out;
}

template <class T>
std::istream& operator>>(std::istream& in, List<T>& lref) {
	int nb;
	in >> nb;
	for (int i = 0; i < nb; i++) {
		T tmp;
		in >> tmp;
		lref.addElement(tmp, List<T>::LP_last);
	}
	return in;
}

#endif // LIST_H
