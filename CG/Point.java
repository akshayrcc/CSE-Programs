import java.awt.Graphics;
public class Point {
    float x, y;
    public Point() {
        x = 0;
        y = 0;
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    float getX() {
        return x;
    }
    float getY() {
        return y;
    }
    void setXY(float x, float y) {
        this.x = x;
        this.y = y;
    }
    void plot(Graphics g) {
        g.drawLine((int) x, (int) y, (int) x, (int) y);
    }
    @Override
    public String toString() {
        return ("(" + x + "," + y + ")");
    }
}

