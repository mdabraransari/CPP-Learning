class Stduent 
{
    int* marks;

  public:
      Stduent()
      {
        marks = new int;
      }
    
      ~Stduent()
      {
        delete marks;
      }
};