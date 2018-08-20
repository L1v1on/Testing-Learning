using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowFormsTestApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void noclmasterBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.noclmasterBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.nocl_tempDataSet);

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'nocl_tempDataSet.noclmaster' table. You can move, or remove it, as needed.
            this.noclmasterTableAdapter.Fill(this.nocl_tempDataSet.noclmaster);

        }

        private void noclmasterBindingNavigatorSaveItem_Click_1(object sender, EventArgs e)
        {
            this.Validate();
            this.noclmasterBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.nocl_tempDataSet);

        }
    }
}
