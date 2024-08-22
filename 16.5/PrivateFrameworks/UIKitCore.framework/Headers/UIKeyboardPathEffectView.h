// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDPATHEFFECTVIEW_H
#define UIKEYBOARDPATHEFFECTVIEW_H

@class NSMutableArray, CADisplayLink, NSMutableIndexSet;


#import "UIView.h"
#import "UIKBHandwritingQuadCurvePointFIFO.h"

@interface UIKeyboardPathEffectView : UIView

@property (nonatomic) BOOL done; // ivar: _done
@property (nonatomic) BOOL increasedContrastEnabled; // ivar: _increasedContrastEnabled
@property (retain, nonatomic) NSMutableArray *paths; // ivar: _paths
@property (retain, nonatomic) CADisplayLink *pointDecayDisplayLink; // ivar: _pointDecayDisplayLink
@property (retain, nonatomic) NSMutableIndexSet *pointDecayQueue; // ivar: _pointDecayQueue
@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator; // ivar: _pointInterpolator
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(NSInteger)keyboardAppearance;
-(id)_currentPath;
-(id)_pushNewPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)textEffectsVisibilityLevel;
-(struct ? )_currentThemeSettings;
-(void)_addDrawingPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 sentinel:(BOOL)arg2 ;
-(void)_clearPointInterpolators;
-(void)_displayLinkFired:(id)arg0 ;
-(void)accessibilityValueChanged:(id)arg0 ;
-(void)addPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(void)buildOut;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)reset;


@end


#endif