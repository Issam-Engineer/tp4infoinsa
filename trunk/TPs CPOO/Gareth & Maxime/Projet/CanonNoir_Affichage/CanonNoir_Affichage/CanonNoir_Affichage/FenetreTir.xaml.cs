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
            int angle = (int)slider2.Value;
            int puissance = (int)slider1.Value;
            angle_box.Text = "" + angle;
            puiss_box.Text = "" + puissance;

            textBox1.Text = "Joueur " + (facade.getNumJCourant());
            InitializeComponent();
            facade = f;
            int index = 0;
            int indice_largeur = (int)canvas1.Width / /*taille du vecteur*/ (facade.getSizeHistogramme()+2);
            int indice_hauteur = (int)canvas1.Height / /*hauteur Maximale*/ 4;
            double l_actuelle = indice_largeur;

            MessageBox.Show("Taille de l'histo" + facade.getSizeHistogramme());

            int k;
            for ( k = 0 ; k < facade.getSizeHistogramme() ; k++)
            {

                double l = facade.getLongueurHisto(k);
                double h = facade.getHauteurHisto(k);

                Rectangle rec = new Rectangle();
                rec.Fill = Brushes.Brown;
                rec.Width = l/*longueur*/ * indice_largeur;
                rec.Height = h/*hauteur*/ * indice_hauteur;

                canvas1.Children.Insert(index, rec);

                Canvas.SetLeft(rec, l_actuelle);
                Canvas.SetBottom(rec, 0);

                l_actuelle = l_actuelle + (l*indice_largeur);

                index++;
            }
            button2.IsEnabled = true;
                       
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            int angle = (int) slider2.Value;
            int puissance = (int)  slider1.Value;

            facade.setAngle(angle);
            facade.setPuissance(puissance);

            facade.execute();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }

    }
}
