
#include <stdio.h>
#include <string.h>

const int BUFFER_SIZE = 1024;

// Grabs git log output from midnight
FILE* get_git_log() {
  FILE* git_log = popen("git log --since=midnight", "r");
  if (git_log == NULL) {
    perror("Failed to run git log");
    return NULL;
  }
  return git_log;
}

// Parses git log output to count commits
int get_commits() {
  FILE* git_log = get_git_log();

  int commit_count = 0;
  char buffer[BUFFER_SIZE];
  while (fgets(buffer, sizeof(buffer), git_log) != NULL) {
    if (memcmp(buffer, "commit", 6) == 0) {
      commit_count++;
    }
  }

  pclose(git_log);
  return commit_count;
}
