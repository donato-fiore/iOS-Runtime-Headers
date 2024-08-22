// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUTABLEPLAYACTIVITYENQUEUERPROPERTIES_H
#define ICMUTABLEPLAYACTIVITYENQUEUERPROPERTIES_H

@class NSString, NSNumber, NSTimeZone;


#import "ICPlayActivityEnqueuerProperties.h"

@interface ICMutablePlayActivityEnqueuerProperties : ICPlayActivityEnqueuerProperties

@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (nonatomic) NSUInteger storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) NSInteger systemReleaseType;
@property (copy, nonatomic) NSTimeZone *timeZone;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif