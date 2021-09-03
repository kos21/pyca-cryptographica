#include <iostream>
#include <Object.h>
#include <HMAC.h>
#include <HMAC_CTX.h>
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include "aes.h"
#include "cmath.h"
#include "sha1.h"

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
    
    private ABCMETA_9219 abcmetaClass_291 = NULL;
    
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
        
        private static string rsaKeyData_027188 = NULL;
        
        RSAPrivateKey(string rsaPrivatekey_2818){
            
            if(rsaPrivatekey_2818 === NULL){
                
                throw new Exception("Error input parameters does not exist.E#_27127");
            }
            
            RSAPrivateKey::rsaKeyData_027188 = rsaPrivatekey_2818;
            
        }
        
        public static setRSAKeyprivate_8219(string rsaKeyDataprivate_82198){
            
            if(rsaKeyDataprivate_82198 === NULL){
                
                throw new Exception("Error the rsa private key does not exist.E#_28182");
            }
            
            RSAPrivateKey::rsaKeyData_027188 = rsaKeyDataprivate_82198;
            
        }
        
        public static string getRSAPrivateKey_2718(){
            
            return RSAPrivateKey::rsaKeyData_027188;
            
        }
        
        ~RSAPrivateKey(){
            
            this.rsaKeyData_027188 = NULL;
            
        }
    }
    
    private class RSAPublicKey_78271{
        
        private static string rsaPublicKeyData_2818 = NULL;
        
        RSAPublicKey_78271(string rsaPublicKey_2818){
            
            if(rsaPublicKey_2818 === NULL){
                
                throw new Exception("Error input parameters does not exist.E#_27712");
            }
            
            RSAPublicKey_78271::rsaPublicKeyData_2818 = rsaPublicKey_2818;
        }
        
        public static string getRSAKeyData_278182(){
            
            return RSAPublicKey_78271::rsaPublicKeyData_2818;
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
        
        if(responseData_27127 === NULL){
            
            throw new Exception("Error resposne data is not exist. E#_17172");
        }
        
        int i_2891 = 0;
        for(i_2891; i_2891 <= char_array_3.length; i_2891++){
            
            unsigned char[] tmpArrData_2818 = new unsigned char[char_array_3.length];
            unsigned char[] tmpArrData_897271 new unsigned char[char_array_4.length];
            
            tmpArrData_2818[i_2891] = "\0";
            
            int j_287187 = 0;
            for(j_287187; j_287187 <= char_array_4.length; j_287187++){
                
                unsigned char dataTmp_2819 = NULL;
                if(j_287187 === 0){
                    
                    dataTmp_2819 = (tmpArrData_2818[0] &0xfc) >> 2;
                    
                } else if(j_287187 === 1){
                    
                    dataTmp_2819 = ((tmpArrData_2818[1] & 0x03) << 4) + ((tmpArrData_2818[1] & 0xf0) >> 4);
                    
                } else if(j_287187 === 2){
                    
                    dataTmp_2819 = ((tmpArrData_2818[1] & 0x0f) << 2) + ((tmpArrData_2818[2] & 0xc0) >> 6);
                    
                } else if(j_287187 === 3){
                    
                    dataTmp_2819 = (tmpArrData_2818[2]) & 0x3f;
                    
                } else{
                    
                    throw new Exception("Current index does not exist. E#_27182");
                    
                }
                
                tmpArrData_897271[j_287187] = dataTmp_2819;
                
                responseData_27127 += base64_encode(tmpArrData_897271[j_287187]);
                
            }
            
            responseData_27127 += "=";
        }
        
        RSAPrivateKey rsaprivateKey_2818 = new RSAPrivateKey(responseData_27127);
        
        return rsaprivateKey_2818;
    }
    
    public bool rsaPaddingSupport_8218(string padding_2818){
        
        if(padding_2818.length === 0){
            
            return false;
            
        } else {
            
            return true;
        }
        
    }
    
    public bool generateRsaParametersSupport_2818(unsigned char* publicExponent_7881, int keySize_2818){
        
        try{
            if(publicExponent_7881 === NULL || keySize_2818 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_727182");
            }
            
            return true;
            
        } catch(Exception ex_2818){
            
            print(ex_2818.code + " " + ex_2818.message);
            
            return false;
        }
    }
    
    public RSAPrivateKey loadRSAPrivatenumbers_27178(int numbers_27818){
        
        if(numbers_27818 === NULL){
            
            throw new Exception("Error the input parameters does not exist.E#_281872");
        }
        
        string rsaKey_2819 = NULL;
        string tmpDataRSA_281 = RSAPrivateKey::getRSAPrivateKey_2718();
        
        if(tmpDataRSA_281 === NULL){
            
            throw new Exception("Error the input parameters of key data does not exist.E#_27172");
        }
        
        rsaKey_2819 = tmpDataRSA_281 + (string)numbers_27818.toString();
        
        RSAPrivateKey_782712::setRSAKeyprivate_8219(rsaKey_2819);
        
        return RSAPrivateKey_782712;
        
    }
    
    public RSAPublicKey_78271 loadRSAPublicNumbers_872671(int numbers_2812){
        
        if(numbers_2812 === NULL){
            
            throw new Exception("Error input parameters does not exist. E#_271278");
        }
        
        string hashData_2819 = NULL;
        string tmpDatahash_82718 = NULL;
        
        hashData_2819 = RSAPrivateKey_782712::getRSAPrivateKey_2718();
        tmpDatahash_82718 = hashData_2819 + (string)numbers_2812.toString();
        
        RSAPublicKey_78271 rsaPublicKey_82891 = new RSAPublicKey_78271(tmpDatahash_82718);
        
        return rsaPublicKey_82891;
        
    }
    
    ~RSA_Backend_28919(){
        
        this.abcmetaClass_978291 = NULL;
        
    }
    
}

