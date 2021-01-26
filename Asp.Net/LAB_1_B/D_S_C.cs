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
    public partial class D_S_C : Form
    {
        SqlConnection con;
        SqlDataAdapter da, da1;
        DataSet ds,ds1;

        public D_S_C()
        {
            InitializeComponent();
        }

        private void D_S_C_Load(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab1_Student\student.mdf';Integrated Security=True;Connect Timeout=30");
            con.Open();
            string sqlstr = "select CourseName from tbl_Course";
            da = new SqlDataAdapter(sqlstr, con);
            ds = new DataSet(); da.Fill(ds);
            cmb_cid.DataSource = ds.Tables[0];
            cmb_cid.ValueMember = "CourseName";
            cmb_cid.DisplayMember = "CourseName";
            loaddata();
            con.Close();
        }

        public void loaddata()
        {
            string sqlstr1 = "select * from tbl_Student,tbl_Course where tbl_Course.CourseID = tbl_Student.CourseID and tbl_Course.CourseName = '" +cmb_cid.SelectedValue + "'";
            da1 = new SqlDataAdapter(sqlstr1, con);
            ds1 = new DataSet();
            da1.Fill(ds1);
            dataGridView1.DataSource = ds1.Tables[0];
        }

        private void cmb_cid_SelectedIndexChanged(object sender, EventArgs e)
        {
            loaddata();
        }
    }
}
