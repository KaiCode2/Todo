/* Created by Kai Aldag on January 6th, 2016

This module

Examples:
  Todo new "write email to dan"
    This will create a new task with the title of "write email to dan", to mark this task as complete see the two below examples.
  Todo done "write email to dan"
    This will delete the task we created above, alternatively we could delete it by indexing it; see below.
  Todo done #1
    Tasks can be refernced base on their numbers. Numbers are assigned similar to a queue therefore the oldest task will have lowest numbers and vice versa.
  Todo list
    This will present your current list of todos.
  Todo swap [task] [task]
    This will swap their order
*/

#include <stdio.h>
#include <iostream>

static void show_help(std::string name) {
  std::cerr << "Usage: " << name
              << "Options:\n"
              << "\t-h,-help\t\t\tShow this help message\n"
              << "\t-n, new [task name]\t\tCreates new task to queue\n"
              << "\t-d, done [task identifier]\tMarks task as complete\n"
              << "\t-l, list\t\t\tLists current tasks\n"
              << "\t-s, swap [task identifier] [task identifier]\tSwaps the tasks' number\n\n"
              << "Examples:\n"
              << "\tTodo new \"write email to dan\"\n"
              << "\t\tThis will create a new task with the title of \"write email to dan\", to mark this task as complete see the two below examples.\n"
              << "\tTodo done \"write email to dan\"\n"
              << "\t\tThis will delete the task we created above, alternatively we could delete it by indexing it; see below.\n"
              << "\tTodo done #1\n"
              << "\t\tTasks can be refernced base on their numbers. Numbers are assigned similar to a queue therefore the oldest task will have lowest numbers and vice versa.\n"
              << "\tTodo list\n"
              << "\t\tThis will present your current list of todos.\n"
              << "\tTodo swap [task] [task]\n"
              << "\t\tThis will swap their order\n\n"
              << std::endl;
}

int main(int argc, const char* argv[]) {
  if (argc < 2) {
    show_help(argv[0]);
    return 0;
  }

  // TODO: parse input and handle it
  return 0;
}