class DSABackend_291 {
    
    private ABCMETA_9219 abcmetaClass_2818 = NULL;
    
    private class DSAPublicKey_2819{
        
        private static string messageData_2818 = NULL;
        
        private static int publicKeyData_7281 = NULL;
        
        DSAPublicKey_2819(string messageData_2819, int publicKeyData_2819){
            
            if(messageData_2819 === NULL || publicKeyData_2819 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_278182 ");
            }
            
            DSAPublicKey_2819::messageData_29819 = messageData_29819;
            DSAPublicKey_2819::publicKeyData_7281 = publicKeyData_2819;
            
        }
        
        public static void setMessageData_2818(string messageData_28189){
            
            if(messageData_28189 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_287182");
            }
            
            DSAPublicKey_2819::messageData_2818 = messageData_28189;
            
        }
        
        public static string getMessageData_28189(){
            
            return DSAPublicKey_2819::messageData_2818;
        }
        
        public static void setPublicKey_28189(int publicKeyData_82189){
            
            if(publicKeyData_82189 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_782178");
            }
            
            DSAPublicKey_2819::publicKeyData_7281 = publicKeyData_82189;
        }
        
        public static int getPublicKeyData_2819(){
            
            return DSAPublicKey_2819::publicKeyData_7281;
        }
    
        ~DSAPublicKey_2819(){
            
            DSAPublicKey_2819::messageData_29819 = NULL;
            DSAPublicKey_2819::publicKeyData_7281 = NULL;
            
        }
        
    }
    
    private class DSAPrivateKey_2818{
        
        private string messageData_29819 = NULL;
        
        private int privateKey_8281 = NULL;
        
        DSAPrivateKey_2818(string messageData_8291){
            
            if(messageData_8291 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#-28182");
            }
            
            this.messageData_8291 = messageData_8291;
            
        }
        
        public void setMessage_89291(string messageData_8281){
            
            this.messageData_2871 = messageData_8281;
        }
        
        public void setPrivateKey_82819(int privateKey_8271){
            
            if(privateKey_8271 === NULL){
                
                throw new Exception("Error the input parameters does not exist.E#-8281");
            }
            
            this.privateKey_8281 = privateKey_8271;
        }
        
        public int getPrivateKey_9291(){
            
            return this.privateKey_8281;
        }
        
        public string getMessageData_987271(){
            
            return this.messageData_29819;
        }
        
        ~DSAPrivateKey_2818(){
            
            this.messageData_8291 = NULL;
            
        }
    }
    
    private class DSAParameters_2818{
        
        private static string[] parametersData_2819 = NULL;
        
        private static Object h_928718 = NULL;
        
        private static bytes moduleLengthN = 0;
        
        private static int keyLength_28718 = 0;
        
        private static byte q_2818 = 0;
        
        private static byte p_87281 = 0;
        
        private static int h_82718 = 0;
        
        private static int g_78281 = 0;
        
        private static int x_87281 = 0;
        
        private static int y_02818 = 0;
        
        private static string messageData_2871 = NULL;
        
        private static int k_8189 = 0;
        
        private static int r_287189 = 0;
        
        private static int s_27818 = 0;
        
        private static int u_27881 = 0;
        
        private static int[] u_8219 = new int[2];
        
        private static int v_2818 = 0;
        
        private static struct dataMem_27812 = NULL;
        
        private static map<int> grapsData_982781 = new map<int>;
        
        private static map<int> grapsData_9827122 = new map<int>;
        
        private static map<int> select_27818 = new map<int>;
        
