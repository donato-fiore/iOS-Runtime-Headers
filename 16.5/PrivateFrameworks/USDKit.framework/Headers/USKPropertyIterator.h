// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USKPROPERTYITERATOR_H
#define USKPROPERTYITERATOR_H

@protocol USKIterator;

#import <Foundation/Foundation.h>


@interface USKPropertyIterator : NSObject <USKIterator>

 {
    vector<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty>> _properties;
    __wrap_iter<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty *> _it;
}




-(id)initWithProperties:(*void)arg0 ;
-(id)nextObject;


@end


#endif