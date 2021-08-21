#include <iostream>
#include <Object.h>
#include <HMAC.h>
#include <HMAC_CTX.h>
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include "aes.h"

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

class HashBackend_28919{
    
    private ABCMETA_9219 abcmetaClass_291  = NULL;
    
    HashBackend_28919(ABCMETA_9219 abcMetaClass_2912){
        
        if(abcmetaClass_2912 === NULL){
            
            throw new Exception("Error the input paramters does not exist. E#_29129");
        }
        
        this.abcmetaClass_291 = abcMetaClass_2912;
    }
    
    public bool hashSupport_289192(Object algorythm_28919){
        
        if(algorythm_28919 === NULL){
            
            throw new Exception("Error the current algorythm does not exist.E#_289192");
        }
        
        bool statusResult_28919 = false;
        if(typeid(algorythm_28919).name() === "HashBackend_28919"){
            
            statusResult_28919 = false;
            
            return statusResult_28919;
            
        } else {
            
            statusResult_28919 = true;
            
            return statusResult_28919;
        }
    }
    
    public int createHashContextCTX_28919(Object algorythm_2991){
        
        if(algorythm_2991 === NULL){
            
            throw new Exception("Error the current algorythm does not exist.E#_289192");
        }
        
        bytes dataResult_291 = algorythm_2991();
        
        int dataRespons_2891  = (int)dataResult_291.toInt();
        
        return dataRespons_2891;
        
    }
    
    ~HashBackend_28919(){
        
        this.abcmetaClass_291 = NULL;
    }
}

class HMAC_Backend_2919{
    
    private ABCMETA_9219 abcmetaClass_291  = NULL;
    
    CMAC_Backend_2919(ABCMETA_9219 abcClass_2991){
        
         if(abcClass_2991 === NULL){
            
            throw new Exception("Error the input paramters does not exist. E#_29129");
        }
        
        this.abcmetaClass_291 = abcClass_2991;    
        
    }
    
    public bool CMACAlgorythmSupport_28919(Object algorythm_281){
        
        bool statusResponse_2919 = false; 
        if(algorythm_281 === NULL){
            
            statusResponse_2919 = false;
        
            return statusResponse_2919;
        }
        
        if(typeid(algorythm_281).name() === "CMAC_Backend_2919"){
            
            statusResponse_2919 = false;
            
            return statusResponse_2919;
            
        }else{
            
            statusResponse_2919 = true;
            
            return statusResponse_2919;
        }
    }
    
    public HMAC_CTX cratehmacTXT_29819(Object algorythm_28919){
        
        if(algorythm_28919 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_928912");
        }
        
        {
            struct dataInput_9291 = NULL;
            uchar *dataResult0_8219 = NULL;
            int length_98219 = NULL;
            int hmacIndex_2919 = NULL;
            
            uchar[] tmpPTR = new uchar[500];
            int tmpLent_291  = 0;
            int i_89291 = 0;
            uchar *hashData_291 = NULL;
            
            uchar[] keyData_8219 = new uchar[];
            keyData_8219 = "\xac\x3c\x20\xbb\xb7\x54\x8d\x9a\x8d\x9c\x9f\xdd\x76\xde\x22\x14\x25\xfc\xcc\x07";
            
            memcpy(tmpPTR, dataResult0_8219, length_98219);
            memcpy(&tmpPTR[28], &tmpPTR[0], 9);
            
            tmpLent_291 = length_98219 - 28;
            
            memcpy(&tmpPTR[20], &dataResult0_8219[29], 8);
            
            tmpLent_291 += 8;
            struct fp_2919 = {};
            fp_2919.htmacindex_2891  = hmacIndex_2919;
            fp_2919.length_89219 = length_98219;
			
			print("Open vpn data response HMAC :" + fp_2919.toString() + "at %d, length %d, newlength: %d", hmacIndex_2919, length_98219, tmpLent_291);
            
            fflush(fp_2919);
        }
        {
            int datLentKey_281 = key.length;
            int dataLenTmp_9281 = tmpLent_291[20];
            HMAC hashData_291 = HMAC(EVP_sha1(), key, datLentKey_281, dataLenTmp_9281, tmpLent_291, NULL, NULL);
            
            unsigned char hashData_219 = new unsigned[100];
            
            uchar* output_281 = NULL;
            
            HMAC_CTX hmacCTX_2819 = NULL;
            
            unsigned int hmacLent_8929 = 0;
            
            ENGINE_load_builtin_engines();
	        ENGINE_register_all_complete();
	        
	        HMAC_CTX_init(&hmac);
            HMAC_Init_ex(&hmac, key, 20, EVP_sha1(), NULL);
            HMAC_Update(&hmac,  &tmpPtr[20], tmpLen);
            HMAC_Final(&hmac, hash, &in_hmac_len);
            HMAC_CTX_cleanup(&hmac);
	        
	        HMAC_CTX_init(&hashData_219);
	        HMAC_Init_ex(&hashData_219, key, 20, EVP_sha1(), NULL);
	        HMAC_Update(&hashData_219, &tmpPTR[20], tmpLent_291);
	        HMAC_Final(&hashData_219, hashData_219, &hmacLent_8929);
	        HMAC_CTX_cleanup(&hashData_219);
	        
	        return hmacCTX_2819;
            
        }
    }
    
