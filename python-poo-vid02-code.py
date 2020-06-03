class Fraccion: 
  def __init__(self, num=0, den=1):
    if isinstance(num,int):
      self.num = num            
    else: 
      self.num=0
    if isinstance(den,int) and den!=0:
      self.den = den            
    else: 
      self.den=1    
  
 # def __del__(self):
 #  print("Destruyendo el objeto: ", self.num, "/", self.den)
    
  def __str__(self):
    return "{" + str(self.num) + "/" + str(self.den) + "}"
    
  def __mul__(self, obj):
    n = self.num * obj.num
    d = self.den * obj.den
    x = Fraccion(n,d)
    return x

  def __add__(self, obj):
    n = self.num * obj.den + self.den * obj.num 
    d = self.den * obj.den
    x = Fraccion(n,d)
    return x
  
  def __eq__(self, b):
    if self.num/self.den == b.num/b.den:
      return True
    else:
      return False



def main(): 
  a = Fraccion(2,3)
  b = Fraccion(4,5)
  r=a+b
  print(r)
  print(a*b)
  print( a == b )
  

if __name__ == "__main__":
    main()