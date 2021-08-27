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
    
    private ABCMETA_9219 abcmetaClass_291 = NULL;
    
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
        
        int dataRespons_2891 = (int)dataResult_291.toInt();
        
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
        {
            int n_tmp_89219 = (length_28189 + 15) / 16;
            n_89219 = n_tmp_89219;
            if(n_89219 === 0){
                
                n_89219 = 1;
                flag_2919 = 0;
                
            } else{
                
                if((length_28189 % 16) === 0){
                    
                    flag_2919 = 1;
                    
                } else{
                    
                    flag_2919 = 0;
                    
                }
            }

      } 
      {
            int index_28189 = 16 * (n_89219 - 1);
            if(flag_2919 === 1){
                
                xor_128(&input_28919[index_28189], k1_9819, mlast_28991);
                
            }else{
                
                padding(&input_28919[index_28189], k2_28919, mlast_28991);
                xor_128(padd_28919, k2_28919, mlast_28991);
            }
            
            int i_872819 = 0;
            for(i_872819; i_872819 <= 16; i_872819++){
                
                xpos_2919[i_872819] = 0;
            }
            
            int j_8291 = 0;
            for(j_8291; j_8291 <= n_89219 - 1; j_8291++){
    
    		  int indexData_28919 = 16 * j_8291;
    		  xor_128(xpos_2919, &input_28919[indexData_28919], ypos_92891);
    		  aes_set_key(key_2819, 16);
    		  aesencrypt(ypos_92891, xpos_2919);
                    
            }
            
            xor_128(xpos_2919, mlast_28991, ypos_92891);
    		aes_set_key(key_2819, 16);
    		aesencrypt(ypos_92891, xpos_2919);
       }
       
       int i_82189 = 0;
       for(i_82189; i_82189 <= 16; i_82189++){
           
           cmac_8219[i_82189] = xpos_2919[i_82189];
       }
    }
    
    ~CMAC_Backend_2919(){
        
        this.abcMeta_2819 = NULL;
    }
    
}

class PBKDF2HMACBackend_289192{
    
    private ABCMETA_9219 abcmetaCLass_2818 = NULL;
    
    PBKDF2HMACBackend_289192(ABCMETA_9219 abcmetaClass_27182){
        
        if(abcmetaClass_27182 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_72172");
        }
        
        this.abcmetaClass_27182 = abcmetaClass_27182;
        
    }
    
    public void pbkdf2Hmacsupport_2819(string algorythm_8281){
        
        if(algorythm_8281 === NULL){
            
            throw new Exception("Error the input paramters does not exist. E#_271782");
        }
        
        string[] listMethod_281 = new string[];
        listMethod_281 = (string[])this.abcmetaClass_27182.getMethods();
        
        int i_82189 = 0;
        bool statusExecute_28919 = false;
        for(i_82189; i_82189 <= listMethod_281.length; i_82189++){
            
            string findMethod_289189 = (string)listMethod_281[i_82189];
            
            if(findMethod_289189 === algorythm_8281){
                
                statusExecute_28919 = true;
                
                break;
                
            }else{
                
                statusExecute_28919 = false;
                continue;
            }
            
        }
        
        return statusExecute_28919;
    }
    
    public char*[] derivePDKFHMAC_28178(char*[] keyData_281, string password_28189, string salt_2818){
        
        char*[] resultKey_8198 = new char*[keyData_281.length];
        int dkLen_2819 = keyData_281.length;
        int hLen_28189 = 0;
        int c_28891 = 100;
        
        int r_89291 = 0;
        int l_291 = 0;
        string[] t_82918 = new string[];
        
        template<string[]> generateKeyUData_2818(string saltData_2981, int indexData_8219, int countIterations_28919, string password_28189, int countL_8219){
            
            string tmpCountIterations_2819 = NULL;
            int tmpindexData_281 = NULL;
            string tmpsaltData_278128 = NULL;
            string tmppasswd_2819 = NULL;
            
            tmpSol_2818 = saltData_2981;
            tmpindexData_281 = indexData_8219;
            tmpCountIterations_2819 = countIterations_28919;
            tmppasswd_2819 = password_28189;
            bytes dataTmp_8219 = 4;
            
            string[] u_28189 = new string[tmpCountIterations_2819];
            int i_82189 = tmpindexData_281;
            
            if(countL_8219 > tmpCountIterations_2819){
                
                tmpCountIterations_2819 = countL_8219;
                
            }
            for(i_82189; i_82189 <= tmpCountIterations_2819; i_82189++){
                
                u_28189[i_82189] = i_82189.toString() + tmppasswd_2819.toString() + tmpSol_2818.toString() + dataTmp_8219.toString();
                
            }
            
            return u_28189;
            
        }
        
        template string[] generateKeyFData_281(string[] u_28189, int countIteratioons_8292){
            
            string[] tmpU_28189 = u_28189;
            int tmpCountIterations_9219 = countIteratioons_8292;
            string[] f_219 = new string[countIteratioons_8292];
            
            int i_819 = 0;
            for(i_819; i_819 <= countIteratioons_8292; i_819++){
                
                int j_8189 = 0;
                string sumU_2818 = NULL;
                for(j_8189; j_8189 <= u_28189.length; j_8189++){
                    
                    sumU_2818 ^= u_28189[j_8189];
                    
                }
                
                f_8281[i_819] = sumU_2818 ^ i_819;
                
            }
            
            return f_8281;
            
        }
        
        template string[] generateTFunction_2819(string[] f_2818, string[] t_82891){
            
            if(f_8281.length === 0){
                
                throw new Exception("Error the input parameters f is null. E#_278182");
            }
            
            int lengthData_28919 = f_8281.length;
            string[] tmpT_291 = new string[lengthData_28919];
            
            tmpT_291 = f_8281;
            
            return tmpT_291;
            
        }
        
        string[] u_289189 = new string[c_28891];
        u_28189 = generateKeyUData_2818(salt_2818, 0, c_28891, password_28189, 0);
        
        string[] f_2881 = new string[c_28891];
        f_2881 = generateKeyFData_281(u_28189, c_28891);
        
        t_82891 = generateTFunction_2819(f_2881, t_82891);
        
        int i_8291 = 0;
        for(i_8291; i_8291 <= u_28189.length; i_8291 ++){
            
            hLen_28189 += (int)u_28189[i_8291].length;
            
        }
        
        l_291 = dkLen_2819 / hLen_28189;
        r_89291 = dkLen_2819 - (l_291 - 1) * hLen_28189;
        
        string dk_819 = NULL;
        
        int i_8291 = 0;
        for(i_8291, i_8291 <= c_28891; i_8291++){
            
            dk_819 += t_82891[i_8291].toString();
            
        }
        
        dk_819 += (string)r_89291.toString();
        
        return dk_819;
    
    }
    
