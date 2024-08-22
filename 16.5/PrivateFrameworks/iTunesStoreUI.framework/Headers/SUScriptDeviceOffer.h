// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTDEVICEOFFER_H
#define SUSCRIPTDEVICEOFFER_H

@class NSNumber, NSString, AMSDeviceOffer;


#import "SUScriptObject.h"

@interface SUScriptDeviceOffer : SUScriptObject

@property (readonly, nonatomic) NSNumber *adamId;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic, getter=isDowngrading) id *downgrading;
@property (readonly, nonatomic) AMSDeviceOffer *nativeOffer;
@property (retain, nonatomic) AMSDeviceOffer *offer; // ivar: _offer
@property (readonly, nonatomic) NSUInteger offerType;
@property (readonly, nonatomic, getter=isSubscribed) id *subscribed;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithDeviceOffer:(id)arg0 ;
-(id)scriptAttributeKeys;


@end


#endif