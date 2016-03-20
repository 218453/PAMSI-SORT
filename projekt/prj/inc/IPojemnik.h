#ifndef IPOJEMNIK_H
#define IPOJEMNIK_H

/*! \file IPojemnik.h
 *
 * \brief Plik zawiera interfejs dla pojemnika Stos, Kolejka oraz Tablica.
 *
 * \details Wskutek zastosowania szablonow wszystkie definicje musza znajdowac
 *          sie w pliku naglowkowym, a nie zrodlowym.
 *
 * \author Kamil Kuczaj.
 */


/*! \brief Skraca zapis.
 *
 * \details Zdefiniowanie wlasnego typu - pozwala na krotszy zapis.
 */
typedef unsigned int uint;


/*! \brief Interfejs dla każdego pojemnika.
 *
 * \details Abstrakcyjna klasa, ktora zostala utworzona na potrzeby ADT
 *          Abstract Data Types.
 */
template <class Type> class IPojemnik {
  protected:

  /*! \brief Dodaje element w okreslonym miejscu.
   *
   * \details Metoda czysto wirtualna. Dodaje element item w miejscu index
   *          pojemnika.
   *
   * \param[in] item    Dana, ktora ma byc wlozona.
   * \param[in] index   Indeks, w ktorym ma znalezc sie nowa dana.
   */
  virtual Type add(Type item, uint index)=0;

  /*! \brief Usuwa element z okreslonego miejsca.
   *
   * \details Usuwa i zwraca podany element znajdujacy sie w index-owym miejscu.
   *
   */
  virtual Type push()=0;

  /*! \brief Usuwa element z pojemnika.
   *
   * \details Usuwa element z pojemnika i zwraca go uzytkownikowi.
   *          Metoda czysto wirtualna.
   *
   * \return Usuniety element.
   */
  virtual Type pop()=0;

  /*! \brief Sprawdza czy pojemnika jest pusty.
   *
   * \details Sprawdza czy znajduja sie jakies elementy w pojemniku.
   *          Metoda czysto wirtualna.
   *
   * \retval true Pojemnik pusty.
   * \retval false Pojemnik nie jest pusty.
   */
  virtual bool empty()=0;

  /*!
   * \brief Zwraca aktualny rozmiar pojemnika.
   *
   * \details Zwraca wartosc, ktora reprezentuje obecna ilosc elementow
   *          w pojemniku. Metoda czysto wirtualna.
   *
   * \return Ilosc elementow w pojemniku.
   */
  virtual uint size()=0;
};


#endif
