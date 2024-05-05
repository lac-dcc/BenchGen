int main() {
    int a = 1;
    for (int i = 1; i < 500; i++)
    {
       a += i % a;
    }
    return 0;
}