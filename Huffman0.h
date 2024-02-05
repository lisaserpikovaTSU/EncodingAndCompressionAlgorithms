
#ifndef ENCODINGANDCOMPRESSIONALGORITHMS_HUFFMAN0_H
#define ENCODINGANDCOMPRESSIONALGORITHMS_HUFFMAN0_H

#include <iostream>
#include <fstream>
#include <string>

//список частот с пом класса ноде
class Node{
private:
    std::string str;
    int freq = 0;
    Node *left = nullptr;
    Node *right = nullptr;
public:
    Node(std::string s, int fr=0, Node *L=NULL, Node *R=NULL){
        str = s;
        freq = fr;
        left = L;
        right = R;
    }
};




#endif //ENCODINGANDCOMPRESSIONALGORITHMS_HUFFMAN0_H
