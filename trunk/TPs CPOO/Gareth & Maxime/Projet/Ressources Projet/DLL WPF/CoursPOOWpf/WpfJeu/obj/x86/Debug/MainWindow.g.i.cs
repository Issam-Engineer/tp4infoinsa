﻿#pragma checksum "..\..\..\MainWindow.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "072C3A203D3F3A3C956ADF5F68742811"
//------------------------------------------------------------------------------
// <auto-generated>
//     Ce code a été généré par un outil.
//     Version du runtime :4.0.30319.1
//
//     Les modifications apportées à ce fichier peuvent provoquer un comportement incorrect et seront perdues si
//     le code est régénéré.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;


namespace WpfJeu {
    
    
    /// <summary>
    /// MainWindow
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
    public partial class MainWindow : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 5 "..\..\..\MainWindow.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas canvas1;
        
        #line default
        #line hidden
        
        
        #line 7 "..\..\..\MainWindow.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Image plateau;
        
        #line default
        #line hidden
        
        
        #line 9 "..\..\..\MainWindow.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Button Canon;
        
        #line default
        #line hidden
        
        
        #line 15 "..\..\..\MainWindow.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.ListBox routage;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/WpfJeu;component/mainwindow.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\MainWindow.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.canvas1 = ((System.Windows.Controls.Canvas)(target));
            
            #line 5 "..\..\..\MainWindow.xaml"
            this.canvas1.MouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.MouseDown);
            
            #line default
            #line hidden
            
            #line 5 "..\..\..\MainWindow.xaml"
            this.canvas1.MouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.MouseRightDown_canvas);
            
            #line default
            #line hidden
            
            #line 5 "..\..\..\MainWindow.xaml"
            this.canvas1.PreviewMouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.PreviewMouseRightDown_canvas);
            
            #line default
            #line hidden
            return;
            case 2:
            this.plateau = ((System.Windows.Controls.Image)(target));
            return;
            case 3:
            this.Canon = ((System.Windows.Controls.Button)(target));
            
            #line 9 "..\..\..\MainWindow.xaml"
            this.Canon.Click += new System.Windows.RoutedEventHandler(this.ClickC);
            
            #line default
            #line hidden
            
            #line 9 "..\..\..\MainWindow.xaml"
            this.Canon.MouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.MouseRightDown_Button);
            
            #line default
            #line hidden
            
            #line 9 "..\..\..\MainWindow.xaml"
            this.Canon.PreviewMouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.PreviewMouseRightDown_Button);
            
            #line default
            #line hidden
            return;
            case 4:
            
            #line 11 "..\..\..\MainWindow.xaml"
            ((System.Windows.Controls.Image)(target)).MouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.MouseRightDown_Image);
            
            #line default
            #line hidden
            
            #line 11 "..\..\..\MainWindow.xaml"
            ((System.Windows.Controls.Image)(target)).PreviewMouseRightButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.PreviewMouseRightDown_Image);
            
            #line default
            #line hidden
            return;
            case 5:
            this.routage = ((System.Windows.Controls.ListBox)(target));
            return;
            }
            this._contentLoaded = true;
        }
    }
}
