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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CanonNoir_Affichage
{

    public partial class MainWindow : Window
    {
        WrapperFacade facade;

        public MainWindow(WrapperFacade f)
        {
            InitializeComponent();
            facade = f;
            textBox4.Text = "" + (facade.getNumJCourant());
        }

        private void SourisDown(object sender, MouseButtonEventArgs e)
        {
            Point p = e.GetPosition(Plateau);
            //Gérer l'affichage par case
            int x = (int)(((int)p.X * 11) / ((int)Plateau.Width));
            int y = (int)(((int)p.Y * 8) / ((int)Plateau.Height));

            //if On est avec Left joueur Rouge
            Canvas.SetLeft(JoueurRouge, (x * ((Plateau.Width) / 11)));
            Canvas.SetTop(JoueurRouge, (y * ((Plateau.Height) / 8)));
            

            //MessageBox.Show("x =" + x + " et y=" + y);
            String Caseclic = "";
            if((x == 0 || x == 10) && (y == 0 || y == 7)) {
                Caseclic = "Case Port";
                if(x==0 && y ==0){ Caseclic += " Rouge"; }
                else if(x == 10 && y == 0){ Caseclic += " Jaune"; }
                else if(x == 0 && y == 7){ Caseclic += " Vert"; }
                else { Caseclic += " Bleu"; }
            } else if((x == 7 && y == 1) || ((x == 1 || x == 9) && y == 4) || (x == 3 && y == 7)) {
                Caseclic = "Case Canon Noir";
            } else if((x == 4 && (y == 2 || y == 5)) || (x==6 && (y == 3 || y == 6))) {
                Caseclic = "Case Trésor";
            } else if(((x == 2 || x == 3 || x == 7 || x == 8) && y == 1)
                || ((x == 1 || x == 4 || x == 6 || x == 9) && y == 2)
                || ((x == 1 || x == 6 || x == 9) && y == 3)
                || ((x == 1 || x == 6 || x == 9) && y == 4)
                || ((x == 2 || x == 3 || x == 4 || x == 6 || x == 9) && y == 5)
                || ((x == 1 || x == 2 || x == 3 || x == 4 || x == 6) && y == 6)) {
                Caseclic = "Case Contour Île";
            } else if(((x == 1 || x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9) && (y == 0 || y == 7))
                        || ((x == 0 || x == 10) && (y == 1 || y == 2 || y == 3 || y == 4 || y == 5 || y == 6))) {
                Caseclic = "Case Bordure Plateau";
            } else if(((x == 2 || x == 3 || x == 7 || x == 8)
                    && (y == 2 || y == 3 || y == 4 || y == 5))) {
                Caseclic = "Case Île";
                   
            } else if (((x == 2 || x == 3 || x == 7 || x == 8)
                    && (y != 2 && y != 3 && y != 4 && y != 5))
                    || x == 1 || x == 4 || x == 5 || x == 6 || x == 9 || x == 10) {
                Caseclic = "Case Navigable";
            } 

            //MessageBox.Show(Caseclic);
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            textBox4.Text = "" + (facade.getNumJCourant());
            facade.setClicDe(true);
            facade.execute();
            textBox2.Text = ""+facade.getde1();
            textBox3.Text = "" + facade.getde2();
            textBox2.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
            textBox3.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
            if (facade.getInitialisationOK())
            {
                MessageBox.Show("C'est parti ! A vous de jouer");
            }
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

        private void Window_Loaded_1(object sender, RoutedEventArgs e)
        {

        }

   
    }
};