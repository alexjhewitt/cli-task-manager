#include <ctime>
#include <iostream>
#include "Enums.h"
#include "Task.h"
#include "TaskManager.h"
// std::string display_menu()
// {
//
// }
std::string get_user_input()
{
    std::cout << "task-cli > ";
    std::string user_input;
    std::getline(std::cin, user_input);
    return user_input;
}
int main()
{
    std::time_t t {std::time(nullptr)};
    char time[100];
    std::strftime(time, sizeof(time), "%m.%d.%Y %T", std::localtime(&t));

    while (true)
    {
        std::string command {get_user_input()};
        if (command == "q")
        {
            break;
        }
    }
    auto tm = TaskManager();

    tm.add_task("Task 1", Priority::low, Status::in_progress);
    tm.add_task("test 2", Priority::high, Status::backlog);
    tm.list_tasks();
    return 0;
}