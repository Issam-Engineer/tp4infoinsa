using System;
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
    /// <summary>
    /// Logique d'interaction pour FenetreInit.xaml
    /// </summary>
    public partial class FenetreInit : Window
    {
        public FenetreInit()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjoueur=2
            textBox1.IsEnabled = true;
            comboBox1.IsEnabled = true;
            textBox2.IsEnabled = true;
            comboBox2.IsEnabled = true;
            textBox3.IsEnabled = false;
            comboBox3.IsEnabled = false;
            textBox4.IsEnabled = false;
            comboBox4.IsEnabled = false;
            button2.IsEnabled = false;
            button3.IsEnabled = true;
            button4.IsEnabled = true;
            button1.IsEnabled = true;
        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=3
            textBox1.IsEnabled = true;
            comboBox1.IsEnabled = true;
            textBox2.IsEnabled = true;
            comboBox2.IsEnabled = true;
            textBox3.IsEnabled = true;
            comboBox3.IsEnabled = true;
            textBox4.IsEnabled = false;
            comboBox4.IsEnabled = false;
            button3.IsEnabled = false;
            button2.IsEnabled = true;
            button4.IsEnabled = true;
            button1.IsEnabled = true;
        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=4
            textBox1.IsEnabled = true;
            comboBox1.IsEnabled = true;
            textBox2.IsEnabled = true;
            comboBox2.IsEnabled = true;
            textBox3.IsEnabled = true;
            comboBox3.IsEnabled = true;
            textBox4.IsEnabled = true;
            comboBox4.IsEnabled = true;
            button4.IsEnabled = false;
            button2.IsEnabled = true;
            button3.IsEnabled = true;
            button1.IsEnabled = true;
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            if (((textBox1.IsEnabled && textBox1.Text == "") ||
                (textBox2.IsEnabled && textBox2.Text == "") ||
                (textBox3.IsEnabled && textBox3.Text == "") ||
                (textBox4.IsEnabled && textBox4.Text == "")) || ((comboBox1.SelectedValue == comboBox2.SelectedValue) || (comboBox1.SelectedItem == comboBox3.SelectedItem)))
            { } else {
                Close();
            }
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }
    }
}
