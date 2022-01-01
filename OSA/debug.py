import pdb
def foo(f, a) :
    return f(a)

def bar(x) :
    return x * x
pdb.set_trace()
o=foo(bar,3)
print o
#use n and s
#n for next 
#s for subroutine
