/* Created by Kai Aldag on January 7th, 2016

TODO: write file info

*/

#include <stdio.h>
#include <ctime>


struct Task {
  char *title; // Title of task
  int priority; // This is simply the elements index in the task queue
  time_t created; // Time the task was created
}
