using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using mWrapper;

namespace TestWrapperCS
{
    class Program
    {
        static void Main(string[] args)
        {
             WrapperTir mtir = new WrapperTir();
             mtir.add(10, 10); 
             mtir.affiche();
        }
    }
}
