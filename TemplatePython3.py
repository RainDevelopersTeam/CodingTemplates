import time
import sys
import os

import math
import numpy

def debugger(function):
  def wrapped():
    function()
    
    with open("./debugfiles/debugger.log") as debug:
      debug.write(f"[{time.time()] Debug started sucsess.}")
      
      time.sleep(3)
   
      debug.write(f"[{time.time()] Debug ended sucsess.}")
  return wrapped


@debugger
def main():
 
  return 0

if __name__ == "__main__":
  main()