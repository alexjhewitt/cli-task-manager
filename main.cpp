#include <iostream>
#include "Enums.h"
#include "Task.h"
#include "TaskManager.h"
// std::string display_menu()
// {
//
// }

void run_command(const std::string_view command, TaskManager &task_manager)
{
    if (command == "add")
    {
        std::cout << "Add command detected!" << '\n';
        task_manager.add_task(Task(1, "a", Status::backlog, Priority::low, "no", "time"));

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
        task_manager.list_tasks();
        std::cout << "List Progress command detected!" << '\n';
    } else
    {
        std::cout << "Unrecognized command, try again!" << '\n';
    }
}

std::string get_user_input()
{
    std::cout << "task-cli > ";
    std::string user_input;
    std::getline(std::cin, user_input);
    return user_input;
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
    TaskManager task_manager{};


    while (true)
    {
        std::vector<std::string> command_list {split_command(get_user_input())};
        std::string& command {command_list.at(0)};
        if (command == "q")
        {
            std::cout << "Exiting..." << '\n';
            break;
        }
        run_command(command, task_manager);
    }

    // tm.add_task("Task 1", Priority::low, Status::in_progress);
    // tm.add_task("test 2", Priority::high, Status::backlog);
    // tm.list_tasks();
    return 0;
}