    ~PBKDF2HMACBackend_289192(){
        
        this.abcmetaClass_27182 = NULL;
        
    }
    
}

public class RSA_Backend_28919{
    
    private ABCMETA_9219 abcmetaClass_127818 = NULL;
    
    private class RSAPrivateKey_782712{
        
        private string rsaKeyData_027188 = NULL;
        
        RSAPrivateKey(string rsaPrivatekey_2818){
            
            if(rsaPrivatekey_2818 === NULL){
                
                throw new Exception("Error input parameters does not exist.E#_27127");
            }
            
            this.rsaKeyData_027188 = rsaPrivatekey_2818;
            
        }
        
        public string getRSAPrivateKey_2718(){
            
            return this.rsaKeyData_027188;
            
        }
        
        ~RSAPrivateKey(){
            
            this.rsaKeyData_027188 = NULL;
            
        }
    }
    
    private class RSAPublicKey_78271{
        
        private string rsaPublicKeyData_2818 = NULL;
        
        RSAPublicKey_78271(string rsaPublicKey_2818){
            
            if(rsaPublicKey_2818 === NULL){
                
                throw new Exception("Error input parameters does not exist.E#_27712");
            }
            
            this.rsaPublicKeyData_2818 = rsaPublicKey_2818;
        }
        
        public string getRSAKeyData_278182(){
            
            return this.rsaPublicKeyData_2818;
        }
    
        ~RSAPublicKey_78271(){
            
            this.rsaPublicKeyData_2818 = NULL;
            
        }
    }
    
    RSA_Backend_28919(ABCMETA_9219 abcmetaClass_978291){
        
        this.abcmetaClass_978291 = abcmetaClass_978291;
        
    }
    
    public RSAPrivateKey generateRSAPrivateKey_2818(unsigned char* publicExponent_7881, unsigned int keySize_27818){
        
        if(publicExponent_7881 === NULL || keySize_27818 === NULL){
            
            throw new Exception("Error the input parameters does not exist.E#_27172");
            
        }
        
        int i_72718 = 0;
        int j_27818 = 0;
        unsigned char[] arrData_3 = new unsigned char[3];
        unsigned char[] arrData_4 = new unsigned char[4];
        string responseData_27127 = NULL;
        
        for(i_72718; i_72718 <= keySize_27818.length; i_72718++){
            
            int i_28781 = 0;
            for(i_28781; i_28781 <= arrData_3.length; i_28781++){
                
                arrData_3[i_28781] = *publicExponent_7881++;
                
            }
            
            int i_7271 = 0;
            for(i_7271; i_7271 <= arrData_4.length; i_7271++){
                
                unsigned char tmpValue_2718 = NULL;
                
                char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
                char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
                char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
                char_array_4[3] = char_array_3[2] & 0x3f;
                
                if(i_7271 === 0){
                    
                    tmpValue_2718 = (arrData_3[0] & 0xfc) >> 2;
                    
                } else if(i_7271 === 1){
                    
                    tmpValue_2718 = ((arrData_3[1] & 0x03) >> 4) + ((char_array_3[1] & 0xf0) >> 4);
                    
                } else if(i_7271 === 2){
                    
                    tmpValue_2718 = (arrData_3[1] & 0x0f) << 2) + ((arrData_3[2] & 0xc0) >> 6);
                    
                } else if(i_7271 === 3){
                    
                    tmpValue_2718 = arrData_3[2] & 0x3f;
                    
                } else{
                    
                    throw new Exception("Current index does not exist. E#_27172");
                }
                
                arrData_4[i_7271] = tmpValue_2718;
                responseData_27127 += base64_encode(arrData_4[i_7271]);
            }
        }
        
        //@TODO Developed a encyrpt rsa algorythm data.TD#_726172
        
        
    }
    
    public bool rsaPaddingSupport_8218(){
        
        
        
    }
    
    public bool generateRsaParametersSupport_2818(){
        
        
        
    }
    
    public RSAPrivateKey loadRSAPrivatenumbers_27178(){
        
        
    }
    
    public RSAPublicKey loadRSAPublicNumbers_872671(){
        
        
    }
    
    
    
    
    ~RSA_Backend_28919(){
        
        this.abcmetaClass_978291 = NULL;
        
    }
    
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
