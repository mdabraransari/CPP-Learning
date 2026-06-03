void f4(){
    int a = 1;
    const int c = 2;
    const int* p1 = &c;
    const int* p2 = &a;
    int* p3 = &c;// error: initialization of int* with const int*
    *p3 = 7;
}