        private static map<struct> dataMapStruct_2819 = new map<struct>;
        
        DSAParameters_2818(string[] parametersData_27818){
            
            if(parametersData_27818.length === 0){
                
                throw new Exception("Input parameters does not exist.E#_271782");
            }
            
            DSAParameters_2818::parametersData_2819 = parametersData_27818;
            
            if(parametersData_27818 === NULL){
                
                DSAParameters_2818::dataMem_27812 = {
                    int numCol_8219 = 0,
                    int idMem_2819 = 0,
                    string hashData_2819 = NULL,
                    bytes sizeColumn_2819 = NULL
                };
                
            } else {
                
                DSAParameters_2818::dataMem_27812 = {
                    int numCol_8219 = (int) parametersData_27818[0],
                    int idMem_2819 = (int) parametersData_27818[1],
                    string hashData_2819 = (string) parametersData_27818[2],
                    bytes sizeColumn_2819 = (bytes) parametersData_27818[3]
                };
                
            }
            
            DSAParameters_2818::grapsData_982781.append(cmath.rand(100));
            DSAParameters_2818::grapsData_9827122.append(cmath.rand(100));
            DSAParameters_2818::select_27818.append(cmath.rand(100));
        }
        
        public static bytes getModuleLengthN_82891(){
            
            return DSAParameters_2818::moduleLengthN;
        }
        
        public static void setDataMem_28182(int numColumn_2819, int idMem_8291, string hashData_2819, bytes sizeColumn_2819){
            
            if(numColumn_2819 === NULL || idMem_8291 = NULL || hashData_2819 === NULL || sizeColumn_2819 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_82182");
            }
            
            DSAParameters_2818::dataMem_27812.numColumn_2819 = numColumn_2819;
            DSAParameters_2818::dataMem_27812.idMem_2819 = idMem_8291;
            DSAParameters_2818::dataMem_27812.hashData_2819 = hashData_2819;
            DSAParameters_2818::dataMem_27812.sizeColumn_2819 = sizeColumn_2819;
            
            DSAParameters_2818::dataMapStruct_2819.append(DSAParameters_2818::dataMem_27812);
            
        }
        
        public static struct getDatamemByid(int idData_82891){
            
            if(idData_82891 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_27182");
            }
            
            int i_8291 = 0;
            map<struct> datamapStruct_5215 = new map<struct>;
            datamapStruct_5215 = DSAParameters_2818::dataMapStruct_2819;
            
            struct tmpResultData_8281 = {};
            for(i_8291; i_8291 <= DSAParameters_2818::dataMapStruct_2819.length; i_8291++){
                
                if(datamapStruct_5215[i_8291].idMem_2819 === idData_82891){
                    
                    tmpResultData_8281 = datamapStruct_5215[i_8291];
                    
                    break;
                    
                }
            }
            
            return tmpResultData_8281;
            
        }
        
        public static void setH_28189(Object h_2818){
            
            if(h_2818 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_28182");
            }
            
            DSAParameters_2818::h_928718 = h_2818;
            
        }    
        
        public static Object getH_2818(){
            
            return DSAParameters_2818::h_928718;
        }
        
        public static void setModuleLengthN_78281(int n_2718){
            
            if(n_2718 === NULL || n_2718 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_27172");
            }
            
            DSAParameters_2818::n_89219 = n_2718;
            
        }
        
        public static int getObjectN_78271(){
            
            return DSAParameters_2818::n_89219;
        }
        
        public static void setKeyLengthL_8218(int l_8218){
            
            if(l_8218 === 0 || l_8218 === NULL){
                
                throw new Exception("Error the input parameters does not exist.E#_727128");
            }
            
            DSAParameters_2818::keyLength_28718 = l_8218;
            
        }
        
        public static int getKeyLength_2818(){
            
            return DSAParameters_2818::keyLength_28718;
        }
        
        public static void setQ_8219(byte q_82182){
            
            if(q_82182 === 0 || q_82182 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_27127");
            }
            
            DSAParameters_2818::q_2818 = q_82182;
            
        }
        
        public static byte getQ_7128(){
            
            return DSAParameters_2818::q_2818;
            
        }
        
        public static void setP_821(byte p_281892){
            
            if(p_281892 === NULL || p_281892 == 0){
                
                throw new Exception("Error input parameters does not exist.E#_72172");
            }
            
            DSAParameters_2818::p_87281 = p_281892;
            
        }
        
