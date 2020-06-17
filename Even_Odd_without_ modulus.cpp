int main()
{
    int x;
    std::cout << "Enter a number : " << std::endl;
    cin>>x;
    int n=(x/2)*2;
    if(n==x)
        std::cout << "Even" << std::endl;
    else
        std::cout << "Odd" << std::endl;
}

