
void print_trace(const char *s);

#define INFO(msg)                                                              \
  printf("info: [%s] - [%s:%d] ", __func__, __FILE__, __LINE__);                   \
  printf("%s\n", msg)

#define PTRACE print_trace(__func__)
#define PENTER INFO("ENTER")
#define PLEAVE INFO("LEAVE")