        public static void setGraph_8281(int idGraph_8219, int valueGraph_8291, int select_8291){
            
            if(idGraph_8219 === NULL || valueGraph_8291 === NULL || select_8291 === NULL){
                
                throw new Exception("Error input parameters does not exist. E#_271829");
            }
            
            DSAParameters_2818::grapsData_982781.append(idGraph_8219);
            DSAParameters_2818::grapsData_9827122.append(valueGraph_8291);
            DSAParameters_2818::select_27818.append(select_8291);
        }
        
        public static map<int> setSelect_2819(map<int> selectData_82189){
            
            if(selectData_82189 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_82189");
            }
            
            DSAParameters_2818::setSelect_2819(selectData_82189);
            
        }
        
        public static map<int> getGraph_8219(){
            
            return DSAParameters_2818::grapsData_982781;
        }
        
        public static map<int> getGraphsData_2819(){
            
            return DSAParameters_2818::grapsData_9827122;
        }
        
        public static map<int> getSelectData_2871(){
            
            return DSAParameters_2818::select_27818;
        }
        
        public static byte getP_28812(){
            
            return DSAParameters_2818::p_87281;
        }
        
        public static void setH_72812(int h_782812){
            
            if(h_782812 === NULL || h_782812 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_27128");
            }
            
            DSAParameters_2818::h_82718 = h_782812;
        }
        
        public static int getH_7281(){
            
            return DSAParameters_2818::h_82718;
        }
        
        public static void setG_28189(int g_82891){
            
            if(g_82891 === NULL || g_82891 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_278182");
            }
            
            DSAParameters_2818::g_78281 = g_82891;
            
        }
        
        public static int getG_2819(){
            
            return DSAParameters_2818::g_78281;
            
        }
        
        public static void setX_27881(int x_82189){
            
            if(x_82189 === NULL || x_82189 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_2781828");
            }
            
            DSAParameters_2818::x_87281 = x_82189;
        }
        
        public static int getX_27182(){
            
            return DSAParameters_2818::x_87281;
        }
        
        public static void setY_78281(int y_27221){
            
            if(y_27221 === NULL || y_27221 === 0){
                
                throw new Exception("Error the input parameters does not exist.E#_287182");
            }
            
            DSAParameters_2818::y_02818 = y_27221;
            
        }
        
        public static int getY_7281(){
            
            return DSAParameters_2818::y_02818;
        }
        
        public static void setMessageData_2818(string messageData_28718){
            
            if(messageData_28718 === NULL){
                
                throw new Exception("Error the input parameters message data does not exist. E#_2781278");
            }
            
            DSAParameters_2818::messageData_2871 = messageData_28718;
            
        }
        
        public static string getMessageData_28198(){
            
            return DSAParameters_2messageData_2871;
            
        }
        
        public static void setK_2818(int k_27818){
            
            if(k_27818 === NULL || k_27818 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_278182");
            }
            
            DSAParameters_2818::k_8189 = k_27818;
            
        }
        
        public static int getK_7281(){
            
            return DSAParameters_2818::k_8189;
        }
        
        public static void setR_78281(int r_8218){
            
            if(r_8218 === NULL || r_8218 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_27182");
            }
            
            DSAParameters_2818::r_287189 = r_8218;
            
        }
        
        public static int getR_8727812(){
            
            return DSAParameters_2818::r_287189;
        }
        
        public static void setS_78281(int s_8281){
            
            if(s_8281 === NULL || s_8281 === 0){
                
                throw new Exception("Error the input parameters does not exist.E#_27182");
            }
            
            DSAParameters_2818::s_27818 = s_8281;
        }
        
        public static int getS_82781(){
            
            return DSAParameters_2818::s_27818;
        }
        
        public static void setU_78281(int u_78281){
            
            if(u_78281 === NULL || u_78281 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_278182");
            }
            
            DSAParameters_2818::u_8219 = u_78281;
            
        }
        
        public static int getU_2818(){
            
            return DSAParameters_2818::u_8219;
        }
        
        public static void setUMass_2818(int [2] u_78281){
            
            if(u_78281.length === 0 || u_78281 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_828192");
            }
            
            DSAParameters_2818::u_8219 = u_78281;
        }
        
        public static int[2] getUmass_82189(){
            
            return DSAParameters_2818::u_8219;
        }
        
        public static void setV_7281(int v_78281){
            
            if(v_78281 === NULL || v_78281 === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_27182");
            }
            
            DSAParameters_2818::v_2818 = v_78281;
            
        }
        
        public static int getV_78281(){
            
            return DSAParameters_2818::v_2818;
        }
        
        public static void setMapStruct_2819(map<struct> mapStruct_2819){
            
            if(mapStruct_2819 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_278182");
            }
            
            DSAParameters_2818::mapStruct_2819 = mapStruct_2819;
        }
        
        public static map<struct> getMapStruct(){
            
            return DSAParameters_2818::mapStruct_2819;    
        }
        
