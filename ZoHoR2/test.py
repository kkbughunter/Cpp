def Q4(x, y):
  val = str(x/y)
  # print(val)
  # val = str(355/113)
  dict = []
  for i in val:
    if(i != '.'):
      dict.append(int(i))
      
  res = []
  for i in dict:
    # if i not in res:
      res.append(i) 
    
  # print(res)

  value = ""
  value = str(x//y)
  value += '.'
  value += '('

  for i in res:
    value += str(i)
  value += ')'
  return value

x = 1; y = 2
print("Input: ", x,y, "\nOutput", Q4(x,y))  # "0.5"
x = 2; y = 1
print("Input: ", x,y, "\nOutput", Q4(x,y)) # "2"
x = 4; y = 333 
print("Input: ", x,y, "\nOutput", Q4(x,y)) # "0.(012)""
x = 355; y = 113
print("Input: ", x,y, "\nOutput", Q4(x,y)) # ....