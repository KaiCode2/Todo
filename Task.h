/*
Task.h

Created by Kai Aldag on January 9th, 2016

TODO: write file info

*/

#include <ctime>

struct Task {
  char *title; // Title of task
  int priority; // This is simply the elements index in the task queue
  time_t created; // Time the task was created
};
