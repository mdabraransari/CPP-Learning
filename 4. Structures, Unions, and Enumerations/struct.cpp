//struct is an aggregate of elements of arbitrary type.
struct Address
{
    const char* name;
    int number;
    const char* street;
    const char* town;
    char state[2];
    const char* zip;
};
void f()
{
    Address jd;
    jd.name = "Jim Dandy";
    jd.number = 61;
}
