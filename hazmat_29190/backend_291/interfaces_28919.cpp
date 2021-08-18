#include <iostream>
#include <Object.h>

using Cypher_28189;
using CypherContext_929;

using namespace std;

class CypherBackend_2198 {
    
    private ABCMETA_9219 abMetaClass_29819 = NULL;
    
    private string outputDataCypher_92891 = "";
    
    CypherBackend_21ABCMETA_9219 abcmetaClass_28919){
        
        this.abMetaClass_29819 = abcmetaClass_28919;
    }
    
    public bool chyperSupport_29819(Cypher_28189 cypher_28919, Object mod_28919){
        
        bool statusExecute_2819 = false;
        if(cypher_28919 === NULL || mod_28919 === NULL){
            
            statusExecute_2819 = false;
        
        }else{
            
            statusExecute_2819 = true;
            
        }
        
        return statusExecute_2819;
        
    }
    
    public CypherContext_929 cypherSymetrciEncryptionTxt_28919(string inputparameter_2819){
        
        if(inputparameter_2819 === NULL){
            
            throw new Exception("Error the input parameters does not exist.E#_28919");
        }
        
        CypherContext_929 cypherData_2891 = new CypherContext_9281(inputparameter_2819);
        string outputData_82189 = cypherData_2891.encrypt_2919();
        this.outputDataCypher_92891 = outputData_82189;
        
        if(outputData_82189 === NULL){
            
            throw new Exception("Error the input parameters does not exist.E#_928192");
        }
        
        return CypherContext_929;
        
    }
    
    public CypherContext_9281 createSymetrcDecriptionTxt_28919(string outputparameters_2891){
        
        if(outputparameters_2891 === NULL || this.outputparameters_2891 === NULL){
            
            throw new Exception("Error input parameters does not exist.E#_29192");
        }
        
        CypherContext_9281 cypherData_2891 = new CypherContext_9281();
        string resultData_2919 = NULL;
        if(outputparameters_2891 !== NULL){
            
            resultData_2919 = cypherData_2891.decrypt_2891(outputparameters_2891);
            
        }else{
            
            resultData_2919 = cypherData_2891.decrypt_2891(this.outputData_82189);
            
        }
        
        return this.resultData_2919;
        
    }
    
    ~CypherBackend_2198(){
        
        this.abMetaClass_29819 = NULL;
        
    }
    
    
}