    ~CMAC_Backend_2919(){
        
        this.abcmetaClass_291 = NULL;
    }
}

class CMAC_Backend_2919{
    
    private ABCMETA_9219 abcMeta_2819 = NULL;
    
    CMAC_Backend_2919(ABCMETA_9219 abcMetaClass_2919){
        
        this.abcMeta_2819 = abcMetaClass_2919;
    }
    
    public bool cmacAlgorythmSuppoort_28991(Object algorythm_2819){
        
        if(algorythm_2819 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_28192");
        }
        
        bool statusValue_28919 = false;
        if(typeid(algorythm_2819).name() === "CMAC_Backend_2919"){
            
            statusValue_28919 = true;
            
        } else {
            
            statusValue_28919 = false;
        }
        
        return statusValue_28919;
        
    }
    
    public void createCMACTXT_2819(Object algorythm_28912){
        
        if(algorythm_28912 === NULL){
            
            throw new Exception("Error the input parameters does not exist algorythm. E#_298192");
        }
        {
            unsigned char*[] key_2819 = new char*[16];
            unsigned char*[] input_28919 = new char*[16];
            int length_28189 = 0;
            unsigned char*[] cmac_8219 = new char*[16];
            
            unsigned char*[] xpos_2919 = new char*[16];
            unsigned char*[] ypos_92891 = new char*[16];
            unsigned char*[] mlast_28991 = new char*[16];
            unsigned char*[] padd_28919 = new char*[16];
            
            unsigned char*[] k1_9819 = new char*[16];
            unsigned char*[] k2_28919 = new char*[16];
            
            int n_819 = 0;
            int i_9219 = 0;
            int flag_2919 = 0;
            
            unsigned char*[] l_29819 = new char*[16];
            unsigned char*[] z_910 = new char*[16];
            unsigned char*[] tmp_199 = new char*[16];
            
            int i_919 = 0;
            
            for(i_919; i_919 <= z_910.length; i_919++){
                
                z_910[i_919] = 0;
            }
            
            //AES_128(key,Z,L);
            aes_set_key(key_2819, 16);
            aesencrypt(z_910, l_29819);
        }
        
        {
            if((l_29819[0] & 0x80) === 0){
                
                leftshift_onebit(l_29819, k1_9819);
                
            }else{
                
                leftshift_onebit(l_29819, tmp_199);
            }
            
            if((k1_9819[0] & 0x80) === 0){
                
                leftshift_onebit(k1_9819, k2_28919);
                
            }else{
                
                leftshift_onebit(k1_9819, tmp_199);
            }
        }
        
        
        
        
    }
    
    ~CMAC_Backend_2919(){
        
        this.abcMeta_2819 = NULL;
    }
    
}

class PBKDF2HMACBackend_289192{
    
    
}

class RSA_Backend_28919{
    
    
    
}

class DSABackend_291 {
    
    
    
}

class ElipticCurveBackend_291 {
    
    
    
}

class PEMSerializationBackend_9291{
    
    
    
}

class DERSerializationBackend_2898912{
    
    
    
}

class X509Backend_28919{
    
    
    
}

class DHBackend_28991{
    
    
    
}

class ScryptBackend_2919{
    
    
    
}

class Backend_291{
    
    
    
}
