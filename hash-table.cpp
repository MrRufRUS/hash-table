// hash-table.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Data{
public:
    class PhoneNumber {
    private:

    public:
        int code = 0;
        int number = 0;
        PhoneNumber(int c, int n) {
            code = c;
            number = n;
        }
        PhoneNumber() = default;
        bool operator==(PhoneNumber const& a) {
            return (code == a.code && number == a.number);
        }
        bool operator!=(PhoneNumber const& a) {
            if (code != a.code)
                return true;
            else if (number != a.number)
                return true;
            else
                return false;
            //return !(code == a.code && number == a.number);
        }
        bool operator> (PhoneNumber const& a) {
            if (code > a.code)
                return true;
            else if (code == a.code && number > a.number)
                return true;
            else
                return false;
            //return (code > a.code || (code == a.code && number > a.number));
        }
        bool operator< (PhoneNumber const& a) {
            if (code < a.code)
                return true;
            else if (code == a.code && number < a.number)
                return true;
            else
                return false;
            //return (code < a.code || (code == a.code && number < a.number));
        }
        bool operator>= (PhoneNumber const& a) {
            if (code > a.code)
                return true;
            else if (code == a.code)
                return (number >= a.number);
            else
                return false;
            //return (code > a.code || (code == a.code && number > a.number)) || (code == a.code && number == a.number);
        }
        bool operator<= (PhoneNumber const& a) {
            if (code < a.code)
                return true;
            else if (code == a.code)
                return (number <= a.number);
            else
                return false;
            //return (code < a.code || (code == a.code && number < a.number)) || (code == a.code && number == a.number);
        }
    };
    class LFP {
    private:

    public:
        std::string lastName = "";
        std::string firstName = "";
        std::string patronymic = "";
        LFP(std::string l, std::string f, std::string p) {
            lastName = l;
            firstName = f;
            patronymic = p;
        }
        LFP() = default;
        bool operator== (LFP const& a) {
            return (lastName == a.lastName && firstName == a.firstName && patronymic == a.patronymic);
        }
        bool operator!= (LFP const& a) {
            if (lastName != a.lastName)
                return true;
            else if (firstName != a.firstName)
                return true;
            else if (patronymic == a.patronymic)
                return true;
            else
                return false;
            //return !(lastName == a.lastName && firstName == a.firstName && patronymic == a.patronymic);
        }
        bool operator> (LFP const& a) {
            if (lastName > a.lastName)
                return true;
            else if (lastName == a.lastName) {
                if (firstName > a.firstName)
                    return true;
                else if (firstName == a.firstName)
                    return (patronymic > a.patronymic);
                else return false;
            }
            else return false;
            //return (lastName > a.lastName || (lastName == a.lastName && firstName > a.firstName) || (lastName == a.lastName && firstName == a.firstName && patronymic > a.patronymic));
        }
        bool operator< (LFP const& a) {
            if (lastName < a.lastName)
                return true;
            else if (lastName == a.lastName) {
                if (firstName < a.firstName)
                    return true;
                else if (firstName == a.firstName)
                    return (patronymic < a.patronymic);
                else return false;
            }
            else return false;


            //return (lastName < a.lastName || (lastName == a.lastName && firstName < a.firstName) || (lastName == a.lastName && firstName == a.firstName && patronymic < a.patronymic));
        }
        bool operator>= (LFP const& a) {
            if (lastName > a.lastName)
                return true;
            else if (lastName == a.lastName) {
                if (firstName > a.firstName)
                    return true;
                else if (firstName == a.firstName)
                    return (patronymic >= a.patronymic);
                else return false;
            }
            else return false;

            //return (lastName > a.lastName || (lastName == a.lastName && firstName > a.firstName) || (lastName == a.lastName && firstName == a.firstName && patronymic > a.patronymic)) || (lastName == a.lastName && firstName == a.firstName && patronymic == a.patronymic);
        }
        bool operator<= (LFP const& a) {
            if (lastName < a.lastName)
                return true;
            else if (lastName == a.lastName) {
                if (firstName < a.firstName)
                    return true;
                else if (firstName == a.firstName)
                    return (patronymic <= a.patronymic);
                else return false;
            }
            else return false;
            //return (lastName < a.lastName || (lastName == a.lastName && firstName < a.firstName) || (lastName == a.lastName && firstName == a.firstName && patronymic < a.patronymic)) || (lastName == a.lastName && firstName == a.firstName && patronymic == a.patronymic);
        }
    };
    class CarNum {
    private:

    public:
        std::string first = "";
        int number = 0;
        std::string second = "";
        CarNum(std::string f, int n, std::string s) {
            first = f;
            number = n;
            second = s;
        }
        CarNum() = default;
        bool operator== (CarNum const& a) {
            return (first == a.first && number == a.number && second == a.second);
        }
        bool operator!= (CarNum const& a) {
            if (first != a.first)
                return true;
            else if (number != a.number)
                return true;
            else if (second != a.second)
                return true;
            else
                return false;
            //return !(first == a.first && number == a.number && second == a.second);
        }
        bool operator> (CarNum const& a) {
            if (first > a.first)
                return true;
            else if (first == a.first) {
                if (number > a.number)
                    return true;
                else if (number == a.number)
                    return second > a.second;
                else return false;
            }
            else
                return false;
            //return (first > a.first || (first == a.first && number > a.number) || (first == a.first && number == a.number && second > a.second));
        }
        bool operator< (CarNum const& a) {
            if (first < a.first)
                return true;
            else if (first == a.first) {
                if (number < a.number)
                    return true;
                else if (number == a.number)
                    return second < a.second;
                else return false;
            }
            else
                return false;
            //return (first < a.first || (first == a.first && number < a.number) || (first == a.first && number == a.number && second < a.second));
        }
        bool operator>= (CarNum const& a) {
            if (first > a.first)
                return true;
            else if (first == a.first) {
                if (number > a.number)
                    return true;
                else if (number == a.number)
                    return second >= a.second;
                else return false;
            }
            else
                return false;
            //return (first > a.first || (first == a.first && number > a.number) || (first == a.first && number == a.number && second > a.second)) || (first == a.first && number == a.number && second == a.second);
        }
        bool operator<= (CarNum const& a) {
            if (first < a.first)
                return true;
            else if (first == a.first) {
                if (number < a.number)
                    return true;
                else if (number == a.number)
                    return second <= a.second;
                else return false;
            }
            else
                return false;
            //return (first < a.first || (first == a.first && number < a.number) || (first == a.first && number == a.number && second < a.second)) || (first == a.first && number == a.number && second == a.second);
        }
    };
    PhoneNumber ph;
    LFP lfp;
    CarNum cn;
    Data(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
        ph = PhoneNumber(c, n);
        lfp = LFP(l, f, p);
        cn = CarNum(fi, ser, sec);
    }
    Data() = default;
    int getKey() {
        std::string lfps = lfp.lastName + lfp.firstName + lfp.patronymic;
        int key = 0;
        for (auto a : lfps) {
            key += int(a);
        }
        for (auto a : cn.first) {
            key += int(a);
        }
        key += cn.number;
        for (auto a : cn.second) {
            key += int(a);
        }
        return key;
    }

    bool operator==(Data const& a) {
        return (ph == a.ph && lfp == a.lfp);
    }
    bool operator!=(Data const& a) {
        if (ph != a.ph)
            return true;
        else if (lfp != a.lfp)
            return true;
        else
            return false;
        //return !(code == a.code && number == a.number);
    }
    bool operator> (Data const& a) {
        if (ph > a.ph)
            return true;
        else if (ph == a.ph && lfp > a.lfp)
            return true;
        else
            return false;
        //return (code > a.code || (code == a.code && number > a.number));
    }
    bool operator< (Data const& a) {
        if (ph < a.ph)
            return true;
        else if (ph == a.ph && lfp < a.lfp)
            return true;
        else
            return false;
        //return (code < a.code || (code == a.code && number < a.number));
    }
    bool operator>= (Data const& a) {
        if (ph > a.ph)
            return true;
        else if (ph == a.ph)
            return (lfp >= a.lfp);
        else
            return false;
        //return (code > a.code || (code == a.code && number > a.number)) || (code == a.code && number == a.number);
    }
    bool operator<= (Data const& a) {
        if (ph < a.ph)
            return true;
        else if (ph == a.ph)
            return (lfp <= a.lfp);
        else
            return false;
        //return (code < a.code || (code == a.code && number < a.number)) || (code == a.code && number == a.number);
    }

};


