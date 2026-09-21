import matplotlib.pyplot as plt
import numpy as np

x=np.arange(-5,10,1)
m=-10
b=10
y=m*x+b

plt.axhline(y=0, linewidth=0.5, color='black')
plt.axvline(x=0, linewidth=0.5, color='black')
plt.grid(True,alpha=0.3)
plt.plot(x,y)
plt.title("grafik y=-10x+10")
plt.xlabel("X")
plt.ylabel("Y")
plt.tight_layout
plt.show()