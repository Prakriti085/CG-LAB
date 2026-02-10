ALGORITHM:

1. Input radius r and circle centre (xc, yc), then set the coordinates for the first point on the circumference of a circle centred on the origin as:
( x0,y0)=(0 , r )
2. Calculate the initial value of the decision parameter as:
p0=1-r
3. Starting with k = 0 at each position xk, perform the following test. If pk < 0, the next point
along the circle centred on (0, 0) is (xk+1, yk) and pk+1=pK+2x(k+1)+1
Otherwise the next point along the circle is (xk+1, yk-1) and pk+1=pK+2x(k+1)+1-2y(k+1)
4. Determine symmetry points in the other seven octants
5. Move each calculated pixel position (x, y) onto the circular path centred at (xc, yc) to plot the
coordinate values:
6. Repeat steps 3 to 5 until x >= y
   x=x+xc y=y+yc


INPUT:

![alt text](image.png)

OUTPUT:

![alt text](image-1.png)

CONCLUSION:

In this experiment, the Midpoint Circle Algorithm was studied and implemented to generate a circle efficiently in computer graphics. The algorithm successfully plotted all the points of a circle using only integer arithmetic, avoiding costly floating-point calculations. By exploiting the symmetry of a circle, it reduced computational effort by calculating points for only one octant and reflecting them across the remaining octants.

