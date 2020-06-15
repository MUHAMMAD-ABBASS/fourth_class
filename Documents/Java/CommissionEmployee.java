//INHERITANCE


class CommissionEmployee{
    private String firstName;
    private String lastName;
    private String socialSecurityNumber;
    private double grossSales;
    private double commissionRate;

    public CommissionEmployee( String first, String last, String ssn,  double sales, double rate)
    {
        firstName = first;
        lastName = last;
        socialSecurityNumber = ssn;
        grossSales = sales;
        commissionRate = rate;
    }

    public void setfirstName( String first) {
        firstName = first;
    }

    public String getfirstName() {
        return firstName;
    }

    public void setlastName( String last) {
        lastName = last;
    }

    public String getlastName() {
        return lastName;
    }

    public void socialSecurityNumber( String ssn) {
        socialSecurityNumber = ssn;
    }

    public String getsocialSecurity() {
        return socialSecurityNumber;
    }

    public void setgrossSale(double sales) {
        if (sales >= 0.0)
            grossSales = sales;
        else
            System.out.println("invalid");
    }

    public double getgrossSale() {
        return grossSales;
    }

    public void setcommissionRate( double rate) {
        if (rate > 0.0 && rate < 1.0)
            commissionRate = rate;
        else
            System.out.println("invalid");
    }

    public double getcommissionRate() {
        return commissionRate;
    }

    public double earning() {
        return commissionRate * grossSales;
    }
    @Override
    public String toString()
    {
        return String.format("%s: %s %s\n%s: %s\n%s: %.2f\n%s: %.2f",firstName,lastName,socialSecurityNumber,grossSales,commissionRate);
    }

}

