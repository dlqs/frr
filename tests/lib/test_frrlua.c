#include "assert.h"
#include "lib/frrlua.h"

static void test_encode_decode()
{
	lua_State *L = luaL_newstate();

  long long a = 123;
  long long b = a;
  lua_tointegerp(L, &a);
  lua_decodeintegerp(L, -1, &a);
  assert(a == b);
  assert(lua_gettop(L) == 0);

  time_t time_a = 100;
  time_t time_b = time_a;
  lua_pushtimet(L, &time_a);
  lua_decode_timet(L, -1, &time_a);
  assert(time_a == time_b);
  assert(lua_gettop(L) == 0);

  char* str_a = "Hello";
  char* str_b;
  strcpy(str_b, str_a);
  lua_pushstring_wrapper(L, str_a);
  lua_decode_stringp(L, -1, &str_a);
  assert(strcmp(str_a, str_b) == 0);
  assert(lua_gettop(L) == 0);
}

int main(int argc, char **argv)
{
  test_encode_decode();
}
