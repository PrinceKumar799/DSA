public class towerOfHanoi {
    public static void solve(int n,String src,String helper,String dest)
    {
        if(n==1)
        {
            System.out.println("Transfer "+n+" from "+src+" to "+dest);
            return;
        }
        solve(n-1, src, dest,helper);
        System.out.println("Transfer "+n+" from "+src+" to "+dest);
        solve(n-1, helper,src, dest);
    }
    public static void main(String args[])
    {
        int n=5;
        String src = "S";
        String helper = "H";
        String dest = "D";
        solve(n, src, helper, dest);
    }
}
