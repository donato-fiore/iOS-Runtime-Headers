// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEUSERACOUSTICPROFILE_H
#define FTMUTABLEUSERACOUSTICPROFILE_H

@class NSData, NSString;


#import "FTUserAcousticProfile.h"

@interface FTMutableUserAcousticProfile : FTUserAcousticProfile

@property (copy, nonatomic) NSData *acoustic_profile_blob;
@property (copy, nonatomic) NSString *acoustic_profile_version;
@property (copy, nonatomic) NSString *profile_checksum;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)acoustic_profile_blob:(id)arg0 ;


@end


#endif