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
//using System.Runtime.InteropServices;
//using exempleWrapper;
using mWrapper;




namespace WpfJeu
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        /*
        [DllImport("ModeleCpp.dll", EntryPoint = "Tir_New")]
        public static extern IntPtr NewTir();

        [DllImport("ModeleCpp.dll", EntryPoint = "Tir_Delete")]
        public static extern void DeleteTir(IntPtr tdC);

        [DllImport("ModeleCpp.dll", EntryPoint = "?add@Tir@@QAEXHH@Z", CallingConvention = CallingConvention.ThisCall)]
        public static extern void addTire(IntPtr thisptr, int x,int y);

        [DllImport("ModeleCpp.dll", EntryPoint = "?affiche@Tir@@QAEXXZ", CallingConvention = CallingConvention.ThisCall)]
        public static extern void affTire(IntPtr thisptr);
        
        IntPtr tDC;
        */
        WrapperTir tDC;

        public MainWindow()
        {
            InitializeComponent();
            //tDC = NewTir();
            tDC = new WrapperTir();
        }

        private void ClickC(object sender, RoutedEventArgs e)
        {
            // Affichage d’une MessageBox avec les coordonnées du bouton Canon
            MessageBox.Show("BOUMM ! (" + Canvas.GetLeft(Canon) + "," + Canvas.GetTop(Canon) + ")");
            //affTire(tDC);
            tDC.affiche();
        }

        private void MouseDown(object sender, MouseButtonEventArgs e)
        {
            // On récupère la position du MouseDown
            Point pt = e.GetPosition(canvas1);
            //On ajoute ces coordonnées dans notre structure (DLL C++)
            //addTire(tDC, (int)pt.X, (int)pt.Y); 
            tDC.add((int)pt.X, (int)pt.Y);
            // On déplace le Bouton à ces coordonnées
            Canvas.SetLeft(Canon, pt.X );
            Canvas.SetTop(Canon, pt.Y);
            
        }
    }
}
