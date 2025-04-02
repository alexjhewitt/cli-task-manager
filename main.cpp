#include <iostream>
#include "Task.h"
#include "TaskManager.h"
#include "Enums.h"
// std::string display_menu()
// {
//
// }
int main()
{
    auto tm = TaskManager();
    tm.add_task(1, "Task 1", Priority::high, Status::backlog);
    tm.list_tasks();
    return 0;
}