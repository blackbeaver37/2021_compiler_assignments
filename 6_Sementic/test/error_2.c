int main(int argc, int argv[])
{
    int *a;
    float *b;
    float c;

    // Error No : 13, 58
    b = -a;

    // Error No : 24, 58
    b = a + "string";

    // Error No : 28, 58
    b = a * 10;

    // Error No : 29, 58
    b = a % 10;

    // Error No : 40, 58
    b = a > 10;

    // Error No : 29, 32, 58 & Warning
    b = c[0];

    // Error No : 37, 58
    b = c.field;
}