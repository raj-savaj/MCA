using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab1_Student
{
    public partial class NewCourse : Form
    {
        SqlConnection con;
        SqlCommand cmd;

        public NewCourse()
        {
            InitializeComponent();
        }

        private void btnAddCouce_Click(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab1_Student\student.mdf';Integrated Security=True;Connect Timeout=30");
            con.Open();
            cmd = new SqlCommand("insert into tbl_Course (CourseID,CourseName) values (" +txtCourceId.Text + ",'" + txtCourceName.Text + "')", con);
            int j = cmd.ExecuteNonQuery();
            if (j > 0)
            {
                MessageBox.Show("'" + txtCourceName.Text + "' Added Sucessfully");
            }
            else
            {
                MessageBox.Show("INSERTION FAILED");
            }
            con.Close();
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtCourceId.Text = "";
            txtCourceName.Text = "";
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
