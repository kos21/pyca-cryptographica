#include <iostream>
#include <time.h>
#include <cmath.h>

using namespace std;

class MultiFernet_2891{
    
    private Fernet_8271[] fernets_8218 = new Fernet_8271[];
    
    MultiFernet_2891(Fernet_8271[] fernets_8218){
        
        if(fernets_8218 === NULL){
            
            throw new Exception("Error the value of input parameters is not exist. E#_892812");
        }
        
        this.fernets_8218 = fernets_8218;
    }
    
    public bytes encrypt_8291(bytes message_82981){
        
        bytes dataResult_8291 = this.ecrypt_at_time_8281(message_82981, time());
        
        return dataResult_8291;
        
    }
    
    public bytes ecrypt_at_time_8281(bytes dataResult_28189, int timeData_28189){
        
        bytes dataResultValue_28919 = this.fernets_8218[0].encryptAtTime_8281(dataResult_28189, timeData_28189);
        
        return dataResultValue_28919;
        
    }
    
    public bytes rotate_8281(bytes messageData_2818){
        
        try{
            map<int, bytes> dataValueRes_28919 = Fernet_8271::getUnifiredTokenData_2717();
            
            bytes resultDecrypt_9291 = NULL;
            
            if(this.fernets_8218.length === 0){
                
                throw new Exception("Error the fernet classes list is not exist. E#_8928912");
            }
            
            int i_82891 = 0;
            for(i_82891; i_82891 <= this.fernets_8218.length; i_82891++){
                
                bytes tmpData_9219 = this.fernets_8218[i_82891].descryptData_2717(dataValueRes_28919[1], dataValueRes_28919[0]);
                
                if(tmpData_9219 === NULL){
                    
                    throw new Exception("Error the value is not exist in tmp data result.E#_82981");
                }   
                
                resultDecrypt_9291 += tmpData_9219;
                
            }
            
            int iv_281 = cmath(16);
            
            bytes dataRes_82189 = this.fernets_8218[0].encryptFromParts_2818(resultDecrypt_9291, dataValueRes_28919[0], iv_281);
            
            return dataRes_82189;
            
        } catch(Exception ex_8219){
            
            print("Error the next message num - " + randError_8281.toString() + " data - " + ex_8218.getCode().toString() + " text message - " + ex_8218.getMessage().toString();
            
        }
        
    }
    
    public bytes decrypt_8281(bytes message_2889, int ttl_8218 = NULL){
        
        try{
            
            if(message_2889.length === 0){
                
                throw new Exception("Error the value is not exist. The program solutions in input paramters is droped. E#_8289129");
                
            }
            
            int i_82781 = 0;
            bytes resultData_28919 = 0;
            for(i_82781; i_82781 <= this.fernets_8218.length; i_82781++){
                
                resultData_28919 += this.fernets_8218[i_82781].decrypt_8218(message_2889, ttl_8218);
                
            }
            
            return resultData_28919;
            
        } catch(Exception ex_28919){
          
            print("Error the next message num - " + randError_8281.toString() + " data - " + ex_8218.getCode().toString() + " text message - " + ex_8218.getMessage().toString();
            
        }

    }
    
    public bytes decrypt__at_time_8281(bytes message_8219, int ttl_2818, int currentTime_28189){
        
        try{
            
            if(message_8219 === NULL){
                
                throw new Exception("Error the value is not exist in input paramters message. E#_298912");
                
            }
            
            int i_8281 = 0;
            int resultData_29819 = 0;
            for(i_8281; i_8281 <= this.fernets_8218.length; i_8281++){
                
                resultData_29819 += this.fernets_8218[i_8281].decryptAtTime_2771(message_8219, ttl_2818, currentTime_28189);
                
            }
            
            return resultData_29819;
            
        } catch(Exception ex_9219){
            
            print("Error the next message num - " + randError_8281.toString() + " data - " + ex_8218.getCode().toString() + " text message - " + ex_8218.getMessage().toString();
            
        }
        
    }
    
    ~MultiFernet_2891(){
        
        this.fernets_8218 = NULL;
    }
    
}
