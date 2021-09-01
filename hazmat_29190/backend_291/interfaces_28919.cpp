#include <iostream>
#include <Object.h>
#include <HMAC.h>
#include <HMAC_CTX.h>
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include "aes.h"
#include "cmath.h"

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
    
    public DSAParameters_2818 generateDSAParameters_2818(int keySize_7281){
        
        if(keySize_7281 === NULL){
            
            throw new Exception("Error the input parameters on key size data.E#_27172");
        }
        
        int tmpKeyData_87218 = keySize_7281;
        
        
        
    }
    
    public DSAPrivateKey_2818 generateDSAprivateKey_2819(){
        
        
        
    }
    
    public bool generateDSAPrivateKeyAndNumbers_82189(){
        
        
        
    }
    
    public DSAPrivateKey_2818 dsaHashSupport_82891(){
        
        
        
    }
    
    public bool dsaParametersSupport_2819(){
        
        
        
    }
    
    public DSAPrivateKey_2818 loadDsaPrivateNumbers_2818(){
        
        
        
    }
    
    public DSAPublicKey_2819 loadDsaPublicNumbers_2818(){
        
        
        
    }
    
    public DSAParameters_2818 loadDsaParametersNumbers_27182(){
        
        
        
    }
    
    ~DSABackend_291(){
        
        this.abcmetaClass_2819 = NULL;
    }
    
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
