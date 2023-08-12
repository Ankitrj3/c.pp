#include<iostream>
using namespace std;


class Table{

    private:
        int tableNum;

    public:
        void takeInput(int p)
        {
            tableNum = p;
        }

        void printTable()
        {
            for(int i = 1; i <= 10; i++)
            {
                std::cout << tableNum * i << '\n';
            }
        }
};

int main(){

    Table table;
    
    int tableNum;
    std::cin >> tableNum;

    table.takeInput(tableNum);
    table.printTable();
}