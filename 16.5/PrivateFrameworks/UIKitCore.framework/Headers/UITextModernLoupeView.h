// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTMODERNLOUPEVIEW_H
#define UITEXTMODERNLOUPEVIEW_H

@class CADisplayLink;
@protocol UICoordinateSpace;


#import "UIView.h"
#import "_UIPortalView.h"

@interface UITextModernLoupeView : UIView {
    UIView *_sourceView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_glowView;
    UIView *_portalContainerView;
    CADisplayLink *_displayLink;
    _UIPortalView *_portalView;
}


@property (readonly, nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace;
@property (nonatomic) CGPoint modelPosition; // ivar: _modelPosition
@property (readonly, nonatomic) CGSize preferredSize;
@property (nonatomic) BOOL statusBarHidden; // ivar: _statusBarHidden
@property (nonatomic) BOOL visible; // ivar: _visible
@property (nonatomic) CGFloat visualOffset; // ivar: _visualOffset


+(BOOL)isModernLoupeEnabled;
-(id)backgroundColorIfNecessary;
-(id)initWithSourceView:(id)arg0 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_stopDisplayLink;
-(void)_updateColorsForTraitCollection:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif