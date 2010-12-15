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

        private void SourisDown(object sender, MouseButtonEventArgs e)
        {
            Point p = e.GetPosition(Plateau);
            //Gérer l'affichage par case
            int x = (int)(((int)p.X * 11) / ((int)Plateau.Width));
            int y = (int)(((int)p.Y * 8) / ((int)Plateau.Height));

            MessageBox.Show("x =" + x + " et y=" + y);
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            FenetreInit f = new FenetreInit();
            f.Show();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void button5_Click(object sender, RoutedEventArgs e)
        {
            Close();
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