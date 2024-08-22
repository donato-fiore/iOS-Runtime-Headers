// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMEDIAQUERYNETWORKTYPEFEATURE_H
#define SKUIMEDIAQUERYNETWORKTYPEFEATURE_H

@class NSString;


#import "SKUIMediaQueryFeature.h"

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {
    NSString *_value;
}




+(BOOL)supportsFeatureName:(id)arg0 ;
-(BOOL)evaluateWithValues:(id)arg0 ;
-(id)description;
-(id)initWithFeatureName:(id)arg0 value:(id)arg1 ;
-(id)notificationNames;
-(id)requiredKeys;


@end


#endif