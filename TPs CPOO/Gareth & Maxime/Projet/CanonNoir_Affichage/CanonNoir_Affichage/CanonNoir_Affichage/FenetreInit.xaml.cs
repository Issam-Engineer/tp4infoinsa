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
            Close();
        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=3
            Close();
        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=4
            Close();
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }
    }
}