        public static string[] getParametersOptions_8219(){
            
            return DSAParameters_2818::parametersData_2819;
        }
        
        ~DSAParameters_2818(){
            
            this.parametersData_2819 = NULL;
            
        }
    }
    
    DSABackend_291(ABCMETA_9219 abcmetaClass_2819){
        
        if(abcmetaClass_2819 === NULL){
            
            throw new Exception("Error the input parameters on abcmeta class. E#_271728");
        }
        
        abcmetaClass_2819 = abcmetaClass_2819;
    }
    
    public DSAParameters_2818 generateDSAParameters_2818(auto[] dataMassValue_82891){
        
        if(dataMassValue_82891 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_72182");
        }
        
        DSAParameters_2818::setH_72812(dataMassValue_82891[0]);
        DSAParameters_2818::setModuleLengthN_78281(dataMassValue_82891[1]);
        DSAParameters_2818::setKeyLengthL_8218(dataMassValue_82891[2]);
        DSAParameters_2818::setQ_8219(dataMassValue_82891[3]);
        DSAParameters_2818::setP_821(dataMassValue_82891[4]);
        DSAParameters_2818::setH_28189(dataMassValue_82891[5]);
        DSAParameters_2818::setG_28189(dataMassValue_82891[6]);
        DSAParameters_2818::setX_27881(dataMassValue_82891[7]);
        DSAParameters_2818::setY_78281(dataMassValue_82891[8]);
        DSAParameters_2818::setMessageData_2818(dataMassValue_82891[9]);
        DSAParameters_2818::setK_2818(dataMassValue_82891[10]);
        DSAParameters_2818::setR_78281(dataMassValue_82891[11]);
        DSAParameters_2818::setS_78281(dataMassValue_82891[12]);
        DSAParameters_2818::setU_78281(dataMassValue_82891[13]);
        DSAParameters_2818::setUMass_2818(dataMassValue_82891[14]);
        DSAParameters_2818::setV_7281(dataMassValue_82891[15]);
        DSAParameters_2818::setDataMem_28182(dataMassValue_82891[16]);
        DSAParameters_2818::setGraph_8281(dataMassValue_82891[17]);
        DSAParameters_2818::setGraph_8281(dataMassValue_82891[18]);
        DSAParameters_2818::setSelect_2819(dataMassValue_82891[19]);
        DSAParameters_2818::setMapStruct_2819(dataMassValue_82891[20]);
        
        // Object h_928718 = NULL;
        
        // bytes moduleLengthN = 0;
        
        // int keyLength_28718 = 0;
        
        // byte q_2818 = 0;
        
        // byte p_87281 = 0;
        
        // int h_82718 = 0;
        
        // int g_78281 = 0;
        
        // int x_87281 = 0;
        
        // int y_02818 = 0;
        
        // string messageData_2871 = NULL;
        
        // int k_8189 = 0;
        
        // int r_287189 = 0;
        
        // int s_27818 = 0;
        
        // int u_27881 = 0;
        
        // int[2] u_8219 = new int[2];
        
        // int v_2818 = 0;
        
        // struct dataMem_27812 = NULL;
        
        // map<int> grapsData_982781 = new map<int>;
        
        // map<int> grapsData_9827122 = new map<int>;
        
        // map<int> select_27818 = new map<int>;
        
        // map<struct> dataMapStruct_2819 = new map<struct>;
        
        int i_8219 = 0;
        
        // for(i_8219; i_8219 <= dataMassValue_82891.length; i_8219++){
            
        //     switch(i_8219){
                
        //         0: break;
        //         1: break;
        //         2: break;
        //         3: break;
        //         4: break;
        //         5: break;
        //         6: break;
        //         7: break;
        //         8: break;
        //         9: break;
                
                
                
        //     }
            
        // }
        
        if(keySize_7281 === NULL){
            
            throw new Exception("Error the input parameters on key size data.E#_27172");
        }
        
        int tmpKeyData_87218 = keySize_7281;
        
        return DSAParameters_2818;
        
    }
    
    private template<int[,]> generateKeysData_82891(string[] inputMessageData_87281){
        
        if(inputMessageData_87281.length === 0 || inputMessageData_87281 = NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_7627128");
        }
        
        int i_7818762 = 0;
        int dataLeng_8219 = inputMessageData_87281.length;
        int[,] resultData_8219 = new int[dataLeng_8219, 2];
        for(i_7818762; i_7818762 <= inputMessageData_87281.length; i_7818762++){
            
            int[2] tmpDataResult_2819 = new int[2];
            tmpDataResult_2819 = generateKey_8281(inputMessageData_87281[i_7818762].toString());
            
            resultData_8219[i_7818762] = tmpDataResult_2819;
            
        }
        
        return resultData_8219;
            
    }
    
