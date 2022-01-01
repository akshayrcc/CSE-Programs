package Draewr;
import java.awt.Point;
import java.util.ArrayList;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import Draewr.Drawer;
public class ProgEdge extends javax.swing.JDialog {
ArrayList<Point> plist;
public ProgEdge(java.awt.Frame parent, boolean modal) {
        super(parent, modal);
        initComponents();
        plist = new ArrayList<Point>();
        jTPoints.removeColumn(jTPoints.getColumn("Title 2"));
        jTPoints.removeColumn(jTPoints.getColumn("Title 3"));
        jTPoints.removeColumn(jTPoints.getColumn("Title 4"));
        DefaultTableModel dm = (DefaultTableModel) jTPoints.getModel();
        dm.setColumnIdentifiers(new String[]{"Points"});
        dm.removeRow(0);
        dm.removeRow(0);
        dm.removeRow(0);
        dm.removeRow(0);
        this.setAlwaysOnTop(false);
    }
    @SuppressWarnings("unchecked")
    private void initComponents() {
        jScrollPane1 = new javax.swing.JScrollPane();
        jTPoints = new javax.swing.JTable();
        jPanel1 = new javax.swing.JPanel();
        jTextField1 = new javax.swing.JTextField();
        jTextField2 = new javax.swing.JTextField();
        jBAdd = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jBClear = new javax.swing.JButton();
        jBDraw = new javax.swing.JButton();
        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
        jTPoints.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane1.setViewportView(jTPoints);

        jPanel1.setBorder(javax.swing.BorderFactory.createTitledBorder("Add Point"));

        jTextField1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                actionPerformed(evt);
            }
        });
        jBAdd.setText("Add");
        jBAdd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBAddActionPerformed(evt);
            }
        });
        jLabel1.setText("X :");
        jLabel2.setText("Y:");
        jBClear.setText("Clear All Points");
        jBClear.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBClearActionPerformed(evt);
            }
        });
        jBDraw.setText("Draw");
        jBDraw.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBDrawActionPerformed(evt);
            }
        });
        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel2)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jBAdd)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jBClear)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jBDraw)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1)
                    .addComponent(jLabel2)
                    .addComponent(jBAdd)
                    .addComponent(jBClear)
                    .addComponent(jBDraw))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(26, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 123, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        pack();
    }
    private void jBAddActionPerformed(java.awt.event.ActionEvent evt) {
     
        DefaultTableModel dm = (DefaultTableModel) jTPoints.getModel();
        String s = "" + jTextField1.getText() + "," + jTextField2.getText();
        if (!jTextField1.getText().equals("") && !jTextField2.getText().equals("")) {
            int x, y;
            try {
                x = Integer.parseInt(jTextField1.getText());
                y = Integer.parseInt(jTextField2.getText());
            } catch (NumberFormatException n) {
                return;
            }
            dm.addRow(new String[]{s});
            plist.add(new Point(x, y));
            System.out.println("Added : " + plist.get(plist.size() - 1).toString());
        }
    }
    private void jBClearActionPerformed(java.awt.event.ActionEvent evt) {
        // TODO add your handling code here:
        DefaultTableModel dm = (DefaultTableModel) jTPoints.getModel();
        while (jTPoints.getRowCount() != 0) {
            dm.removeRow(0);
        }
        while (plist.size() != 0) {
            System.out.println(plist.get(0).toString());
            plist.remove(0);
        }
    }
    private void jBDrawActionPerformed(java.awt.event.ActionEvent evt) {
        // TODO add your handling code here:
        if (plist.size() < 3) {
            JOptionPane.showConfirmDialog(rootPane, "Number of points must be 3 or more", "Error", JOptionPane.WARNING_MESSAGE);
            return;
        }
        Drawer d = new Drawer(plist);
        d.setVisible(rootPaneCheckingEnabled);
        d.setSize(600,460);
        d.setAlwaysOnTop(false);
    }
    public static void main(String args[]) {
        
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Windows".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(ProgEdge.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ProgEdge.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ProgEdge.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ProgEdge.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
    
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                ProgEdge dialog = new ProgEdge(new javax.swing.JFrame(), true);
                dialog.addWindowListener(new java.awt.event.WindowAdapter() {
                    @Override
                    public void windowClosing(java.awt.event.WindowEvent e) {
                        System.exit(0);
                    }
                });
                dialog.setVisible(true);

            }
        });
    }
    private javax.swing.JButton jBAdd;
    private javax.swing.JButton jBClear;
    private javax.swing.JButton jBDraw;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTPoints;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    
}
