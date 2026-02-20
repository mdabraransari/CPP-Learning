class Test 
{
    public:
        Test() {}

        Test(const Test&) = delete;
};
int main() {
    Test t1;
    // Test t2 = t1;
}