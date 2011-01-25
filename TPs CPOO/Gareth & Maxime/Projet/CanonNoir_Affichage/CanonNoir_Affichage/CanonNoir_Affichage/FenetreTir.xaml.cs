using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using mWrapper;
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

    public partial class FenetreTir : Window
    {

        WrapperFacade facade;

        public FenetreTir(WrapperFacade f)
        {
            InitializeComponent();
            facade = f;
            int index = 0;
            int indice_largeur = (int)canvas1.Width / /*taille du vecteur*/ facade.getSizeHistogramme();
            int indice_hauteur = (int)canvas1.Height / /*hauteur Maximale*/ 4;
            double l_actuelle = 0;

            MessageBox.Show("Taille de l'histo" + facade.getSizeHistogramme());

            for (int i = 0; i < facade.getSizeHistogramme(); i++)
            {
                double l = facade.getLongueurHisto(i);
                double h = facade.getHauteurHisto(i);

                Rectangle rec = new Rectangle();
                rec.Fill = Brushes.Blue;
                rec.Width = l/*longueur*/ * indice_largeur;
                rec.Height = h/*hauteur*/ * indice_hauteur;

                canvas1.Children.Insert(index, rec);
                Canvas.SetLeft(rec, l_actuelle);
                Canvas.SetBottom(rec, 0);
                l_actuelle += l;
                index++;
            }
                       
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }
    }
}
