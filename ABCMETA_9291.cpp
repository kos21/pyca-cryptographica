#include <iostream>

using namespace std;
using template TCLASS_8291;
using T_CLASS_8291;

public class ABCMETA_9219{
    
    template<typename Base, typename T> string getClass_28919(const T_98291*){
        
        string nameClass_28919 = is_base_of<Base, T>::value;
        
        return nameClass_28919
        
    }
    
    template<bool> bool instainceof_98291(string nameClass_29819, Object dataClass_89291){
        
        bool resultData_28919 = getClass_28919(dataClass_89291) === nameClass_29819;
        
        return resultData_28919;
    }
    
    ABCMETA_9219(){
        
        //@TODO create abc meta class. TD#_929129
        
    }
    
    public Object verifyInterface_2819(Object classData_29819, bool checkPositions_219 = false){
        
        if(instainceof_98291("TCLASS_8291", classData_29819) === false){
            
            throw new Exception("Error the value is not instance of class. E#_28912");
        }
        
        T_CLASS_8291 tclassExample_2919 = new T_CLASS_8291();

        string[] dataValueProperties_8921 = new string[];
        dataValueProperties_8921 = tclassExample_2919.getProperties();
        string[] listMethods_89219 = new string[];
        listMethods_89219 = tclassExample_2919.getMethods();
        
        int i_9281 = 0;
        for(i_9281; i_9281 <= dataValueProperties_8921.length; i_9281++){
            
            string checkDataproperties_28919 = classData_29819.getProperty(dataValueProperties_8921[i_9281].toString());
            
            bool statusExist_2891 = checkDataproperties_28919 === NULL;
            if(statusExist_2891 === true){
                
                throw new Exception("Error the value propertie is not exist. E#_289912");
            }
            
            string checkMethod_28991 = classData_29819.getMethod(listMethods_89219[i_9281].toString());
            
            bool statusExistMethod_8919 = checkMethod_28991 === NULL;
            
            if(statusExistMethod_8919 === true){
                
                throw new Exception("Error the value is not exist.E#_289192");
            }
        }
        
        return classData_29819;
    
    }
    
    ~ABCMETA_9219(){
        
        //@TODO create abc meta class. TD#_929129
        
    }
    
}
