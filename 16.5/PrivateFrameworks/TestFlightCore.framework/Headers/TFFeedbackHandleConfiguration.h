// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFFEEDBACKHANDLECONFIGURATION_H
#define TFFEEDBACKHANDLECONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TFFeedbackHandleConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *incidentId; // ivar: _incidentId


+(id)configurationFromUserInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedAsUserInfo;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 ;


@end


#endif