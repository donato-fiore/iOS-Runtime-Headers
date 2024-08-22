// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSORIENTEDCONTENTVIEWCONTROLLERVIEW_H
#define SBTRAITSORIENTEDCONTENTVIEWCONTROLLERVIEW_H

@class SBFTouchPassThroughView, UILabel, UIView, NSString;
@protocol BSDescriptionProviding;


#import "SBTraitsDirectionalRotationView.h"

@interface SBTraitsOrientedContentViewControllerView : SBFTouchPassThroughView <BSDescriptionProviding>

 {
    UILabel *_placeholderLabel;
    NSInteger _previousContainerLayoutOrientation;
    NSInteger _previousContentLayoutOrientation;
    SBTraitsDirectionalRotationView *_contentRotationView;
}


@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGRect contentViewBoundsInReferenceSpace; // ivar: _contentViewBoundsInReferenceSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_counterTransformedToIdentityForContainerChange;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setDebugColorsEnabled:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setClipsToBounds:(BOOL)arg0 ;


@end


#endif