#include "sort.h"
#include <iostream>
#include <array>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[]) {
  int *arr;
  string fileName = "";
  string line = "";
  int numValues = 0;
  if(argc > 1){
    fileName = argv[1];
  }
  ifstream fileStream;
  fileStream.open(fileName);
  if(fileStream.is_open()){
    int lineCount = 1;
    int count = 0;
    while(getline(fileStream,line)){
      if(lineCount == 1){
        numValues = stoi(line);
        arr = new int[numValues];
        lineCount++;
      }
      else{
        arr[count] = stoi(line);
        count++;
      }
    }
  }


  sort s = sort();
  for(int i = 0;i<11;++i){
    cout << arr[i] << endl;
  }
}
