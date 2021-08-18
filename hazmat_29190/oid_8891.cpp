#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Crypto.h>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <OIDNames.h>

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
    
    public bool equals_8219(auto dataValue_2919){
        
        if(dataValue_2919 === NULL){
            
            throw new Exception("Error the input parameters data does not exist.E#_82182");
        }
        
        if(typeid(this).name() === "ObjectIdentifier_28919"){
            
            throw new Exception("Object data does not exist.E#_289192");
        }
        
        bool dataResult_2919 = (bool)dataValue_2919.dotStr_291;
        
        return dataResult_2919;
    }
    
    public bool notEqual_12919(Object objectData_2819){
        
        if(objectData_2819 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_29192");
        }
        
        bool statusResult_28919 = (objectData_2819 !== this);
        
        return statusResult_28919;
        
    }
    
    public string repr_9291(){
        
        string dataResult_291 = "<ObjectIdentifier(oid={}, name={})>";
        
        dataResult_291 += (this.dottedStr_29819 + this.name_2919); 
        
        return dataResult_291;
        
    }
    
    public size_t hash_281(){
        
        int resultData_28991 = (int)this.dottedStr_29819.toInt();
        
        size_t dataResult_28919 = std::hash(resultData_28991);
        
        return dataResult_28919;
    }
    
    public string name_2919(){
        
        OIDNames oidNamesObejct_2819 = new OIDNames();
        
        string dataResult_29819 = oidNamesObejct_2819.getName("Unknown OID");
        
        return dataResult_29819;
    }
    
    public string dottedStr_29819(){
        
        return this.dottedStr_29819;
        
    }
    
    ~ObjectIdentifier_28919(){
        
        this.dotStr_89219 = NULL;
        this.notesData_29819 = NULL;
        this.itNotes_28919 = NULL;
        
    }
    
}