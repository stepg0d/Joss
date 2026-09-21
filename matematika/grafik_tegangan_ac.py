import numpy as np
import matplotlib.pyplot as plt

t = np.linspace(0, 10, 1000)
A = 10
omega = 0.125
nilai_theta = [0, np.pi, -np.pi]
plt.figure(figsize=(12, 6))
for theta in nilai_theta:
    V = A * np.sin(omega * t + theta)
    plt.plot(t,V,linewidth=2,)

plt.axhline(0, linewidth=0.8)
plt.xlabel("t")
plt.ylabel("V(t)")
plt.title(r"Grafik Fungsi Tegangan AC")
plt.grid(True, alpha=0.3)
plt.legend()
plt.xlim(0, 10)
plt.tight_layout()
plt.show()