using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

public class DbOperations
{
    private SqlConnection sqlconn;
    public string OpenConnection()
    {
        try
        {
            sqlconn = new SqlConnection();
            sqlconn.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='H:\MCA\MCA SEM 5\C#\Lab\Lab3_Education\Lab3_Education\collegedb.mdf';Integrated Security=True;Connect Timeout=30";
            sqlconn.Open();
            return null;
        }
        catch (Exception ex) {
            return ex.Message;
        }
    }

    private bool CloseConnection()
    {
        try
        {
            sqlconn.Close();
            return true;
        }
        catch { return false; }
    }
    public bool Insert(string name, string email, string message)
    {
        try
        {
            string query = "INSERT INTO feedback (name, email, message) VALUES('" + name + "','" + email + "', '" + message + "')";
            if (this.OpenConnection() == null)
            {
                SqlCommand cmd = new SqlCommand(query, sqlconn);
                int res = cmd.ExecuteNonQuery();
                if (res >= 1)
                    return true;
            }
        }
        finally
        {
            this.CloseConnection();
        }
        return false;
    }
}
