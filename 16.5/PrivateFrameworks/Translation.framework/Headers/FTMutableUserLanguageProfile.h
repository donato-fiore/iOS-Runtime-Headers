// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEUSERLANGUAGEPROFILE_H
#define FTMUTABLEUSERLANGUAGEPROFILE_H

@class NSData, NSString;


#import "FTUserLanguageProfile.h"

@interface FTMutableUserLanguageProfile : FTUserLanguageProfile

@property (copy, nonatomic) NSData *profile_blob;
@property (copy, nonatomic) NSString *profile_blob_version;
@property (copy, nonatomic) NSString *profile_checksum;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)profile_blob:(id)arg0 ;


@end


#endif