import java.util.*;
class lexicolarger{
	public static void lexicohstring(String str,String osf,boolean bool) {
		if(str.length()==0)
		{
			System.out.println(osf);
			return;
		}
		for(int i=;i<str.length();i++)
		{
			if(bool){
				char ch=str.charAt(i);
				String ros=str.substring(0,i)+str.substring(i+1);
				lexicohstring(ros,osf+ch,bool);
			}
			else{
				if(str.charAt)
			}
		}
	}
}