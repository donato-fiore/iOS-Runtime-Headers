// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMEDIAREP_H
#define TSDMEDIAREP_H

@class CALayer, CAShapeLayer;


#import "TSDStyledRep.h"
#import "TSDFrameRep.h"
#import "TSDMediaInfo.h"
#import "TSDMediaLayout.h"

@interface TSDMediaRep : TSDStyledRep {
    BOOL mIsZooming;
    CALayer *mTapToReplaceLayer;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    CGRect mLastPictureFrameLayerRect;
}


@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property (readonly, nonatomic) BOOL shouldShowMediaReplaceUI;


-(BOOL)canResetMediaSize;
-(BOOL)i_shouldRenderStroke:(id)arg0 ;
-(BOOL)isPlaceholder;
-(BOOL)replaceButtonContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)shouldAllowReplacementFromDrop;
-(BOOL)shouldAllowReplacementFromPaste;
-(BOOL)shouldCreateKnobs;
-(id)additionalLayersOverLayer;
-(id)currentReplaceButtonHighlightedImage;
-(id)currentReplaceButtonImage;
-(id)overlayLayers;
-(id)p_tapToReplaceLayer;
-(id)visibleMediaReplaceButtonLayer;
-(struct CGPoint )p_scaledPositionOfImageReplaceKnob;
-(struct CGPoint )positionOfHyperlinkKnob;
-(struct CGSize )p_replaceButtonSize;
-(void)addKnobsToArray:(id)arg0 ;
-(void)dealloc;
-(void)didEndZooming;
-(void)i_updateFrameRep;
-(void)p_addLayerForReplaceButtonToArray:(id)arg0 ;
-(void)p_updateTapToReplaceLayerPosition;
-(void)processChangedProperty:(int)arg0 ;
-(void)updatePositionsOfKnobs:(id)arg0 ;
-(void)willBeginZooming;


@end


#endif