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
    /// Logique d'interaction pour CanonNoirIntro.xaml
    /// </summary>
    public partial class CanonNoirIntro : Window
    {
        public CanonNoirIntro()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
           FenetreInit m = new FenetreInit();
           m.Show();
           /*MainWindow m2 = new MainWindow();
           m2.Show();*/
           Close();
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            
        }

        private void image2_ImageFailed(object sender, ExceptionRoutedEventArgs e)
        {

        }
    }
};
