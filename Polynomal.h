#ifndef POLYNOMAL_H
#define POLYNOMAL_H
#include <iostream>
using namespace std;

struct Term{
    float coef;
    int exp;
    Term *link;
    Term(float c,int e,Term *next=NULL){coef=c;exp=e;link=next;}
    Term *insertAfter(float c,int e);
    friend ostream& operator << (ostream& out,Term& term);
};

Term* Term::insertAfter(float c,int e){
    link=new Term(c,e,link);
}

ostream& operator << (ostream& out,Term& term){
    if(term.coef==0.0){
        return out;
    }
    out<<term.coef;
    switch(term.exp){
        case 0:break;
        case 1:out << "X";break;
        default:out<<"X^"<<term.exp;break;
    }
    return out;
}
#endif