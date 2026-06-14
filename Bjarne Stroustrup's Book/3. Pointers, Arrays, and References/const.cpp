const int model = 9;
const int v[] = {1,2,3,4};
const int x;
void f(){
    // model = 200;//error
    // v[2] = 3; // error
}
void g(const X* p){
    //can't modify *p here
}

struct X{

};
void h(){
    X val;
    g(&val);
}