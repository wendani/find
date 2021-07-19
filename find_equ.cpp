#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

class Entry
{
public:
    std::string a;
    std::string b;
    Entry(const std::string &a, const std::string &b) :
        a(a),
        b(b)
    {
    }

    bool operator<(const Entry &other) const
    {
        std::cout << "In operator<()" << std::endl;
        return a < other.a;
    }

    bool operator==(const Entry &other) const
    {
        std::cout << "In operator==()" << std::endl;
        return a == other.a;
    }
};

int main(int argc, char *argv[])
{
    std::map<Entry, std::string> entries;
    std::map<Entry, std::string>::iterator it;

    Entry entry{"hello", "world"};
    entries[entry] = "!";

    for (it = entries.begin(); it != entries.end(); ++it)
    {
        std::cout << it->first.a << ", " << it->first.b << " => " << it->second << std::endl;
    }
    std::cout << std::endl;

    {
        Entry e{"hello", "earth"};
        if (entry == e)
        {
            std::cout << "Equal key" << std::endl;
        }
        std::cout << "Calling find" << std::endl;
        it = entries.find(e);
        std::cout << "Called find" << std::endl;
        if (it != entries.end())
        {
            std::cout << "Entry found: " << it->first.a << ", " << it->first.b << " => " << it->second << std::endl;
        }
    }
    std::cout << std::endl;

    {
        Entry e{"hell", "world"};
        if (entry == e)
        {
            std::cout << "Equal key" << std::endl;
        }
        std::cout << "Calling find" << std::endl;
        it = entries.find(e);
        std::cout << "Called find" << std::endl;
        if (it != entries.end())
        {
            std::cout << "Entry found: " << it->first.a << ", " << it->first.b << " => " << it->second << std::endl;
        }
    }
    std::cout << std::endl;

    {
        Entry e{"hello", "world"};
        if (entry == e)
        {
            std::cout << "Equal key" << std::endl;
        }
        std::cout << "Calling find" << std::endl;
        it = entries.find(e);
        std::cout << "Called find" << std::endl;
        if (it != entries.end())
        {
            std::cout << "Entry found: " << it->first.a << ", " << it->first.b << " => " << it->second << std::endl;
        }
    }
    return 0;
}
