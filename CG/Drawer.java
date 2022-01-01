import java.awt.Graphics;
import java.awt.Point;
import java.io.DataInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JFrame;
public class Drawer extends JFrame {
	private static final long serialVersionUID = 1L;
	ArrayList<Point> pl;
    Drawer(ArrayList<Point> plist) {
        pl = plist;
    }
    @Override
    public void paint(Graphics g) {
        int n = pl.size();
        System.out.println("TOT : "+n);
        for (int i = 0; i <= n - 2; i++) {
            g.drawLine((int) pl.get(i).getX(), (int) pl.get(i).getY(), (int) pl.get(i + 1).getX(), (int) pl.get(i + 1).getY());
        }
        g.drawLine((int) pl.get(0).getX(), (int) pl.get(0).getY(), (int) pl.get(n - 1).getX(), (int) pl.get(n - 1).getY());
    }
}
