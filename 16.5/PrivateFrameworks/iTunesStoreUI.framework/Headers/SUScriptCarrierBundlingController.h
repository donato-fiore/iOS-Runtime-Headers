// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTCARRIERBUNDLINGCONTROLLER_H
#define SUSCRIPTCARRIERBUNDLINGCONTROLLER_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString *provisioningStyleAlways;
@property (readonly) NSString *provisioningStyleNever;
@property (readonly) NSString *provisioningStyleOnce;
@property (readonly) NSString *statusEligible;
@property (readonly) NSString *statusNeedsManualVerification;
@property (readonly) NSString *statusNotEligible;
@property (readonly) NSString *statusUnknown;
@property (readonly) NSString *statusUnlinked;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)updateLastKnownStatus:(id)arg0 ;


@end


#endif