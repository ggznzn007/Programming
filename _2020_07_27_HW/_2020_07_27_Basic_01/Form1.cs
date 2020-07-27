using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
//1_원을 마우스 클릭하면 색칠하기
namespace _2020_07_27_Basic_01
{
    public partial class Form1 : Form
    {
        const int RAD = 200;
        int x = 70, y = 70;
        
        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.MouseDown += Form1_MouseDown;
            this.MouseMove += Form1_MouseMove;
        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            this.x = e.X;
            this.y = e.Y;
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            if(e.Button==MouseButtons.Left)
            {
                Invalidate();
            }
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.DarkBlue, 7);
            g.DrawEllipse(myPen, x, y, RAD, RAD);
            Pen myPen1 = new Pen(Brushes.Yellow, 7);
            g.DrawRectangle(myPen1, x, y, RAD, RAD);
            
        }
    }
}