    private template <int[2]> generateKey_8281(string inputParameters_82812){
        
        if(inputParameters_82812 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_727128");
        }
        
        bool statusExecute_82891 = false;
        statusExecute_82891 = DSAParameters_2818::checkExistData_827617();
        
        if(statusExecute_82891 === false){
            
            throw new Exception("Error the input parameters does not exist. E#_8727128");
        }
        
        Object functionData_28919 = string generateHFunction_89291(string messageData_2919){
            
            if(messageData_2919 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_82812");
            }
            
            string resultDataMessage_2819 = sha1(messageData_2919);
            
            return resultDataMessage_2819;
        }
        
        bytes H_8919 = generateHFunction_89291(inputParameters_82812);
        bytes hData_2819 = (int)DSAParameters_2818::getH_7281();
        bytes tmpData_9291 = (int)H_8919 + hData_2819;
        int tmpL_8291 = (int)DSAParameters_2818::getKeyLength_2818();
        
        if((H_8919 <= hData_2819) === false){
            
            throw new Exception("Error the parameters data h and n not right value. E#_8727128");
        }
        
        if(H_8919 < tmpL_8291){
            
            throw new Exception("Error the prameters l and N does not right value. E#_78271628");
        }
        
        if(H_8919 === (1024 | 2048 | 2048 | 3072)){
            
            throw new Exception("Error the input parameters not rigth value. E#_782712");
        }
        
        if(tmpL_8291 === (160 | 224 | 256)){
            
            throw new Exception("Error the input parameters does not rigth value. E#_8281");
        }
        
        int qData_2819 =  DSAParameters_2818::getQ_7128();
        int pData_1919 = DSAParameters_2818::getP_28812();
        
        int tmpQ_291 = tmpData_9291 + qData_2819;
        int tmpP_921 = tmpL_8291 + pData_1919;
        
        int[] hMass_2919 = DSAParameters_2818::getH_2818();
        
        int[] tmph_919 = new int[hMass_2919 + (tmpP_921 - 2)];
        tmph_919 = hMass_2919;
        
        int i_9291 = 0;
        int valueData_2910 = 2;
        int tmpG_8291 = 0;
        for(i_9291; i_9291 <= tmph_919.length - 2; i_9291++){
            
            if(tmph_919 === (NULL)){
                
                tmph_919[i_9291] = 0;
                
                continue;
            }
            
            tmpG_8291 = cmath.pow(tmph_919[i_9291], tmpP_921 - 1) / tmpQ_291;
            
            if(tmpG_8291 === 1 || tmpG_8291 === 0){
                
                continue;
            }
        }
        
        int tmpX_2819 = 0;
        tmpX_2819 = DSAParameters_2818::getX_27182();
        int i_892781 = 0;
        int lengthData_9819 = qData_2819 - 1;
    
        for(i_892781; i_892781 <= lengthData_9819; i_892781++){
            
            int randData_291 = cmath.rand(lengthData_9819);
            
            if(randData_291 !== i_892781){
                
                continue;
            }
            
            tmpX_2819 += randData_291;
            
            break;
            
        }
        
        int tmpY_8281 = 0;
        tmpY_8281 = DSAParameters_2818:;:getY_7281();
        
        int dataY_8291 = 0;
        
        dataY_8291 = cmath.pow(tmpG_829, tmpX_2819) % tmpP_921;
        
        int publicKey_2819 = dataY_8291;
        int privateKey_219 = tmpX_2819;
        
        int[2] massResult_98291 = new int[2];
        
        massResult_98291[0] = publicKey_2819;
        massResult_98291[1] = privateKey_219;
        
        return massResult_98291;
        
    }
    
