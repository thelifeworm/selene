#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/file_id_extd_dir_info_t.start.hpp"
namespace win
{
    // [struct _FILE_ID_EXTD_DIR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_id_extd_dir_info_t                       
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 uint32_t                  next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t                  file_index;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FileIndex
        _m02 int64_t                   creation_time;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m03 int64_t                   last_access_time;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastAccessTime
        _m04 int64_t                   last_write_time;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastWriteTime
        _m05 int64_t                   change_time;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ChangeTime
        _m06 int64_t                   end_of_file;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EndOfFile
        _m07 int64_t                   allocation_size;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocationSize
        _m08 uint32_t                  file_attributes;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileAttributes
        _m09 uint32_t                  file_name_length;   //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .FileNameLength
        _m10 uint32_t                  ea_size;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EaSize
        _m11 uint32_t                  reparse_point_tag;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ReparsePointTag
        _m12 struct win::file_id_128_t file_id;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FileId
        _m13 sdk::array<wchar_t, 1>    file_name;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FileName
                                                         
        SDK_MAGIC_PROPERTIES( "_FILE_ID_EXTD_DIR_INFO.$", 0x60, true, 0xbc8852b2b1a7ef6e );                  
        SDK_FIXED_SIZE( file_id_extd_dir_info_t, 0x60 );                  
    };                                                   
};
#include "magic/file_id_extd_dir_info_t.end.hpp"
SDK_VERIFY( struct win::file_id_extd_dir_info_t, 0x60 );
