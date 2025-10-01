


import string

# none annotations at all
def add_world(message, times):
   """ Add the string 'world' n times """ 
   res = message

   i = 1
   while i <= times:
      res = res + " world"
      i = i + 1

   return res

# function parameter annotation and return value annotation
def add_world_using_annotation(message: str, times: int) -> str:
   """ Add the string 'world' n times """
   # variable definition annotation
   res: str = message

   i = 1
   while i <= times:
      res = res + " world"
      i = i + 1

   return res

if __name__ == '__main__':
   msg = add_world("hello", 2)
   print(msg)

   msg = add_world_using_annotation("hello", 3)
   print(msg)
