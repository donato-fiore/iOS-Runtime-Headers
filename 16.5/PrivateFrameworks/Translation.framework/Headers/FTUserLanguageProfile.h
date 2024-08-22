// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTUSERLANGUAGEPROFILE_H
#define FTUSERLANGUAGEPROFILE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTUserLanguageProfile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *UserLanguageProfile _root;
}


@property (readonly, nonatomic) NSData *profile_blob;
@property (readonly, nonatomic) NSString *profile_blob_version;
@property (readonly, nonatomic) NSString *profile_checksum;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserLanguageProfile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct UserLanguageProfile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::UserLanguageProfile> )addObjectToBuffer:(*void)arg0 ;
-(void)profile_blob:(id)arg0 ;


@end


#endif