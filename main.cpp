#include <stdio.h>
#include <winsock2.h>
#include <mysql.h>


int main(int argc, char **argv)
{
  MYSQL *conn = mysql_init(NULL);

  if (!(mysql_real_connect(conn, "localhost", "databaseUser", "databaseUserpassword", "databaseName", 0, NULL, 0)))
  {
      printf("%s\n", mysql_error(conn));
      mysql_close(conn);
      exit(1);
  }
  printf ("Connection Succesful");
  mysql_close(conn);
  return 0;
}