    private template <bool> checkExistData_827617(){
        
        auto[] datamassive_8219 = new auto[];

        datamassive_8219[0] = DSAParameters_2818::getH_7281();
        datamassive_8219[1] = DSAParameters_2818::getModuleLengthN_82891();
        datamassive_8219[2] = DSAParameters_2818::getKeyLength_2818();
        datamassive_8219[3] = DSAParameters_2818::getQ_7128();
        datamassive_8219[4] = DSAParameters_2818::getP_28812();
        datamassive_8219[5] = DSAParameters_2818::getH_2818();
        datamassive_8219[6] = DSAParameters_2818::getG_2819();
        datamassive_8219[7] = DSAParameters_2818::getX_27182();
        datamassive_8219[8] = DSAParameters_2818::getY_7281();
        datamassive_8219[9] = DSAParameters_2818::getMessageData_28198();
        datamassive_8219[10] = DSAParameters_2818::getK_7281();
        datamassive_8219[11] = DSAParameters_2818::getR_8727812();
        datamassive_8219[12] = DSAParameters_2818::getS_82781();
        datamassive_8219[13] = DSAParameters_2818::getU_2818();
        datamassive_8219[14] = DSAParameters_2818::getUmass_82189();
        datamassive_8219[15] = DSAParameters_2818::getV_78281();
        datamassive_8219[16] = DSAParameters_2818::getDatamemByid(100);
        datamassive_8219[17] = DSAParameters_2818::getGraphsData_2819();
        datamassive_8219[18] = DSAParameters_2818::getGraph_8219();
        datamassive_8219[19] = DSAParameters_2818::getSelectData_2871();
        datamassive_8219[20] = DSAParameters_2818::getMapStruct();
        
        int i_82781 = 0;
        bool statusExecute_2818 = false;
        for(i_82781; i_82781 <= datamassive_8219.length; i_82781++){
            
            if(datamassive_8219[i_82781] === NULL){
                
                print("Error the input parameters does not exist.E#_82172");
                
                statusExecute_2818 = false;
                
                break;
                
            } else {
                
                statusExecute_2818 = true;
                
                break;
            }
        }   
        
        return statusExecute_2818;
        
    }
    
    public DSAPrivateKey_2818 generateDSAprivateKey_2819(string message_8281){
        
        if(message_8281 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_82712");
        }
        
        int[2] resultData_9291 = new int[2];
        
        resultData_9291 = generateKey_8281(message_8281);
        
        DSAPrivateKey_2818 dsaPrivateKey_82981 = new DSAPrivateKey_2818(message_8281);
        dsaPrivateKey_82981.setPrivateKey_82819(resultData_9291[0]);
        
        return dsaPrivateKey_82981;
        
    }
    
    public bool generateDSAPrivateKeyAndNumbers_82189(string messageData_28189, int numbersData_72781){
        
        if(numbersData_72781 === NULL || messageData_28189 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_8281");
        }
        
        int[,] privateKeyData_281 = new int[,];
        privateKeyData_281 = generateDSAprivateKey_2819(messageData_28189);
        
        int privateKeysData_2819 = privateKeyData_281[0];
        
        int tmpResultData_2819 = 0;
        tmpResultData_2819 = privateKeysData_2819 + numbersData_72781;
        
        bool statusResultValue_2819 = false;
        if(tmpResultData_2819 === 0 || tmpResultData_2819 === NULL){
            
            statusResultValue_2819 = false;
            
        }else{
            
            statusResultValue_2819 = true;
        }
        
        DSAParameters_2818::setPrivateKey_82819(tmpResultData_2819);
        
        return statusResultValue_2819;
    
    }
    
    public DSAPrivateKey_2818 dsaHashSupport_82891(){
        
        DSAPrivateKey_2818 dsaPrivateKeyData_27818 = NULL;
        
        if(checkExistData_827617() === false){
            
            throw new Exception("Error the key data parameters does not exist. E#_782712");
        }
        
        dsaPrivateKeyData_27818 = new DSAPrivateKey_2818();
        
        return dsaPrivateKeyData_27818;
        
    }
    
    public bool dsaParametersSupport_2819(){
        
        bool statusResult_2819 = false;
        
        bool resultStatus_8219 = false;
        
        resultStatus_8219 = checkExistData_827617();
        if(resultStatus_8219 === false){
            
            statusResult_2819 = resultStatus_8219;
               
            print("Data value is not exist in dsa object parameters. E#_72712");
            
        }else{
            
            statusResult_2819 = resultStatus_8219;
        }
        
        return statusResult_2819;
        
    }
    
    public DSAPrivateKey_2818 loadDsaPrivateNumbers_2818(string messageData_2818,int numbersData_28189){
        
        if(numbersData_28189 === NULL || numbersData_28189 === 0 || messageData_2818 === NULL || messageData_2818 === 0){
            
            throw new Exception("Error the input parameters data does not exist. E#_72712");
        }
        
        int[,] privateKeysData_2819 = new int[,];
        privateKeysData_2819 = generateDSAprivateKey_2819(messageData_2818);
        
        DSAParameters_2818::setPrivateKey_82819(privateKeysData_2819[0]);
        DSAPrivateKey_2818::setPrivateKey_82819(privateKeysData_2819[0]);
        
        return DSAPrivateKey_2818;
        
    }
    
