// Copyright 2016 Kamil Kuczaj
#include "Sedzia.h"
#include "Lista.h"
#include "QuickSort.h"
#include "QuickSortTest.h"

#include <iostream>
#include <sstream>
#include <cstdlib>

/*! \mainpage Opis programu
 *
 * \author Kamil Kuczaj <218478@student.pwr.edu.pl>
 *
 * \section intro_sec Wstep
 *
 * Program zostal zbudowany modulowo. W folderze inc/ znajduja sie pliki naglowkowe.
 * Folder src/ zawiera pliki zrodlowe. W glownym folderze zbudowany zostal Makefile.
 * Pliki obiektowe sa budowane w folderze obj/ a nastepnie linkowane do glownego
 * folderu (prj/). Testowano przy wykorzystaniu kompilatora g++ w wersji 4.8.4 na
 * systemie Linux Ubuntu 14.04.04 opartego o jądro 4.2.0-30-generic.
 *
 * \section Licencja
 *
 * Program udostepniam na licencji GPLv3.
 *
 * \section install_sec Instalacja
 *
 * Aby zbudowac i jednoczesnie odpalic program:
 * $ make
 *
 * Aby pozbyc sie plikow z koncowka *~ lub zaczynajacych sie na #*:
 * $ make order
 *
 * Aby pozbyc sie programu wykonywalnego oraz plikow obiektowych:
 * $ make clean
 *
 * Aby wyswietlic pomoc do pliku Makefile:
 * $ make help
 */

int main(int argc, char **argv) {
  // information for the user
  std::cout << "!!! INFO: Program starts indexing at 0, not at 1 !!!"
            << std::endl << std::endl;

  Sedzia referee;
  int trials_count = 10;

  // dziesiec, tysiac, sto tysiecy, milion, milard
  Lista lista;
  lista.add("10",0);
  lista.add("100",1);
  lista.add("1000",2);
  lista.add("100000",3);
  lista.add("1000000",4);
  lista.add("1000000000",5);
  
  // MERGE SORT TEST
  for(int i=0; i < 5; i++)
  {
	  std::cout << "Sortowanie " << lista.get(i) << " elementów:" << std::endl;
	  referee.setOffMergeSorter(atoi((lista.get(i)).c_str()), trials_count);
  }
  
  //  QUICK SORT TEST
  /*int sortCase = 2; // 1- avarage case, 2- pesimistic case
  if(sortCase == 1)
  {
	  std::cout << "Sortowanie - przypadek przecietny" << std::endl;	  
  }
  else if (sortCase == 2)
  {
	  std::cout << "Sortowanie - przypadek pesymistyczny" << std::endl;  
  }
  for(int i=0; i < 5; i++)
  {
	  std::cout << "Sortowanie " << lista.get(i) << " elementów:" << std::endl;
	  referee.setOffSorter(atoi((lista.get(i)).c_str()), trials_count, sortCase);
  }*/
  
  
  //int data_sizes[5]= {10, 1000, 100000, 1000000, 1000000000};

  // // running the list
  // for (int i = 0; i < 3; i++)
  //   referee.setOffList(data_sizes[i], trials_count);

  // // running the array
  // for (int i = 0; i < 5; i++) {
  //   for (int j = 0; j < trials_count; j++)
  //     referee.setOffTable(data_sizes[i]);
  // }

  // // printing stack
  // referee.setOffStack(data_sizes[0]);

  // // printing queue
  // referee.setOffQueue(data_sizes[0]);
}
