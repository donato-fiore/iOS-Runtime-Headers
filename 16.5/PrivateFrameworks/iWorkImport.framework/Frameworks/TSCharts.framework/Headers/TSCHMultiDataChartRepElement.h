// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHMULTIDATACHARTREPELEMENT_H
#define TSCHMULTIDATACHARTREPELEMENT_H

@class CALayer<TSCHMultiDataElementShapeLayer>;

#import <Foundation/Foundation.h>

#import "TSCHMultiDataAnimatingFrameLayer.h"

@interface TSCHMultiDataChartRepElement : NSObject

@property (readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer; // ivar: _elementLayer
@property (nonatomic) BOOL elementUndefined; // ivar: _elementUndefined
@property (readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer *labelLayer; // ivar: _labelLayer


+(id)elementWithElementLayer:(id)arg0 ;
-(id)delegate;
-(id)initWithElementLayer:(id)arg0 ;
-(void)addAnimationForKey:(id)arg0 values:(id)arg1 keyTimes:(id)arg2 toAnimationInfo:(id)arg3 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setOpacity:(CGFloat)arg0 ;


@end


#endif