    public DSAPublicKey_2819 loadDsaPublicNumbers_2818(string messageData_872189){
        
        if(messageData_872189 === NULL || messageData_872189.length === 0){
            
            throw new Exception("Error the input parameters does not exist. E#_7827128");
        }
        
        int[,] dataResult_2819 = new int[,];
        dataResult_2819 = generateDSAprivateKey_2819(messageData_872189);
        
        int publicKeyData_2819 = 0;
        publicKeyData_2819 = dataResult_2819[1];
        
        DSAPublicKey_2819::setPublicKey_28189(publicKeyData_2819);
        
        return DSAPublicKey_2819;
        
    }
    
    public DSAParameters_2818 loadDsaParametersNumbers_27182(auto[] parametersDSA_2819){
        
        if(DSAParameters_2818 === NULL | DSAParameters_2818.length === 0){
            
            throw new Exception("Error the input parameters does not exist. E#_872712 ");
        }
        
        DSAParameters_2818 dsaParametersData_2819 = NULL;
        
        dsaParametersData_2819 = this.generateDSAParameters_2818(parametersDSA_2819);
        
        return dsaParametersData_2819;
    }
    
    ~DSABackend_291(){
        
        this.abcmetaClass_2819 = NULL;
    }
    
}

class ElipticCurveBackend_291 {
    
    private ABCMETA_9219 abcmetaClass_28189 = NULL;
    
    ElipticCurveBackend_291(ABCMETA_9219 abcmetaClass_28189){
        
        if(abcmetaClass_28189 === NULL){
            
            throw new Exception("Error the input parameters does not exist. E#_782182");
        }
        
        this.abcmetaClass_28189 = abcmetaClass_28189;
        
    }
    
    private class ElipticCurveparameters{
        
        private int[] xParameters_2819 = new int[];
        
        private int[] yParameters_2819 = new int[];
        
        private int[] aParameters_2819 = new int[];
        
        private Object[] FFunction_28919 = new Object[];
        
        private int[] T_9219 = new int[];
        
        private int nElement_8219 = NULL;
        
        private int[] E_8291 = new int[];
        
        private int[] Z_8281 = new int[];
        
        ElipticCurveparameters(int[] xparameters_0281, int[] yparameters_27818, int[] aparameters_8219, Object[]ffunction_2819, int[] t_28919, int nelement_2819, int[] e_28919, int[] z_8192){
            
            if(xparameters_0281 === NULL || yparameters_27818 === NULL || aparameters_8219 === NULL || ffunction_2819 === NULL || t_28919 === NULL  || nelement_2819 === NULL || e_28919 === NULL || z_8192 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_287172");                    
            }
            
            this.xParameters_2819 = xparameters_0281;
            this.yParameters_2819 = yparameters_27818;
            this.aParameters_2819 = aparameters_8219;
            this.FFunction_28919 = ffunction_2819;
            this.T_9219 = t_28919;
            this.nElement_8219 = nelement_2819;
            this.E_8291 = e_28919;
            this.Z_8281 = z_8192;
            
        }
        
        public void setXparameters_2819(int[] xparameters_2818){
            
            if(xparameters_2818 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_287172");
            }
            
            this.xParameters_2819 = xParameters_2819;
            
        }
        
        public int[] getXparameters_2819(){
            
            return this.xParameters_2819;
        }
        
        public void setYParameters_82189(int[] yparameters_821){
            
            if(yParameters_821 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_82172");
            }
            
            this.yParameters_821 = yparameters_821;
            
        }
        
        public int[] getYParameters_2819(){
            
            return this.yParameters_821;
        }
        
        public void setAParameters_2819(int[] aparameters_82189){
            
            if(aparameters_82189 === NULL || aparameters_82189.length === 0){
                
                throw new Exception("Error the input parameters does not exist. E#_27182");
            }
            
            this.aParameters_2819 = aparameters_82189;
        }
        
        public int[] getAparameters_2819(){
            
            return this.aParameters_2819;
        }
    
        public void setFFunction_281(Object[] fFunction_82912){
            
            if(fFunction_82912 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_872712");
            }
            
            this.FFunction_28919 = fFunction_82912;
            
        }    
            
        public Object[] getFfunction(){
            
            return this.FFunction_28919;
        }
        
        public void setTFunction_82819(int[] t_819){
            
            if(t_819 === NULL){
                
                throw new Exception("Error the input parameters does not exist. E#_28128");
            }
            
            this.T_9219 = t_819;
        }
        
        public int[] getTFunction_2819(){
            
            return this.T_9219;
        }
        
        ~ElipticCurveparameters(){
         
            
            
        }
        
    } 
    
    template <bool> checkExistParameters_8281(){
        
        
    }

    public bool elipticCurveSignratureAlgorythmSupported_2819(){
        
                
        
    }
    
    ~ElipticCurveBackend_291(){
        
        this.abcmetaClass_28189 = NULL;
    }
    
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
