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
    public partial class D_S_Y : Form
    {
        SqlConnection con;
        SqlCommand cmd;
        SqlDataAdapter da, da1;
        DataSet ds,ds1;

        public D_S_Y()
        {
            InitializeComponent();
        }

        public void loadData()
        {
            string sqlstr1 = "select distinct * from tbl_Student,tbl_Course where tbl_Student.CourseID=tbl_Course.CourseID and tbl_Student.YrOfAdmsn=" + cmb_year.SelectedValue.ToString() + "";
            da1 = new SqlDataAdapter(sqlstr1, con);
            ds1 = new DataSet();
            da1.Fill(ds1);
            dataGridView1.DataSource = ds1.Tables[0];

        }


        private void cmb_year_SelectionChangeCommitted(object sender, EventArgs e)
        {
            loadData();
        }

        private void D_S_Y_Load(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab1_Student\student.mdf';Integrated Security=True;Connect Timeout=30");
            con.Open();
            string sqlstr = "select YrOfAdmsn from tbl_Student";
            da = new SqlDataAdapter(sqlstr, con);
            ds = new DataSet(); 
            da.Fill(ds);
            cmb_year.DataSource = ds.Tables[0];
            cmb_year.ValueMember = "YrOfAdmsn";
            cmb_year.DisplayMember = "YrOfAdmsn";
            loadData();
            con.Close();
        }
       

        private void cmb_cid_SelectedIndexChanged(object sender, EventArgs e)
        {
            loadData();
        }
    }
}
