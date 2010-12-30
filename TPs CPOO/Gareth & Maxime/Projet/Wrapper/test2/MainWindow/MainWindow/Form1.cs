using System;
using mWrapper4;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace MainWindow
{
    public partial class Form1 : Form
    {

        WrapperFacade facade;

        public Form1()
        {
            InitializeComponent();  
            //Initialiser la facade via le wrapper
            facade = new WrapperFacade();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            facade.modifNbJoueur(1);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            facade.modifNbJoueur(2);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //incrémente 3 en 3
            facade.execute();
        }

       
    }
}
