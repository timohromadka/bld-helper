#include <iostream>
#include <fstream>
#include <algorithm>

#include <string>
using std::string;

#include <vector>
using std::vector; 

class AlgRetriever {


private:
    string filename;

    // 24 total - 2
    static const int edgeCount = 22;
    static const int cornerCount = 21;

public:
    AlgRetriever(const string & filenameIn) 
    :
    filename(filenameIn) {}

    void cleanInput(string * input) {
        remove(input->begin(), input->end(), ' ');
    }

    string getCornerAlg(string & letterPair) const {

    }

    string getEdgeAlg(string & letterPair) const {

    }

    string getCell(string & pos1, string & pos2) {

    }
        

}