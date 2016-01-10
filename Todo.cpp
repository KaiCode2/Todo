/*
Todo.cpp

Created by Kai Aldag on January 6th, 2016

TODO: write file info

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
#include <stdlib.h>
#include <iostream>
#include <getopt.h>
#include <fstream>
#include "Task.h"


static const char *optstring = "hn:d:l";

bool do_help, do_new, do_done, do_list = false;
char *task_id;

static struct option longopts[] = {
  { "help", optional_argument, NULL, 'h'},
  { "new",  optional_argument, NULL,  'n'},
  { "done", optional_argument, NULL, 'd'},
  { "list", optional_argument, NULL, 'l'},
  { NULL,   0,                 NULL , 0}
};

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

int main(int argc, char* const argv[]) {
  if (argc < 2) {
    show_help(argv[0]);
    return EXIT_SUCCESS;
  }

  int ch;

  while ((ch = getopt_long(argc, argv, optstring, longopts, NULL)) != -1) {
    switch (ch) {
      case 'h':
            std::cout << "Help\n";
            do_help = true;
            break;
      case 'n':
            std::cout << "New " << optarg << "\n";
            do_new = true;
            task_id = optarg;
            break;
      case 'd':
            std::cout << "Done " << optarg << "\n";
            do_done = true;
            task_id = optarg;
            break;
      case 'l':
            std::cout << "List\n";
            do_list = true;
            break;
      case '?':
          std::cout << "Unknown argument supplied.\n";
          break;
    }
  }

  // TODO: open up _todo_entries.txt and use it for reading and writing task info


  if (do_help) {
    show_help(argv[0]);
  } else if (do_list) {
    // TODO: list tasks
  } else if (do_new && task_id != NULL) {
    // TODO: create task
  } else if (do_done && task_id != NULL) {
    // TODO: delete task
  }

  return EXIT_SUCCESS;
}
