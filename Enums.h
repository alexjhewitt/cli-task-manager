//
// Created by Alex Hewitt on 4/2/25.
//

#ifndef ENUMS_H
#define ENUMS_H
#include <string>

enum class Priority {low, medium, high};
enum class Status {backlog, in_progress, completed};
std::string get_priority_as_string(Priority p);
std::string get_status_as_string(Status s);

#endif //ENUMS_H
