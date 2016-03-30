// Copyright 2016 Kamil Kuczaj
#include "Kolejka_test.h"

#include <string>   // to deal with reading words
#include <fstream>  // to deal with file streams and the dictionary

void Kolejka_test::prepare(int size) {
  std::fstream dictionary;
  dictionary.open("109582_English_Words.txt", std::fstream::in);
  try {
    dictionary.exceptions(dictionary.failbit);
  }
  catch(const std::ios_base::failure & ex) {
    std::cerr << "Error! Couldn't find or open a file"
              << ex.what() << std::endl;
  }

  // read input only if the file stream is open
  if (dictionary.is_open()) {
    // http://stackoverflow.com
    // /questions/21647/reading-from-text-file-until-eof-repeats-last-line
    // user Wilhelmtell '08
    std::string word;
    for (int i = 0; i < size; i++) {
      dictionary >> word;
      if (dictionary.eof()) break;
      try {
        queue.push(word); }
      catch (const char* message) {
        std::cout << message << std::endl; }
    }
  }
  // for debug
  queue.print();
  queue.pop();
  std::cout << std::endl;
  queue.print();
  queue.push("5");
  std::cout << std::endl;
  queue.print();
  dictionary.close();
}


void Kolejka_test::run() {
}


