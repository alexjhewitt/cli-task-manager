//
// Created by Alex Hewitt on 4/2/25.
//
#include "Enums.h"

std::string get_priority_as_string(const Priority p)
{
    using enum Priority;
    switch (p)
    {
    case high:
        return "high";
    case medium:
        return "medium";
    case low:
        return "low";
    default:
        return "no priority";
    }
}
std::string get_status_as_string(const Status s)
{
    using enum Status;
    switch (s)
    {
    case backlog:
        return "backlog";
    case in_progress:
        return "in progress";
    case completed:
        return "completed";
    default:
        return "no status";
    }

}

