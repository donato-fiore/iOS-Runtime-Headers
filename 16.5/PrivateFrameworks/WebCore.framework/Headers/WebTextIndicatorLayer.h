// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBTEXTINDICATORLAYER_H
#define WEBTEXTINDICATORLAYER_H

@class CALayer;



@interface WebTextIndicatorLayer : CALayer {
    RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> _textIndicator;
    RetainPtr<NSArray> _bounceLayers;
    CGSize _margin;
    BOOL _hasCompletedAnimation;
}


@property (nonatomic, getter=isFadingOut) BOOL fadingOut; // ivar: _fadingOut


-(BOOL)hasCompletedAnimation;
-(BOOL)indicatorWantsBounce:(*void)arg0 ;
-(BOOL)indicatorWantsManualAnimation:(*void)arg0 ;
-(CGFloat)_animationDuration;
-(id)initWithFrame:(struct CGRect )arg0 textIndicator:(*void)arg1 margin:(struct CGSize )arg2 offset:(struct CGPoint )arg3 ;
-(void)hideWithCompletionHandler:(id)arg0 ;
-(void)present;
-(void)setAnimationProgress:(float)arg0 ;


@end


#endif