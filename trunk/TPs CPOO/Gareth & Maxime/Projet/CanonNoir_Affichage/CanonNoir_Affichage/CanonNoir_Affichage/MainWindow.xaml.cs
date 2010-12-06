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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CanonNoir_Affichage
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Plateau_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {

        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            FenetreInit f = new FenetreInit();
            f.Show();
        }

    

        /*public void MouseDown(object sender,MouseButtonEventArgs e){
            //On récupère la position du MouseDown
            Point pt = e.GetPosition(Plateau);
            //On déplace le joueur à ces coordonnées
            Canvas.SetLeft();
            Canvas.SetTop();
        }*/
    }
};