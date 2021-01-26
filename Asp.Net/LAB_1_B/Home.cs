using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab1_Student
{
    public partial class Home : Form
    {
        public Home()
        {
            InitializeComponent();
        }

        private void Home_Load(object sender, EventArgs e)
        {

        }

        private void btnNewCource_Click(object sender, EventArgs e)
        {
            NewCourse ns = new NewCourse();
            ns.Show();
        }

        private void btnAddStudent_Click(object sender, EventArgs e)
        {
            NewStudent ns1 = new NewStudent();
            ns1.Show();
        }

        private void btnListCourceWise_Click(object sender, EventArgs e)
        {
            D_S_C dsc = new D_S_C();
            dsc.Show();
        }

        private void btnListYearWise_Click(object sender, EventArgs e)
        {
            D_S_Y dsy = new D_S_Y();
            dsy.Show();
        }
    }
}
