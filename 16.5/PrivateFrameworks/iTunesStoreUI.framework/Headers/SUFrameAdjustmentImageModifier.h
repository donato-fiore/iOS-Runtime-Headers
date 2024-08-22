// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUFRAMEADJUSTMENTIMAGEMODIFIER_H
#define SUFRAMEADJUSTMENTIMAGEMODIFIER_H



#import "SUImageModifier.h"

@interface SUFrameAdjustmentImageModifier : SUImageModifier

@property (nonatomic) BOOL shouldSizeDownToFit; // ivar: _shouldSizeDownToFit
@property (nonatomic) NSUInteger sizingMask; // ivar: _sizingMask


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)scalesImage;
-(struct CGRect )imageFrameForImage:(id)arg0 currentFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif