#include <iostream>
#include <fstream>
#include <algorithm>

#include <string>
using std::string;

#include <vector>
using std::vector; 

#include "json.h"

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
        std::ifstream file_input("NotationCorners.json");
        Json::Reader reader;
        Json::Value root;
        reader.parse(file_input, root);
        cout << root;
    }

    string getEdgeAlg(string & letterPair) const {

    }
        

}