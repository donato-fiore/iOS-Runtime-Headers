// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHMULTIDATALAYERANIMATIONVALUES_H
#define TSCHMULTIDATALAYERANIMATIONVALUES_H

@class NSString, NSArray, CALayer;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataLayerAnimationValues : NSObject

@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSArray *keyTimes; // ivar: _keyTimes
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) BOOL needPresentationLayerValues; // ivar: _needPresentationLayerValues
@property (readonly, nonatomic) NSArray *values; // ivar: _values


+(id)animationValuesWithLayer:(id)arg0 key:(id)arg1 values:(id)arg2 ;
+(id)animationValuesWithLayer:(id)arg0 key:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 ;
+(id)animationValuesWithLayer:(id)arg0 key:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 needPresentationLayerValues:(BOOL)arg4 ;
-(id)description;
-(id)initWithLayer:(id)arg0 key:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 needPresentationLayerValues:(BOOL)arg4 ;


@end


#endif