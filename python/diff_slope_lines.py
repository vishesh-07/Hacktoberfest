import numpy as np
import matplotlib.pyplot as plt
import time

x = np.arange(0,2)

for m in np.arange(0,6,0.5):
    y = m*x
    plt.plot(x,y)
    print(f'x={x}, m={m}, y: {y}')

plt.show()