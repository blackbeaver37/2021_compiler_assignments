int main(int argc, int argv[])
{
    // Error No : 18, 82, 86
    int a["array"];

    int b;
    void *v;

    // Error No : 27, 58, 60
    b = --a;

    // Error No : 31, 58
    b = *v;
}