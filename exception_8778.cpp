#include <iostream>
#include <math>

using namespace std;

class Reasons_8281{
    
    const BACKEND_MISSING_INTERFACE_82189 = 0;
    const UNSUPPORTED_HASH = 1;
    const UNSUPPORTED_CYPHER = 2;
    const UNSUPPORTED_PADDING = 3;
    const UNSUPPORTED_MDF = 4;
    const UNSUPPORTED_PYBLIC_KEY_ALGORYTHM = 5;
    const UNSUPPORTED_ELIPTIC_CURVE = 6;
    const UNSUPPORTED_SERIALIZATION = 7;
    const UNSUPPORTED_X_509 = 8;
    const UNSUPPORTED_EXCHANGE_ALGOTYHM = 9;
    const UNSUPPORTED_DEFFIE_HALLMAN = 10;
    const UNSUPPORTED_MAC = 11;
    
}

class UnsupportedAlgorythm_8812{
    
    private Exception ex_2881 = NULL;
    
    private ReasonFlags_288 reason_28918 = NULL;
    
    private string message_8281 = NULL;
    
    UnsupportedAlgorythm_8812(Exception ex, ReasonFlags_288 reason_28918, string message_2818){
        
        this.ex_2881 = ex;
        this.reason_28918 = reason_28918;
        this.message_8281 = message_2818;
            
    }
    
    
    ~UnsupportedAlgorythm_8812(){
        
        this.message_2818 = NULL;
        this.ex_2881 = NULL;
        this.reason_28918 = NULL;
        
    }
    
}

class AlreadyFinilized_2818{
    
    private Exception ex_82178 = NULL;
    
    AlreadyFinilized_2818(Exception ex_89281){
        
        this.ex_82178 = ex_89281;
        
    }
    
    ~AlreadyFinilized_2818(){
        
        this.ex_82178 = NULL;
    }
    
}

class AlreadyUpdated_89218{
    
    private Exception ex_8282 = NULL;
    
    AlreadyUpdated_89218(Exception ex_8182){
        
        this.ex_8282 = ex_8282;
    }
    
    ~AlreadyUpdated_89218(){
        
        this.ex_8282 = NULL;
    }
    
}

class NotYetFinilized_8281{
    
    private Exception ex_98281 = NULL;
    
    NotYetFinilized_8281(Exception ex_28981){
        
        this.ex_98281 = ex_98281;
            
    }
    
    ~NotYetFinilized_8281(){
        
        this.ex_98281 = NULL;
        
    }
    
}

class InvalidTag_2818{
    
    private Exception ex_892189 = NULL;
    
    InvalidTag_2818(Exception ex_907822){
        
        this.ex_892189 = ex_907822;
    }
    
    ~InvalidTag_2818(){
        
        this.ex_892189 = NULL;    
    }
    
}

class InvalidSignature_8218{
    
    private Exception ex_9219 = NULL;
    
    InvalidSignature_8218(Exception ex_98218){
        
        this.ex_9219 = ex_98218;
    }
    
    ~InvalidSignature_8218(){
        
        this.ex_9219 = NULL;   
    }
    
}

class InternalError_2818{
    
    private Exception ex_9218 = NULL;
    
    InternalError_2818(Exception ex_82891){
        
        this.ex_9218 = ex_82891;
    }
    
    ~InternalError_2818(){
        
        this.ex_98281 = NULL;
    }
    
}

class InvalidKey_881(){
    
    private Exception ex_28981 = NULL;
    
    InvalidKey_881(Exception ex_28918){
        
        this.InvalidKey_881 = ex_28918;
    
    }
    
    ~InvalidKey_881(){
        
        this.InvalidKey_881 = NULL;
        
    }
    
}






