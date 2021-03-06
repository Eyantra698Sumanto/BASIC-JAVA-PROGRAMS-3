import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 * Class CaseConverter - A simple applet that takes input from a text field 
 * and converts to upper or lower case in response to user button selection. 
 * Works well with a width of 300 and height of 120.
 *  
 * Aug 2004: Updated from Applet to JApplet (mik)
 *
 * @author Bruce Quig 
 * @author Michael Kolling
 * 
 * @version 2004-08-04
 */
public class CaseConverter extends JApplet
     implements ActionListener
{
    private JTextField inputField,inputField1,resultField;
    private final String PLUS = "+";
    private final String MINUS = "-";
     private final String MUL = "*";
       private final String DIV = "/";
       private final String EQ = "=";
    private final String CLEAR = "C";

     /**
     * Called by the browser or applet viewer to inform this JApplet that it
     * has been loaded into the system. It is always called before the first 
     * time that the start method is called.
     */
    public void init()
    {
        // GUI elements are added to the applet's content pane, so get it for us.
        Container contentPane = getContentPane();
        
        
        // set a layout with some spacing
        contentPane.setLayout(new BorderLayout(12,12));
        
        // add the title label
        JLabel title = new JLabel("SCIENTIFIC CALCULATOR");
        contentPane.add(title, BorderLayout.NORTH);
       
        // create the center part with prompt and text field and add it
        JPanel centerPanel = new JPanel();
        JPanel centerPanel1 = new JPanel();
        JLabel prompt = new JLabel("Enter INPUTS:");
        JLabel prompt1 = new JLabel("RESULT:");
        centerPanel.add(prompt);
        inputField = new JTextField(16);
        inputField1= new JTextField(16);
        centerPanel.add(inputField);
          centerPanel.add(inputField1);
           centerPanel.add(prompt1);
            resultField= new JTextField(16);
            
        centerPanel.add(resultField);
        contentPane.add(centerPanel, BorderLayout.CENTER);
        // make a panel for the buttons
        JPanel buttonPanel = new JPanel();
        
        // add the buttons to the button panel
        JButton PLUS = new JButton("+");
        PLUS.addActionListener(this);
        buttonPanel.add(PLUS);
        
        JButton MINUS = new JButton("-");
        MINUS.addActionListener(this); 
        buttonPanel.add(MINUS);
           JButton MUL = new JButton("*");
        MUL.addActionListener(this); 
        buttonPanel.add(MUL);
           JButton DIV = new JButton("/");
        DIV.addActionListener(this); 
        buttonPanel.add(DIV);
                   JButton EQ = new JButton("=");
        EQ.addActionListener(this); 
        buttonPanel.add(EQ);
        JButton clear = new JButton(CLEAR);
        clear.addActionListener(this);
        buttonPanel.add(clear);
        
        // add the buttons panel to the content pane
        contentPane.add(buttonPanel, BorderLayout.SOUTH);
    }

    /**
     * Returns information about this applet. 
     * An applet should override this method to return a String containing 
     * information about the author, version, and copyright of the JApplet.
     *
     * @return a String representation of information about this JApplet
     */
    public String getAppletInfo()
    {
        return "Title: Case Converter  \n" +
               "Author: Bruce Quig  \n" +
               "A simple applet that converts text to upper or lower case. ";
    }

    /**
     * ActionListener Interface method.
     * Called when action events occur with registered components that
     * can fire action events.
     * @param  ae   the ActionEvent object created by the event
     */
    public void actionPerformed(ActionEvent evt)
    {float a,b;
        String c="", command = evt.getActionCommand();
        // if clear button pressed
        if(CLEAR.equals(command))
          {  inputField.setText("");
            }
        // uppercase button pressed
        else { a= Float.parseFloat(inputField.getText());
                  b= Float.parseFloat(inputField1.getText());
            if(PLUS.equals(command))
          {
          
        // lowercase button pressed
         //if(EQ.equals(command)) 
            resultField.setText(c.valueOf(a+b));
    }
     else if(MINUS.equals(command))
          {
        // lowercase button pressed
            resultField.setText(c.valueOf(a-b));
    }  else if(MUL.equals(command))
          {
        // lowercase button pressed
            resultField.setText(c.valueOf(a*b));
    }
      else if(DIV.equals(command))
          {
        // lowercase button pressed
            resultField.setText(c.valueOf(a/b));
    }}
}}

