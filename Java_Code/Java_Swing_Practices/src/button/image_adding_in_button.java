package button;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;

public class image_adding_in_button {
	
	image_adding_in_button()
	{
		
		//JFrame Creating;
		JFrame f=new JFrame("Button Example");
		f.setSize(400, 500);
		
		JButton b=new JButton(new ImageIcon("D:\\4th_year\\Java_Code\\Java_Swing_Practices\\src\\button\\imageedit.png"));
	    b.setBounds(100, 100, 100, 50);
	    
	    f.add(b);
	    
	    f.setLayout(null);
	    f.setVisible(true);
	    
	}

	public static void main(String[] args) 
	{
		
         new image_adding_in_button();
	}

}