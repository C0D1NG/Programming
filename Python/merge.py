import numpy as np
from matplotlib import pyplot as plt

# array of theta values ranging from 0 to 10
theta = np.linspace(0, 10, 200)

# r = r0 + cos θ
r = 0.8 + np.cos(theta)

r1 = 1.0 + np.cos(theta)

r2 = 1.2 + np.cos(theta)

# x and y values for r=0.8
x = r * np.cos(theta)

y = r * np.sin(theta)

#x and y values for r = 1.0
x1 = r1 * np.cos(theta)

y1 = r1 * np.sin(theta)

#x and y values for r = 1.2
x2 = r2 * np.cos(theta)

y2 = r2 * np.sin(theta)

# plot licamon for r = 0.8
plt.plot(x,y)
plt.title('r=0.8')
plt.show()


# plot licamon for r = 1.0
plt.plot(x1,y1)
plt.title('r=1.0')
plt.show()

# plot licamon for r = 1.2
plt.plot(x2,y2)
plt.title('r=1.2')
plt.show()