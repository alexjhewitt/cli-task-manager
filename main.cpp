#include <ctime>
#include <iostream>
#include "Enums.h"
#include "Task.h"
#include "TaskManager.h"
// std::string display_menu()
// {
//
// }

void get_command(const std::string_view command)
{
    if (command == "add")
    {
        std::cout << "Add command detected!" << '\n';
    } else if (command == "update")
    {
        std::cout << "Update command detected!" << '\n';
    } else if (command == "delete")
    {
        std::cout << "Delete command detected!" << '\n';
    } else if (command == "mark-in-progress")
    {
        std::cout << "Mark In Progress command detected!" << '\n';
    } else if (command == "mark-done")
    {
        std::cout << "Mark done command detected!" << '\n';
    } else if (command == "list")
    {
        std::cout << "List Progress command detected!" << '\n';
    }
}

std::string get_user_input()
{
    std::cout << "task-cli > ";
    std::string user_input;
    std::getline(std::cin, user_input);
    return user_input;
}

std::string get_current_time() {
    std::time_t t {std::time(nullptr)};
    char time[100];
    std::strftime(time, sizeof(time), "%m.%d.%Y  %T\n", std::localtime(&t));
    std::cout << time;
    return time;
}

std::vector<std::string> split_command(const std::string_view command)
{
    std::vector<std::string> split_command {};
    std::string word {};
    for (const char c : command)
    {
        if (!isalnum(c) && c != '-' && c != '\"')
        {
            split_command.push_back(word);
            word = "";
            continue;
        }
        word += static_cast<char>(std::tolower(c));
    }
    if (!word.empty())
    {
        split_command.push_back(word);
    }
    return split_command;
}

int main()
{

    while (true)
    {
        std::string command {get_user_input()};
        std::vector split {split_command(command)};
        get_command(split.at(0));
        if (command == "q")
        {
            break;
        }
    }
    // auto tm = TaskManager();

    // tm.add_task("Task 1", Priority::low, Status::in_progress);
    // tm.add_task("test 2", Priority::high, Status::backlog);
    // tm.list_tasks();
    return 0;
}