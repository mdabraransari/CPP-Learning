enum class Kind { circle , triangle , smiley};

Shape* read_shape(istream& is)
{
    switch (k)
    {
    case Kind::circle:
        return new Circle{p,r};
        break;
    
    default:
        break;
    }
}