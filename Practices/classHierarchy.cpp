class Shape{
    public:
       virtual Point center() const = 0;
       virtual void move(Point to) = 0;
       virtual void draw() const = 0;
       virtual void rotate(int angle) = 0;
       virtual ~Shape(){}
};

void rotate_all(vector<shape*>& v, int angle){
    for(auto p: v)
       p->rotate(angle);
}