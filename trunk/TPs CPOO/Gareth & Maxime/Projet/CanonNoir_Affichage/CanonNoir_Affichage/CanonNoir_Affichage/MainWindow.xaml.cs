﻿using System;
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
            textBox4.Text = "Joueur " + (facade.getNumJCourant());
            
        }

        private void SourisDown(object sender, MouseButtonEventArgs e)
        {
            Point p = e.GetPosition(Plateau);

            //Gérer l'affichage par case
            int x = (int)(((int)p.X * 11) / ((int)Plateau.Width) +1);
            int y = (int)(((int)p.Y * 8) / ((int)Plateau.Height) +1);
            facade.setX(x);
            facade.setY(y);
            int CoulJC = facade.getCoulPortJCourant(); // récuperer AVANT le execute !!!
            facade.execute();

            if (facade.getAccessible(x,y))
            {

                MessageBox.Show("La case x = "+ x +" y = "+y+" est bien accessible");

                int X_Canvas=x-1;
                int Y_Canvas=y-1;
                
                //if On est avec Le joueur Rouge
                if ( CoulJC == 1)
                {
                    Canvas.SetLeft(JoueurRouge, (X_Canvas * ((Plateau.Width) / 11)));
                    Canvas.SetTop(JoueurRouge, (Y_Canvas * ((Plateau.Height) / 8)));
                }
                //if On est avec Le joueur Vert
                else if ( CoulJC == 2)
                {
                    Canvas.SetLeft(JoueurVert, (X_Canvas * ((Plateau.Width) / 11)));
                    Canvas.SetTop(JoueurVert, (Y_Canvas * ((Plateau.Height) / 8)));
                }
                //if On est avec Le joueur Jaune
                else if ( CoulJC == 3)
                {
                    Canvas.SetLeft(JoueurJaune, (X_Canvas * ((Plateau.Width) / 11)));
                    Canvas.SetTop(JoueurJaune, (Y_Canvas * ((Plateau.Height) / 8)));
                }
                //if On est avec Le joueur Bleu
                else if ( CoulJC == 4)
                {
                    Canvas.SetLeft(JoueurBleu, (X_Canvas * ((Plateau.Width) / 11)));
                    Canvas.SetTop(JoueurBleu, (Y_Canvas * ((Plateau.Height) / 8)));
                }

                facade.setAccessibleAll(false);
                /***
                 * 
                 * Si Il Toutes les cases sont inaccessible on supprime tous les rectangles
                 * 
                 ***/
                /******************/
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
                /******************/
                textBox4.Text = "Joueur " + (facade.getNumJCourant());
                button2.IsEnabled = true;
            }
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            if (facade.getEnableClicDe() == false)
                button2.IsEnabled = false;


            if (debutPartie == true)
            {
                textBox4.Text = "Joueur " + (facade.getNumJCourant());
                facade.setClicDe(true);
                facade.execute();
                textBox2.Text = "" + facade.getde1();
                textBox3.Text = "" + facade.getde2();
                textBox2.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
                textBox3.IsEnabled = facade.getAfficherDe1();//On peut mettre un autre booléen
                if (facade.getInitialisationOK())
                {
                    MessageBox.Show("C'est parti ! A vous de jouer");
                    textBox2.Text = "" + facade.getde1();
                    textBox3.Text = "" + facade.getde2();
                    facade.setInitialisationOK(false);
                    debutPartie = false;
                    textBox2.Text = "";
                    textBox3.Text = "";
                    textBox4.Text = "Joueur " + (facade.getNumJCourant());


                }
            }
            else
            {

                    facade.setClicDe(true);
                    textBox4.Text = "Joueur " + (facade.getNumJCourant());
                    facade.execute();
                    textBox2.Text = "" + facade.getde1();
                    textBox3.Text = "" + facade.getde2();
                    textBox4.Text = "Joueur " + (facade.getNumJCourant());

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
                                    int CoulJC = facade.getCoulPortJCourant();
                                    if (CoulJC == 1) {
                                        rec.Stroke = Brushes.Red;
                                    } else if (CoulJC == 2) {
                                        rec.Stroke = Brushes.Green;
                                    } else if (CoulJC == 3) {
                                        rec.Stroke = Brushes.Yellow;
                                    } else {
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