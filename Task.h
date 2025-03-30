//
// Created by Alex Hewitt on 3/30/25.
//

#ifndef TASK_H
#define TASK_H

#include <string>

enum class Task_Priority {low, medium, high};
enum class Task_Status {backlog, in_progress, completed};

class Task {
public:
    Task();
private:
    int id;
    std::string description;
    Task_Priority priority;
    Task_Status status;
};



#endif //TASK_H
