using System;
using mWrapper;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace CanonNoir_Affichage
{
    public partial class FenetreInit : Window
    {

        //INITIALISER LE WRAPPER
        WrapperFacade facade;

        public FenetreInit()
        {
            InitializeComponent();
            facade = new WrapperFacade();
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjoueur=2
            comboBox1.IsEnabled = true;
            comboBox2.IsEnabled = true;
            comboBox3.IsEnabled = true;
            comboBox4.IsEnabled = true;
            button2.IsEnabled = false;
            button3.IsEnabled = true;
            button4.IsEnabled = true;
            button1.IsEnabled = true;
            label1.Content = "J1 (Port 1) :";
            label2.Content = "J1 (Port 2) :";
            label3.Content = "J2 (Port 1) :";
            label4.Content = "J2 (Port 2) :";
        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=3
            comboBox1.IsEnabled = true;
            comboBox2.IsEnabled = true;
            comboBox3.IsEnabled = true;
            comboBox4.IsEnabled = false;
            button3.IsEnabled = false;
            button2.IsEnabled = true;
            button4.IsEnabled = true;
            button1.IsEnabled = true;
            label1.Content = "Joueur 1 :";
            label2.Content = "Joueur 2 :";
            label3.Content = "Joueur 3 :";
            label4.Content = "Joueur 4 :";
        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=4
            comboBox1.IsEnabled = true;
            comboBox2.IsEnabled = true;
            comboBox3.IsEnabled = true;
            comboBox4.IsEnabled = true;
            button4.IsEnabled = false;
            button2.IsEnabled = true;
            button3.IsEnabled = true;
            button1.IsEnabled = true;
            label1.Content = "Joueur 1 :";
            label2.Content = "Joueur 2 :";
            label3.Content = "Joueur 3 :";
            label4.Content = "Joueur 4 :";
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            if (((comboBox1.SelectedValue == comboBox2.SelectedValue) || (comboBox1.SelectedItem == comboBox3.SelectedItem)))
            { } else {
                Close();
            }
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }
    }
}
