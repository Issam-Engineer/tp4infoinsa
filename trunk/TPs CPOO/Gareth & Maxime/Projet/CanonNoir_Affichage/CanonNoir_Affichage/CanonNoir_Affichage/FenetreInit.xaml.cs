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
            button3.IsEnabled = false;
            button4.IsEnabled = false;
            button1.IsEnabled = true;
            label1.Content = "J1 (Port 1) :";
            label2.Content = "J1 (Port 2) :";
            label3.Content = "J2 (Port 1) :";
            label4.Content = "J2 (Port 2) :";
            facade.initNbJoueurs(2);
            facade.execute();
        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=3
            comboBox1.IsEnabled = true;
            comboBox2.IsEnabled = true;
            comboBox3.IsEnabled = true;
            comboBox4.IsEnabled = false;
            button3.IsEnabled = false;
            button2.IsEnabled = false;
            button4.IsEnabled = false;
            button1.IsEnabled = true;
            label1.Content = "Joueur 1 :";
            label2.Content = "Joueur 2 :";
            label3.Content = "Joueur 3 :";
            label4.Content = "Joueur 4 :";
            facade.initNbJoueurs(3);
            facade.execute();
        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
            //appeler fonction de façade qui initialise nbjouer=4
            comboBox1.IsEnabled = true;
            comboBox2.IsEnabled = true;
            comboBox3.IsEnabled = true;
            comboBox4.IsEnabled = true;
            button4.IsEnabled = false;
            button2.IsEnabled = false;
            button3.IsEnabled = false;
            button1.IsEnabled = true;
            label1.Content = "Joueur 1 :";
            label2.Content = "Joueur 2 :";
            label3.Content = "Joueur 3 :";
            label4.Content = "Joueur 4 :";
            facade.initNbJoueurs(4);
            facade.execute();
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            /*if (
                ((comboBox1.SelectedValue == comboBox2.SelectedValue) || 
                (comboBox1.SelectedItem == comboBox3.SelectedItem)))
            {*/
                int j1 =comboBox1.SelectedIndex;
                int j2 =comboBox2.SelectedIndex;
                int j3 =comboBox3.SelectedIndex;
                int j4 =comboBox4.SelectedIndex;

            //if nb joueur = 3 on doit éviter l'erreur pour le joueur 4
                if ((facade.getMotorNbJoueur()!=3 && (j1 == j2 || j1 == j3 || j1 == j4 || j2 == j3 || j2 == j4 || j3 == j4))
                    || (facade.getMotorNbJoueur()==3 && (j1 == j2 || j1 == j3 || j2 == j3)))
                {

                    MessageBoxResult m = MessageBox.Show("ERREUR : Attention il faut choisir une couleur par Port !");
                }
                else
                {
                    switch (j1)
                    {
                        case 0:
                            facade.setCoul1(1/*ROUGE*/);
                            break;
                        case 1:
                            facade.setCoul1(2/*VERT*/);
                            break;
                        case 2:
                            facade.setCoul1(3/*JAUNE*/);
                            break;
                        case 3:
                            facade.setCoul1(4/*BLEU*/);
                            break;
                    }

                    switch (j2)
                    {
                        case 0:
                            facade.setCoul2(1/*ROUGE*/);
                            break;
                        case 1:
                            facade.setCoul2(2/*VERT*/);
                            break;
                        case 2:
                            facade.setCoul2(3/*JAUNE*/);
                            break;
                        case 3:
                            facade.setCoul2(4/*BLEU*/);
                            break;
                    }

                    switch (j3)
                    {
                        case 0:
                            facade.setCoul3(1/*ROUGE*/);
                            break;
                        case 1:
                            facade.setCoul3(2/*VERT*/);
                            break;
                        case 2:
                            facade.setCoul3(3/*JAUNE*/);
                            break;
                        case 3:
                            facade.setCoul3(4/*BLEU*/);
                            break;
                    }

                    switch (j4)
                    {
                        case 0:
                            facade.setCoul4(1/*ROUGE*/);
                            break;
                        case 1:
                            facade.setCoul4(2/*VERT*/);
                            break;
                        case 2:
                            facade.setCoul1(3/*JAUNE*/);
                            break;
                        case 3:
                            facade.setCoul4(4/*BLEU*/);
                            break;
                    }

                    facade.execute();
                    // OUVRIR LA MAIN WINDOW EN PASSANT LA FACADE ! 
                    MainWindow m = new MainWindow(facade);
                    m.Show();
                    Close();
                    }
        }
            
        

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }
    }
}
