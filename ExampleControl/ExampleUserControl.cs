using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ExampleControl
{
    [ComVisible(true)]
    [Guid("1A12316B-249C-493F-9E9C-FD6EE986B72D")]
    [ComDefaultInterface(typeof(IExampleUserControl))]
    public partial class ExampleUserControl : UserControl, IExampleUserControl
    {
        public ExampleUserControl()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hello world from .NET");
        }
    }

    [ComVisible(true)]
    [Guid("E6D13224-3C43-4E48-BDAF-9EDA6369AD46")]
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    public interface IExampleUserControl { }
}
