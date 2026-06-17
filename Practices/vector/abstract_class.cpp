#include <iostream>
#include <vector>
// abstract use as a blueprint for other classe.

class Container {
    public:
      virtual double& operator[](int) = 0;
      virtual int size() const = 0;
      virtual ~Container() {}
};
void use(Container& c){
    const int sz = c.size();
    for(int i = 0; i != sz; i++){
        std::cout << c[i] << '\n';
    }
}

class Vector_container : public Container {
    public:
      Vector_container(std::initializer_list<double> il) : v(il) {}

      double& operator[](int i) override { return v.at(i); }
      int size() const override { return static_cast<int>(v.size()); }

    private:
      std::vector<double> v;
};

int main(){
    Vector_container vc{1.5, 2.0, 3.25, 4.75};
    use(vc);
    return 0;
}
