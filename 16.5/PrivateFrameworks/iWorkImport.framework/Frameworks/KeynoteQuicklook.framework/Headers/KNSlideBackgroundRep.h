// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSLIDEBACKGROUNDREP_H
#define KNSLIDEBACKGROUNDREP_H

@class TSDRep, CALayer;
@protocol TSDMagicMoveMatching;


#import "KNSlideBackgroundInfo.h"

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching>

 {
    CALayer *_blackBackgroundLayer;
    BOOL _layerNeedsUpdate;
}


@property (readonly) KNSlideBackgroundInfo *slideBackgroundInfo;


+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg0 andIncomingObjects:(id)arg1 textureDescription:(id)arg2 ;
-(BOOL)isOpaque;
-(BOOL)wantsToDistortWithImagerContext;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)textureForDescription:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif