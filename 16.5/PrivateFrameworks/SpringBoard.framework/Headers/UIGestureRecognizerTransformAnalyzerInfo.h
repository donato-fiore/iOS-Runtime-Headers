// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIGESTURERECOGNIZERTRANSFORMANALYZERINFO_H
#define UIGESTURERECOGNIZERTRANSFORMANALYZERINFO_H


#import <Foundation/Foundation.h>


@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject

@property (nonatomic, setter=_setAbsoluteTranslation:) CGPoint absoluteTranslation; // ivar: _absoluteTranslation
@property (nonatomic, setter=_setRotation:) CGFloat rotation; // ivar: _rotation
@property (nonatomic, setter=_setScale:) CGFloat scale; // ivar: _scale
@property (nonatomic, setter=_setTranslation:) CGPoint translation; // ivar: _translation
@property (nonatomic, setter=_setTranslationMagnitude:) CGFloat translationMagnitude; // ivar: _translationMagnitude


-(id)description;
-(void)_reset;


@end


#endif