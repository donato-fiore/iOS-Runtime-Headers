// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHMULTIDATASCATTERSERIESRENDERINGELEMENTSHAPELAYER_H
#define TSCHMULTIDATASCATTERSERIESRENDERINGELEMENTSHAPELAYER_H

@class CALayer;
@protocol TSCHMultiDataElementShapeLayer;



@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>





-(BOOL)aboveIntercept;
-(id)chartRep;
-(id)currentValueLayer;
-(void)p_addAnimationsForUpdatingImage:(struct CGImage *)arg0 frame:(struct CGRect )arg1 toAnimationInfo:(id)arg2 ;
-(void)setFill:(id)arg0 stroke:(id)arg1 withViewScale:(CGFloat)arg2 ;
-(void)updateElementFrame:(struct CGRect )arg0 forSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrameToNullForSeries:(id)arg0 addingAnimationsToAnimationInfo:(id)arg1 ;


@end


#endif