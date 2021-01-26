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
    public partial class NewStudent : Form
    {
        SqlConnection con;
        SqlCommand cmd; 
        SqlDataAdapter da; 
        DataSet ds;
        public NewStudent()
        {
            InitializeComponent();
        }

        private void NewStudent_Load(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab1_Student\student.mdf';Integrated Security=True;Connect Timeout=30");
            con.Open();
            string sqlstr = "select CourseName from tbl_Course";
            da = new SqlDataAdapter(sqlstr, con);
            ds = new DataSet();
            da.Fill(ds);
            cmbCource.DataSource = ds.Tables[0];
            cmbCource.ValueMember = "CourseName";
            con.Close();
        }

        private void btnAddStudent_Click(object sender, EventArgs e)
        {
            con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab1_Student\student.mdf';Integrated Security=True;Connect Timeout=30");
            con.Open();
            string query = " select CourseID from tbl_Course where CourseName='" + cmbCource.SelectedValue + "'";
            da = new SqlDataAdapter(query, con);
            DataTable dt = new DataTable();
            da.Fill(dt);
            int CourseID = int.Parse(dt.Rows[0][0].ToString());
            cmd = new SqlCommand("insert into tbl_Student(USN, StudName, Address, CourseID, YrOfAdmsn) values('" + txtUsn.Text + "','" + txtName.Text + "','" + txtAddress.Text + "'," + CourseID + "," + cmbYearAddmisson.SelectedItem + ")", con);
            cmd.CommandType = CommandType.Text;
            int j = cmd.ExecuteNonQuery();
            if (j > 0)
            {
                MessageBox.Show("New Student'" + txtName.Text + "' Added Sucessfully");
            }
            else
            {
                MessageBox.Show("INSERTION FAILED");
            }
            con.Close();
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtUsn.Text = "";
            txtName.Text = "";
            txtAddress.Text = "";
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
