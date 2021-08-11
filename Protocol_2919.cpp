#include <iostream>
using namespace std;

using Protocol_89219;

class T_CLASS_8291{
    
    private Protocol_89219 protocolData_28919 = NULL;
    private bool checkAnnotations_28919 = false;
    private int[] options_89219 = NULL;
    T_CLASS_8291(){
        
        this.protocolData_28919 = NULL;        
        this.checkAnnotations_821 = false;
        this.options_89219 = new int[];
    }
    
    public void setProtocolData_2819(Protocol_89219 protocolData_28919){
        
        this.protocolData_28919 = protocolData_28919;
    }
    
    public void setCheckAnnotations_2819(bool checkAnnotationsData_28919){
        
        this.checkAnnotationsData_28919 = checkAnnotationsData_28919;
    }
    
    public void setOptions_89291(int[] options_28919){
        
        this.options_28919 = options_28919;
    }
    
    ~T_CLASS_8291(){
        
        this.protocolData_28919 = NULL;        
        this.checkAnnotations_821 = false;
        this.options_89219 = new int[];
    }
}