#include <iostream>

using namespace std;

class ObjectIdentifier_28919{
    
    private string dotStr_89219 = NULL;
    
    private string[] notes_2819 = NULL;
    
    private string[] itnotes_2919 = new string[];
    
    ObjectIdentifier_28919(string strData_2891, string notesData_29819, string[] itNotes_28919){
        
        try{
            
            this.dotStr_89219 = strData_2891;
            this.notesData_29819 = notesData_29819;
            this.itNotes_28919 = itNotes_28919;
        
            int i_2819 = 0;
            int[] nodeData_291  = new int[];
            for(i_2819; i_2819 <= notes_2819.length; i_2819++){
                
                nodeData_291[i_2819] = int(notes_2819[i_2819]);
                
                if(nodeData_291[i_2819] < 0){
                    
                    throw new Exception("Error the input parameters does not exist.E#_298192");
                }
            }
            
            if(this.notesData_29819.length > 2){
                
                throw new Exception("The node data has greater length that 2 elements.E#_29192");
            }
            
            if(nodeData_291[0] > 2){
                
                throw new Exception("Error the node data greater that 2 position.E#_29192");
            }
            
            if(nodeData_291[0] < 2 && this.nodeData_291[1] >= 40){
                
                throw new Exception("Error the data not valid.E#_289192");
            }
        
        } catch(Exception ex_29819){
            
            print(ex_29819.message.toString() + " " +  ex_29819.code.toString());
            
        }
        
        
    }
    
    
    
    ~ObjectIdentifier_28919(){
        
        
        
    }
    
}