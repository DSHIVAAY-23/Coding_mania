public class student {
    public static void main(String[] args) {
        employee empobj = new employee();   //obj are created in heap
        empobj.empId = 10;
        modify(empobj);
        System.out.println(empobj.empId);
        String s1 = "hello";
        String s2 = "hello";
        String s3 = new String("hello");
        System.out.println(s1.equals(s3));
        int arr[] = new int[5];
        int arr2[]={2,3,4,5,6,7,7};
    }
        private static void modify(employee employi){
            employi.empId = 20;
        }    
        
}
