package Lab4;

class employee
{
        private int eno;
        private String ename;
        public void setemp(int no,String name)
        {
                eno = no;
                ename = name;
        }
        public void putemp()
        {
                System.out.println("Empno : " + eno);
                System.out.println("Ename : " + ename);
        }
}

public class Department extends employee{
	private int dno;
    private String dname;
    public void setdept(int no,String name)
    {
            dno = no;
            dname = name;
    }
    public void putdept()
    {
            System.out.println("Deptno : " + dno);
            System.out.println("Deptname : " + dname);
    }
	public static void main(String[] args) {
		Department d = new Department();
        d.setemp(100,"aaaa");
        d.setdept(20,"Sales");
        d.putemp();
        d.putdept();

	}

}
