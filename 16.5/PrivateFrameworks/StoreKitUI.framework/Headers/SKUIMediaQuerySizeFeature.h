// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMEDIAQUERYSIZEFEATURE_H
#define SKUIMEDIAQUERYSIZEFEATURE_H



#import "SKUIMediaQueryFeature.h"

@interface SKUIMediaQuerySizeFeature : SKUIMediaQueryFeature {
    CGFloat _value;
}




+(BOOL)supportsFeatureName:(id)arg0 ;
-(BOOL)evaluateWithValues:(id)arg0 ;
-(id)description;
-(id)initWithFeatureName:(id)arg0 value:(id)arg1 ;
-(id)requiredKeys;


@end


#endif