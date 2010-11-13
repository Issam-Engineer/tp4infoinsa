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
using mWrapper;

namespace WpfJeu
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
      
        WrapperTir tDC;
        public MainWindow()
        {
            InitializeComponent();
            // Création de notre Objet Tir via le Wrapper
            tDC = new WrapperTir();
        }
        private void ClickC(object sender, RoutedEventArgs e)
        {
            // Affichage d’une MessageBox avec les coordonnées du bouton Canon
            MessageBox.Show("BOUMM ! (" + Canvas.GetLeft(Canon) + "," + Canvas.GetTop(Canon) + ")");
            // affichage dans la console des données enregistrées
            tDC.affiche();
        }
        private void MouseDown(object sender, MouseButtonEventArgs e)
        {
            // On récupère la position du MouseDown
            Point pt = e.GetPosition(canvas1);
            //On ajoute ces coordonnées dans notre structure (DLL C++)
            tDC.add((int)pt.X, (int)pt.Y);
            // On déplace le Bouton à ces coordonnées
            Canvas.SetLeft(Canon, pt.X );
            Canvas.SetTop(Canon, pt.Y); 
        }
        private void MouseRightDown_canvas(object sender, MouseButtonEventArgs e)  {
            // Affichage du routage provenant du Canvas
            routage.Items.Add("MouseRD_canvas");
        }
        private void MouseRightDown_Button(object sender, MouseButtonEventArgs e)     {
            // Affichage du routage provenant du Button
            routage.Items.Add("MouseRD_Button");
        }
        private void MouseRightDown_Image(object sender, MouseButtonEventArgs e)     {
            // Affichage du routage provenant du Image
            routage.Items.Add("MouseRD_Image");
        }
        private void PreviewMouseRightDown_canvas(object sender, MouseButtonEventArgs e)
        {
            // Affichage du routage provenant du Canvas
            routage.Items.Add("PreviewMouseRD_canvas");
        }
        private void PreviewMouseRightDown_Button(object sender, MouseButtonEventArgs e)
        {
            // Affichage du routage provenant du Button
            routage.Items.Add("PreviewMouseRD_Button");
        }
        private void PreviewMouseRightDown_Image(object sender, MouseButtonEventArgs e)
        {
            // Affichage du routage provenant du Image
            routage.Items.Add("PreviewMouseRD_Image");
        }
    }
}