int HashFunctionHorner(const std::string& s, int table_size, const int key)
{
    int hash_result = 0;
    for (int i = 0; s[i] != s.size(); ++i)
    {
        hash_result = (key * hash_result + s[i]) % table_size;
    }
    hash_result = (hash_result * 2 + 1) % table_size;
    return hash_result;
}

struct HashFunction1
{
    int operator()(const std::string& s, int table_size) const
    {
        return HashFunctionHorner(s, table_size, table_size - 1);
    }
};

struct HashFunction2
{
    int operator()(const std::string& s, int table_size) const
    {
        return HashFunctionHorner(s, table_size, table_size + 1);
    }
};

template <class T, class THash1 = HashFunction1, class THash2 = HashFunction2>
class HashTable
{
    static const int default_size = 8;
    constexpr static const double rehash_size = 0.75;
    struct Node
    {
        T value;
        bool state;
        Node(const T& value_) : value(value_), state(true) {}
    };
    Node** arr;
    int size;
    int buffer_size;
    int size_all_non_nullptr;

    void Resize()
    {
        int past_buffer_size = buffer_size;
        buffer_size *= 2;
        size_all_non_nullptr = 0;
        size = 0;
        Node** arr2 = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr2[i] = nullptr;
        std::swap(arr, arr2);
        for (int i = 0; i < past_buffer_size; ++i)
        {
            if (arr2[i] && arr2[i]->state)
                Add(arr2[i]->value);
        }
        for (int i = 0; i < past_buffer_size; ++i)
            if (arr2[i])
                delete arr2[i];
        delete[] arr2;
    }

