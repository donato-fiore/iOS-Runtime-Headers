// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCROSSFADEVIEW_H
#define SBCROSSFADEVIEW_H

@class UIView, BSUIAnimationFactory;



@interface SBCrossfadeView : UIView {
    UIView *_startView;
    UIView *_endView;
    BOOL _translucent;
    BOOL _crossfaded;
}


@property (nonatomic) BOOL adaptsAnimationFactoryTimingFunction; // ivar: _adaptsAnimationFactoryTimingFunction
@property (nonatomic) BOOL allowsGroupOpacityDuringCrossfade; // ivar: _allowsGroupOpacityDuringCrossfade
@property (retain, nonatomic) BSUIAnimationFactory *animationFactory; // ivar: _animationFactory


+(id)crossfadeViewWithStartView:(id)arg0 endView:(id)arg1 translucent:(BOOL)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_initWithStartView:(id)arg0 endView:(id)arg1 translucent:(BOOL)arg2 ;
-(void)crossfadeWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif