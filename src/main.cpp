#include "main.h"


constexpr int FINANCIAL_CEILING = 500;


int main()
{
    setlocale(LC_ALL, "ru");

    // ������ 15.1
    std::vector<int> data;
    int sum = 0;
    int n = 0;
    int budget = 0;
    int del = 0;
    int num = 0;
    constexpr int FACTOR = -1;

    auto print = [](const int& n) {
        std::cout << n << ' ';
        };

    auto transformation = [FACTOR](int& n) {
        n *= FACTOR;
        };

    // 15.1
    /*std::cout << "������� ����������� ������: ";
    std::cin >> n;
    data.reserve(n);
    std::cout << std::endl;
    std::cout << data.size() << std::endl;
    std::cout << data.capacity() << std::endl;

    for (int i = 0; i < n; i++) {
        int price = 0;
        std::cout << "������� ���������: ";
        std::cin >> price;
        data.push_back(price);
        std::cout << std::endl;
    }

    for (int price : data) {
        sum += price;
    }

    

    std::for_each(data.cbegin(), data.cend(), print);
    std::cout << std::endl;
    std::cout << "�������� ���������: " << sum << std::endl;*/

    // ������ 15.2
    /*std::cout << "������� ������: ";
    std::cin >> budget;
    std::cout << std::endl;

    std::sort(data.begin(), data.end());
    std::for_each(data.cbegin(), data.cend(), print);

    while (sum > budget)
    {
        del++;
        data.resize(data.size() - 1);

        std::cout << data.size() << std::endl;
        sum = 0;
        for (int price : data) {
            sum += price;
        }
    }
    
    std::cout << "������� ������ ��������������: ������� " << del << "������!" << std::endl;
    std::cout << "�������� ���������: " << sum << std::endl;*/
    
    // ������ 15.3
    /*std::sort(data.begin(), data.end());
    std::for_each(data.cbegin(), data.cend(), print);
    std::cout << std::endl;
    
    for (int price : data) {
        if (price < FINANCIAL_CEILING) {
            num++;
        }
        else {
            data.resize(num);
            break;
        }
    }

    std::cout << "����� �������: ";
    std::for_each(data.cbegin(), data.cend(), print);
    std::cout << std::endl;

    std::cout << "������ �������: " << data.size() << std::endl;*/

    // ������ 15.4
    std::for_each(data.begin(), data.end(), transformation);
    std::sort(data.begin(), data.end());
    std::for_each(data.cbegin(), data.cend(), print);
    std::cout << std::endl;

    // ������ 15.5
    std::vector<int> vector1;
    std::vector<int> vector2;

    std::cout << "������� ���������� ������: ";
    std::cin >> n;
    data.reserve(n);
    std::cout << std::endl;
    std::cout << data.capacity() << std::endl;

    for (int i = 0; i < n; i++) {
        int price = 0;
        std::cout << "������� ���������: ";
        std::cin >> price;
        vector1.push_back(price);
        std::cout << std::endl;
    }
    std::for_each(vector1.cbegin(), vector1.cend(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "������� ���������� ������: ";
    std::cin >> n;
    data.reserve(n);
    std::cout << std::endl;
    std::cout << data.capacity() << std::endl;

    for (int i = 0; i < n; i++) {
        int price = 0;
        std::cout << "������� ���������: ";
        std::cin >> price;
        vector2.push_back(price);
        std::cout << std::endl;
    }
    std::for_each(vector2.cbegin(), vector2.cend(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "����� �������: ";
    vector1.insert(vector1.end(), vector2.begin(), vector2.end());

    std::sort(vector1.begin(), vector1.end(), [](int a, int b)
        {
            return a > b;
        });
    
    std::for_each(vector1.cbegin(), vector1.cend(), print);
    std::cout << std::endl;
    std::cout << "������ �������: " << vector1.size() << std::endl;

    return 0;
}
