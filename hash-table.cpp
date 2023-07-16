// hash-table.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define KKK 2

//TODO переписать вторую хэш функцию под цикличную открытую адресацию;



using namespace std;
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
    int key;
    Data(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
        ph = PhoneNumber(c, n);
        lfp = LFP(l, f, p);
        cn = CarNum(fi, ser, sec);
        key = getKey();
    }
    Data() = default;
    ~Data() = default;
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

class HashTable {
    int defaultSize;
    int size;
    int busyNodes;
    double resizeGreater = 0.7;
    double resizeLower = 0.3;
    struct Node {
        bool isHere;
        Data d;
        Node() {
            isHere = false;
            d = Data();
        }
        Node(Data dtr) {
            isHere = true;
            d = dtr;
        }
        Node(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
            isHere = true;
            d = Data(c, n, l, f, p, fi, ser, sec);
        }
        ~Node() = default;
    };
    vector <Node> nodes;

    int hashFunction1(int key) {
        return key % size;
    }
    int hashFunction2(int oldKey, int i, int k) {
        //cout << "z " << key + i * k;
        int key = (oldKey + i * k) % size;
        return key;
    }
    int resolutionOfСollisions(int key, int k, Data toAdd) {
        int oldKey = key;
        bool isFound = false;
        int i = 0;
        while (i <= (size / k) && !isFound) {
            key = hashFunction2(oldKey, i, k);
            if (nodes[key].d == toAdd && nodes[key].isHere)
                return -2;
            if (!nodes[key].isHere) {
                isFound = true;
            }
            i++;
            //cout << key << " ";
        }
        //cout << endl;
        if (isFound) {
            int check = key;
            oldKey = key;
            i = 0;
            while(i <= (size / k) && nodes[check].d != Data()){
                check = hashFunction2(oldKey, i, k);
                if (nodes[check].d == toAdd && nodes[check].isHere)
                    return -2;
                i++;
            }
            return key;
        }
        return -1;
    }
    void resize(double mulResize) {
        if (size == defaultSize)
            return;
        int newSize = int(size * mulResize);
        if (defaultSize >= newSize)
            newSize = defaultSize;
        vector<Node> newNodes(newSize);
        int pastSize = size;
        size = newSize;
        busyNodes = 0;
        std::swap(nodes, newNodes); // новое становится старым, старое становится новым
        for (int i = 0; i < pastSize; i++) {
            if(newNodes[i].isHere)
                add(newNodes[i].d);
        }
        newNodes.clear();

    }

    void add(Data& d) {
        if (busyNodes + 1 >= int(resizeGreater * size)) {
            resize(2);
        }
        int position = hashFunction1(d.key); // тут выбираю куда вставлять элемент
        if (!nodes[position].isHere) {
            int check = find(position, KKK, d);
            if (check < 0) {
                nodes[position] = Node(d);
                busyNodes++;
            }
            else 
                cout << "Cannot add same element\n";
        }
        else {
            position = resolutionOfСollisions(position, KKK, d);
            if (position >= 0) {
                nodes[position].d = d;
                nodes[position].isHere = true;
                busyNodes++;
            }
            else if (position == -2) {
                cout << "Cannot add same element\n";
            }
            else {
                resize(2);
                add(d);
            };   
        }
    }
    int find(int key, int k, Data& d) {
        int oldKey = key;
        bool isFound = false;
        int i = 0;
        while (i <= (size / k) && !isFound && nodes[key].d != Data()) {
            //cout << key << " \n";
            key = hashFunction2(oldKey, i, k);
            cout << key << " \n";
            if (nodes[key].isHere && nodes[key].d == d) {
                return key;
            }
            i++;
        }
        //cout << endl;
        return -1;
    }
    void remove(Data& d) {
        if (busyNodes - 1 <= int(resizeLower * size)) {
            resize(0.5);
        }
        int position = hashFunction1(d.key); // тут выбираю куда вставлять элемент
        if (nodes[position].isHere && nodes[position].d == d) {
            nodes[position].isHere = false;
            busyNodes--;
        }
        else {
            position = find(position, KKK, d);
            if (position >= 0) {
                nodes[position].isHere = false;
                busyNodes--;
            }
            else {
                cout << "Cannot find them\n";
            };
        }
    }
   
public:
    void add(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
        Data newEl = Data(c, n, l, f, p, fi, ser, sec);
        add(newEl);
    }
    void find(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
        Data findEl = Data(c, n, l, f, p, fi, ser, sec);
        int position = hashFunction1(findEl.key);
        position = find(position, KKK, findEl);
        if (position >= 0) {
            cout << "Element is on position: " << position << endl;
        }
    }
    void remove(int c, int n, std::string l, std::string f, std::string p, std::string fi, int ser, std::string sec) {
        Data remEl = Data(c, n, l, f, p, fi, ser, sec);
        remove(remEl);
    }
    void print() {
        int i = 0;
        cout << "###########################\n";
        for (auto el : nodes) {
            //if (el.isHere)
                cout << i << ". [" << el.isHere << "] "<< el.d.ph.code << " "<< el.d.ph.number << " " << el.d.lfp.lastName << " " << el.d.lfp.firstName << " " << el.d.lfp.patronymic << " " << el.d.cn.first << " " << el.d.cn.number << " " << el.d.cn.second << endl;
           // else
             //   cout << i << ". [" << el.isHere << "]\n";
            i++;
        }
        cout << "###########################\n";
    }
    HashTable(int s) {
        size = s;
        defaultSize = s;
        for (int i = 0; i < size; i++) {
            nodes.push_back(Node());
        }
        busyNodes = 0;
    }
    ~HashTable() = default;
};


int main()
{
    HashTable ht = HashTable(10);
    //ht.print();
    ht.add(88, 888, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.print();
    ht.add(88, 798, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.add(88, 768, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.print();
    ht.remove(88, 888, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.remove(88, 768, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.print();
    ht.add(88, 798, "RufTech", "Dark", "Lucifer", "T", 666, "HL");
    ht.print();
    ht.~HashTable();
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



/*
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



*/