    void Rehash()
    {
        size_all_non_nullptr = 0;
        size = 0;
        Node** arr2 = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr2[i] = nullptr;
        std::swap(arr, arr2);
        for (int i = 0; i < buffer_size; ++i)
        {
            if (arr2[i] && arr2[i]->state)
                Add(arr2[i]->value);
        }
        for (int i = 0; i < buffer_size; ++i)
            if (arr2[i])
                delete arr2[i];
        delete[] arr2;
    }

public:
    HashTable()
    {
        buffer_size = default_size;
        size = 0;
        size_all_non_nullptr = 0;
        arr = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr[i] = nullptr;
    }
    ~HashTable()
    {
        for (int i = 0; i < buffer_size; ++i)
            if (arr[i])
                delete arr[i];
        delete[] arr;
    }
    bool Add(const T& value, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        if (size + 1 > int(rehash_size * buffer_size))
            Resize();
        else if (size_all_non_nullptr > 2 * size)
            Rehash();
        int h1 = hash1(value, buffer_size);
        int h2 = hash2(value, buffer_size);
        int i = 0;
        int first_deleted = -1;
        while (arr[h1] != nullptr && i < buffer_size)
        {
            if (arr[h1]->value == value && arr[h1]->state)
                return false;
            if (!arr[h1]->state && first_deleted == -1)
                first_deleted = h1;
            h1 = (h1 + h2) % buffer_size;
            ++i;
        }
        if (first_deleted == -1)
        {
            arr[h1] = new Node(value);
            ++size_all_non_nullptr;
        }
        else
        {
            arr[first_deleted]->value = value;
            arr[first_deleted]->state = true;
        }
        ++size;
        return true;
    }
    bool Remove(const T& value, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        int h1 = hash1(value, buffer_size);
        int h2 = hash2(value, buffer_size);
        int i = 0;
        while (arr[h1] != nullptr && i < buffer_size)
        {
            if (arr[h1]->value == value && arr[h1]->state)
            {
                arr[h1]->state = false;
                --size;
                return true;
            }
            h1 = (h1 + h2) % buffer_size;
            ++i;
        }
        return false;
    }
    bool Find(const T& value, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        int h1 = hash1(value, buffer_size);
        int h2 = hash2(value, buffer_size);
        int i = 0;
        while (arr[h1] != nullptr && i < buffer_size)
        {
            if (arr[h1]->value == value && arr[h1]->state)
                return true;
            h1 = (h1 + h2) % buffer_size;
            ++i;
        }
        return false;
    }
};






int main()
{
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
