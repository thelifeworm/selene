#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"

namespace io { struct security_context_t; }

#include "magic/request_parameters_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_PARAMETERS_V1_9]
    // => Windows 10 v1607
    //
    struct request_parameters_v1_9_t                                                                  
    {                                                                                                 
        union u0_parameters_t                                                                         
        {                                                                                             
            struct u1_create_t                                                                        
            {                                                                                         
                // Windows 10 v1607                                                                   
                //                                                                                    
                _m03 struct io::security_context_t* security_context;                                   //{ +0x0000    } | .SecurityContext
                _m04 uint32_t                       options;                                            //{ +0x0008    } | .Options
                _m05 uint16_t                       file_attributes;                                    //{ +0x0010    } | .FileAttributes
                _m06 uint16_t                       share_access;                                       //{ +0x0012    } | .ShareAccess
                _m07 uint32_t                       ea_length;                                          //{ +0x0018    } | .EaLength
                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Create.$", 0x0, false, 0x92056099a1cc024d );                                                  
                SDK_FIXED_SIZE( u1_create_t, 0x20 );                                                  
            };                                                                                        
                                                                                                      
            struct u2_read_t                                                                          
            {                                                                                         
                // Windows 10 v1607                                                                   
                //                                                                                    
                _m09 uint64_t length;                                                                   //{ +0x0000    } | .Length
                _m10 uint32_t key;                                                                      //{ +0x0008    } | .Key
                _m11 int64_t  device_offset;                                                            //{ +0x0010    } | .DeviceOffset
                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Read.$", 0x0, false, 0x2ffee441891d280 );                                               
                SDK_FIXED_SIZE( u2_read_t, 0x18 );                                                    
            };                                                                                        
                                                                                                      
            struct u3_write_t                                                                         
            {                                                                                         
                // Windows 10 v1607                                                                   
                //                                                                                    
                _m13 uint64_t length;                                                                   //{ +0x0000    } | .Length
                _m14 uint32_t key;                                                                      //{ +0x0008    } | .Key
                _m15 int64_t  device_offset;                                                            //{ +0x0010    } | .DeviceOffset
                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Write.$", 0x0, false, 0xa6e01072c841b9e3 );                                               
                SDK_FIXED_SIZE( u3_write_t, 0x18 );                                                   
            };                                                                                        
                                                                                                      
            struct u4_device_io_control_t                                                             
            {                                                                                         
                // Windows 10 v1607                                                                   
                //                                                                                    
                _m17 uint64_t output_buffer_length;                                                     //{ +0x0000    } | .OutputBufferLength
                _m18 uint64_t input_buffer_length;                                                      //{ +0x0008    } | .InputBufferLength
                _m19 uint32_t io_control_code;                                                          //{ +0x0010    } | .IoControlCode
                _m20 void*    type3_input_buffer;                                                       //{ +0x0018    } | .Type3InputBuffer
                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.DeviceIoControl.$", 0x0, false, 0x49f55c20f8333eea );                                                      
                SDK_FIXED_SIZE( u4_device_io_control_t, 0x20 );                                                      
            };                                                                                        
                                                                                                      
            struct u5_others_t                                                                        
            {                                                                                         
                // Windows 10 v1607                                                                   
                //                                                                                    
                _m22 void*    arg1;                                                                     //{ +0x0000    } | .Arg1
                _m23 void*    arg2;                                                                     //{ +0x0008    } | .Arg2
                _m24 uint32_t io_control_code;                                                          //{ +0x0010    } | .IoControlCode
                _m25 void*    arg4;                                                                     //{ +0x0018    } | .Arg4
                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.Others.$", 0x0, false, 0x98ac726492b450a7 );                                                 
                SDK_FIXED_SIZE( u5_others_t, 0x20 );                                                  
            };                                                                                        
                                                                                                      
            // Windows 10 v1607                                                                       
            //                                                                                        
            _m08 u1_create_t                                         create;                            //{ +0x0000    } | .Create
            _m12 u2_read_t                                           read;                              //{ +0x0000    } | .Read
            _m16 u3_write_t                                          write;                             //{ +0x0000    } | .Write
            _m21 u4_device_io_control_t                              device_io_control;                 //{ +0x0000    } | .DeviceIoControl
            _m26 u5_others_t                                         others;                            //{ +0x0000    } | .Others
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.Parameters.$", 0x0, false, 0x5c8658ba0d9c123e );                                 
            SDK_FIXED_SIZE( u0_parameters_t, 0x20 );                                                  
        };                                                                                            
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m00 uint16_t                                                                  size;            //{ +0x0000    } | .Size
        _m01 uint8_t                                                                   minor_function;  //{ +0x0002    } | .MinorFunction
        _m02 enum wdf::request_type_t                                                  type;            //{ +0x0004    } | .Type
        _m27 u0_parameters_t                                                           parameters;      //{ +0x0008    } | .Parameters
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_PARAMETERS_V1_9.$", 0x0, false, 0x9871d443490e59ce );               
        SDK_FIXED_SIZE( request_parameters_v1_9_t, 0x28 );                                            
    };                                                                                                
};
#include "magic/request_parameters_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::request_parameters_v1_9_t::u0_parameters_t::u1_create_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_v1_9_t::u0_parameters_t::u2_read_t, 0x18 );
SDK_VERIFY( struct wdf::request_parameters_v1_9_t::u0_parameters_t::u3_write_t, 0x18 );
SDK_VERIFY( struct wdf::request_parameters_v1_9_t::u0_parameters_t::u4_device_io_control_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_v1_9_t::u0_parameters_t::u5_others_t, 0x20 );
SDK_VERIFY( union wdf::request_parameters_v1_9_t::u0_parameters_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_v1_9_t, 0x28 );
