class box {
        int width;
        int height;
        int length;
        int volume;
        void volume() {
             volume = width*height*length;
        } 
    }    
 public   class Output1 { 
        public static void main(String args[])
        {
            box obj = new box();
            obj.height = 1;
            obj.length = 5;
            obj.width = 5;
            obj.volume();
            System.out.println(obj.volume);        
        } 
    }