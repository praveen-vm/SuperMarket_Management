/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jtable;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

/**
 *
 * @author RAMYAMUKESH
 */
public class connect {
   
    private static String url;
    private static String una;
    private static String pas;
    
     public static Connection con=null;
    public connect() throws SQLException{
          url="jdbc:mysql://localhost:3306/controls?verifyServerCertificate=false&useSSL=true";
          una="root";
          pas="Thunder@123";
          con  = DriverManager.getConnection(url,una,pas);
            
            }

    Statement createStatement() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

   
}
