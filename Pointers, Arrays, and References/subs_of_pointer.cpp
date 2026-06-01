void f(){
    int v1[10];
    int v2[10];

    int i1 = &v1[5]-&v1[3];// i1 = 2;
    int i2 = &v1[5]-&v2[3];// result undefined
    
    int* p1 = v2+2;// p1 = &v2[2]
    int* p2 = v2-2;//*p2 undefined
}