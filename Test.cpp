#include <Polynomal.h>
int main(){
    Term t(5,2);
    t.insertAfter(4,1);
    t.insertAfter(5,2);
    cout<<t<<endl;
}