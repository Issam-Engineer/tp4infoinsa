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
        bool debutPartie = true;
        int index = 0;

        public MainWindow(WrapperFacade f)
        {
            InitializeComponent();
            facade = f;
            textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());
            textBox1.Text = "Type : Caravelle - Pas de trésor à bord";
            textBox6.Text = "Type : Caravelle - Pas de trésor à bord";
            textBox8.Text = "Type : Caravelle - Pas de trésor à bord";
            textBox10.Text = "Type : Caravelle - Pas de trésor à bord";
            textBox5.Text = facade.getNbTresors(1) + "/3";
            textBox7.Text = facade.getNbTresors(2) + "/3";
            textBox9.Text = facade.getNbTresors(3) + "/3";
            textBox11.Text = facade.getNbTresors(4) + "/3";
            JoueurRouge.Opacity = 1;
            JoueurVert.Opacity = 1;
            JoueurJaune.Opacity = 1;
            JoueurBleu.Opacity = 1;

            if (facade.getMotorNbJoueur() == 3)
                JoueurRouge.Opacity = 0;
                JoueurVert.Opacity = 0;
                JoueurJaune.Opacity = 0;
                JoueurBleu.Opacity = 0;
                groupBox1.Opacity = 0;
                groupBox2.Opacity = 0;
                groupBox3.Opacity = 0;
                groupBox4.Opacity = 0;
            {
                int coul1 = facade.getCoul1();
                int coul2 = facade.getCoul2();
                int coul3 = facade.getCoul3();
                if (coul1 == 1 || coul2 == 1 || coul3 == 1)
                {
                    JoueurRouge.Opacity = 1;
                    groupBox1.Opacity = 1;
                }
                if (coul1 == 2 || coul2 == 2 || coul3 == 2)
                {
                    JoueurVert.Opacity = 1;
                    groupBox2.Opacity = 1;
                }
                if (coul1 == 3 || coul2 == 3 || coul3 == 3)
                {
                    JoueurJaune.Opacity = 1;
                    groupBox3.Opacity = 1;
                }
                if (coul1 == 4 || coul2 == 4 || coul3 == 4)
                {
                    JoueurBleu.Opacity = 1;
                    groupBox4.Opacity = 1;
                }
            }
            
        }

        private void SourisDown(object sender, MouseButtonEventArgs e)
        {
            Point p = e.GetPosition(Plateau);

            
            //Gérer l'affichage par case
            int x = (int)(((int)p.X * 11) / ((int)Plateau.Width) +1);
            int y = (int)(((int)p.Y * 8) / ((int)Plateau.Height) +1);
            facade.setX(x);
            facade.setY(y);
            //int CoulJC = facade.getCoulBateauCourant(); // récuperer AVANT le execute !!!


            //if (facade.getChoixBateau() == true)
            if (facade.getEtatCourant() == 4)
            {
                textBox12.Text = "Choisis la case en surbrillance où tu veux aller !";
                facade.execute();
                facade.execute();
                int CoulJ = facade.getCoulBateauCourant();
                /*if (facade.getChoixBateau() == true)
                {*/

                for (int i = 0; i <= 10; i++)
                {
                    for (int j = 0; j <= 7; j++)
                    {
                        if (facade.getAccessible(i + 1, j + 1))
                        {

                            Rectangle rec = new Rectangle();
                            SolidColorBrush mySolidColorBrush = new SolidColorBrush();
                            rec.StrokeThickness = 2;

                            if (CoulJ == 1)
                            {
                                rec.Stroke = Brushes.Red;
                            }
                            else if (CoulJ == 2)
                            {
                                rec.Stroke = Brushes.Green;
                            }
                            else if (CoulJ == 3)
                            {
                                rec.Stroke = Brushes.Yellow;
                            }
                            else
                            {
                                rec.Stroke = Brushes.Blue;
                            }
                            rec.Width = (Plateau.Width / 11);
                            rec.Height = (Plateau.Height / 8);
                            Plateau.Children.Insert(index, rec);
                            Canvas.SetLeft(rec, (i * ((Plateau.Width) / 11)));
                            Canvas.SetTop(rec, (j * ((Plateau.Height) / 8)));
                            index++;
                        }
                    }
                }

     
                //}
            }
            else if(facade.getEtatCourant() == 11)
            {
                MessageBox.Show("ATTAQUE !!!! (choix d'un bateau)");
                textBox12.Text = "ATTAQUE !!!! (choix d'un bateau)";
                facade.execute(); 
                FenetreTir fT = new FenetreTir(facade);
                fT.Show();

            }
            else if (facade.getEtatCourant() == 6)
            {

                facade.execute();

                /*if (facade.getEtatCourant() == 5)
                {*/
                textBox12.Text ="Choisis la case en surbrillance où tu veux aller !";
                if (facade.getAccessible(x, y))
                {

                     textBox12.Text ="Cap sur la case (" + x + "," + y + ") !";

                    int X_Canvas = x - 1;
                    int Y_Canvas = y - 1;
                    int CoulBC = facade.getCoulBateauCourant();
                    //if On est avec Le joueur Rouge
                    if (CoulBC == 1)
                    {
                        Canvas.SetLeft(JoueurRouge, (X_Canvas * ((Plateau.Width) / 11)));
                        Canvas.SetTop(JoueurRouge, (Y_Canvas * ((Plateau.Height) / 8)));
                    }
                    //if On est avec Le joueur Vert
                    else if (CoulBC == 2)
                    {
                        Canvas.SetLeft(JoueurVert, (X_Canvas * ((Plateau.Width) / 11)));
                        Canvas.SetTop(JoueurVert, (Y_Canvas * ((Plateau.Height) / 8)));
                    }
                    //if On est avec Le joueur Jaune
                    else if (CoulBC == 3)
                    {
                        Canvas.SetLeft(JoueurJaune, (X_Canvas * ((Plateau.Width) / 11)));
                        Canvas.SetTop(JoueurJaune, (Y_Canvas * ((Plateau.Height) / 8)));
                    }
                    //if On est avec Le joueur Bleu
                    else if (CoulBC == 4)
                    {
                        Canvas.SetLeft(JoueurBleu, (X_Canvas * ((Plateau.Width) / 11)));
                        Canvas.SetTop(JoueurBleu, (Y_Canvas * ((Plateau.Height) / 8)));
                    }

                    facade.setAccessibleAll(false);

                }
                /***
                 * 
                 * Si Il Toutes les cases sont inaccessibles on supprime tous les rectangles
                 * 
                 */
                /*****************/
                bool BoolTest = false;
                for (int i = 1; i <= 11; i++)
                {
                    for (int j = 1; j <= 8; j++)
                    {
                        if (facade.getAccessible(i, j))
                            BoolTest = true;
                    }
                }
                if (BoolTest == false)
                {

                    for (int k = 0; k < index; k++)
                    {
                        Plateau.Children.RemoveAt(0);
                    }
                    index = 0;
                }
                /*****************/
                textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());
                button2.IsEnabled = true;

                //Si on atteint une case Canon Noir !
                if (facade.getEtatCourant() == 11)
                {
                    //MessageBox.Show("Choisis Le bateau à attaquer !");
                    textBox12.Text = "Choisis Le bateau à attaquer !";
                    //Sauver la position de l'attaquant
                    facade.SaveXAttaquant();
                    facade.SaveYAttaquant();
                    facade.setAccessibleAll(false);
                }

                    if (facade.getEtatCourant() == 8)
                    {
                        MessageBox.Show("Trésor ramené à bon port !");
                        textBox12.Text ="Trésor déposé !";
                        int coulB = facade.getCoulBateauCourant();
                        int nbtresors = facade.getNbTresorsPort();
                        int type = facade.getTypeBateauCourant();
                        string types = "";
                        if (type == 3)
                        {
                            types = "Caravelle";
                        }
                        else if (type == 2)
                        {
                            types = "Frégate";
                        }
                        else if (type == 1)
                        {
                            types = "Radeau";
                        }
                        //if On est avec Le joueur Rouge
                        if (coulB == 1)
                        {
                            JoueurRouge.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellerouge.jpg", UriKind.Relative));
                            textBox5.Text = nbtresors +"/3";
                            textBox1.Text = "Type : " + types + " - Pas de trésor à bord";
                        }
                        //if On est avec Le joueur Vert
                        else if (coulB == 2)
                        {
                            JoueurVert.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravelleverte.jpg", UriKind.Relative));
                            textBox7.Text = nbtresors + "/3";
                            textBox6.Text = "Type : " + types + " - Pas de trésor à bord";
                        }
                        //if On est avec Le joueur Jaune
                        else if (coulB == 3)
                        {
                            JoueurJaune.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellejaune.jpg", UriKind.Relative));
                            textBox9.Text = nbtresors + "/3";
                            textBox8.Text = "Type : " + types + " - Pas de trésor à bord";
                        }
                        //if On est avec Le joueur Bleu
                        else if (coulB == 4)
                        {
                            JoueurBleu.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellebleue.jpg", UriKind.Relative));
                            textBox11.Text = nbtresors + "/3";
                            textBox10.Text = "Type : " + types + " - Pas de trésor à bord";
                        }
                        facade.setBonPort(false);
                    }

            }
           if (facade.getEtatCourant() == 7) {
                int coulB = facade.getCoulBateauCourant();
                int type = facade.getTypeBateauCourant();
                string types = "";
                if(type == 3){
                    types = "Caravelle";
                } else if (type == 2) {
                    types = "Frégate";
                } else if (type == 1) {
                    types = "Radeau";
                }
                MessageBox.Show("Un trésor a été découvert ! Ramenez-le au port au plus vite !");
                textBox12.Text ="Trésor à bord !";
                //if On est avec Le joueur Rouge
                if (coulB == 1)
                {
                    JoueurRouge.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellerougetresor.jpg", UriKind.Relative));
                    textBox1.Text = "Type : "+types+" - Trésor à bord !";
                }
                //if On est avec Le joueur Vert
                else if (coulB == 2)
                {
                    JoueurVert.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellevertetresor.jpg", UriKind.Relative));
                    textBox6.Text = "Type : " + types + " - Trésor à bord !";
                }
                //if On est avec Le joueur Jaune
                else if (coulB == 3)
                {
                    JoueurJaune.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellejaunetresor.jpg", UriKind.Relative));
                    textBox8.Text = "Type : " + types + " - Trésor à bord !";
                }
                //if On est avec Le joueur Bleu
                else if (coulB == 4)
                {
                    JoueurBleu.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri("/CanonNoir_Affichage;component/Images/caravellebleuetresor.jpg", UriKind.Relative));
                    textBox10.Text = "Type : " + types + " - Trésor à bord !";
                }
                facade.setTresorRecup(false);
                facade.setATresor(false);
            }

           if (facade.getEtatCourant() == 13)
           {
                int coulB = facade.getCoulBateauCourant();
               String coulBateau = "";
                //if On est avec Le joueur Rouge
                if (coulB == 1)
                {
                    coulBateau = "rouge";
                }
                //if On est avec Le joueur Vert
                else if (coulB == 2)
                {
                    coulBateau = "vert";
                }
                //if On est avec Le joueur Jaune
                else if (coulB == 3)
                {
                    coulBateau = "jaune";
                }
                //if On est avec Le joueur Bleu
                else if (coulB == 4)
                {
                    coulBateau = "bleu";
                }
               MessageBox.Show("PARTIE TERMINÉE ! Le bateau "+coulBateau+" a ramené 3 trésors à son port !\n Le joueur " + facade.getNumJCourant() + " l'emporte !");
               textBox12.Text ="PARTIE TERMINÉE !";
               Close();
           }

                   textBox5.Text = facade.getNbTresors(1) + "/3";
                   textBox7.Text = facade.getNbTresors(2) + "/3";
                   textBox9.Text = facade.getNbTresors(3) + "/3";
                   textBox11.Text = facade.getNbTresors(4) + "/3";
        }


        private void button2_Click(object sender, RoutedEventArgs e)
        {
            if (facade.getEnableClicDe() == false)
                button2.IsEnabled = false;


            if (debutPartie == true)
            {
                textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());
                textBox12.Text = "Chaque joueur lance les dés tour à tour";
                facade.setClicDe(true);
                facade.execute();
                textBox2.Text = "" + facade.getde1();
                textBox3.Text = "" + facade.getde2();
                textBox2.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
                textBox3.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
                if (facade.getInitialisationOK())
                {
                    MessageBox.Show("C'est parti ! C'est le joueur "+facade.getNumJCourant()+" qui commence !");
                    textBox12.Text ="Lance les dés !";
                    textBox2.Text = "" + facade.getde1();
                    textBox3.Text = "" + facade.getde2();
                    facade.setInitialisationOK(false);
                    debutPartie = false;
                    textBox2.Text = "";
                    textBox3.Text = "";
                    textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());


                }
            }
            else
            {

                    facade.setClicDe(true);
                    textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());
                    facade.execute();
                    //après le execute
                    textBox2.Text = "" + facade.getde1();
                    textBox3.Text = "" + facade.getde2();
                    textBox4.Text = "Joueur en cours : Joueur " + (facade.getNumJCourant());

                    if (facade.getProposerDeplacement())
                    {
                        facade.execute();


                        for (int x = 0; x <= 10; x++)
                        {
                            for (int y = 0; y <= 7; y++)
                            {

                                if (facade.getAccessible(x + 1, y + 1))
                                {

                                    Rectangle rec = new Rectangle();
                                    SolidColorBrush mySolidColorBrush = new SolidColorBrush();
                                    rec.StrokeThickness = 2;
                                    int CoulJC = facade.getCoulBateauCourant();
                                    if (CoulJC == 1)
                                    {
                                        rec.Stroke = Brushes.Red;
                                    }
                                    else if (CoulJC == 2)
                                    {
                                        rec.Stroke = Brushes.Green;
                                    }
                                    else if (CoulJC == 3)
                                    {
                                        rec.Stroke = Brushes.Yellow;
                                    }
                                    else
                                    {
                                        rec.Stroke = Brushes.Blue;
                                    }
                                    rec.Width = (Plateau.Width / 11);
                                    rec.Height = (Plateau.Height / 8);
                                    Plateau.Children.Insert(index, rec);
                                    Canvas.SetLeft(rec, (x * ((Plateau.Width) / 11)));
                                    Canvas.SetTop(rec, (y * ((Plateau.Height) / 8)));
                                    index++;
                                }
                            }
                        }

                        facade.setProposerDeplacement(false);
                        button2.IsEnabled = false;
                    }
                    else // ATTENTECHOIXBATEAU
                    {

                        //MessageBox.Show("Choisis un de tes 2 bateaux");
                        textBox12.Text = "Choisis un de tes deux bateaux";
                        button2.IsEnabled = false;
                    }

                }
            
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {

        }


        private void Window_Loaded_1(object sender, RoutedEventArgs e)
        {

        }

   
    }
};