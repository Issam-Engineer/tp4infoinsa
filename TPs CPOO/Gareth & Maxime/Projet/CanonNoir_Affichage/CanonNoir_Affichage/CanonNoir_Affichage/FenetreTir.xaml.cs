﻿using System;
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
