// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXTKNOBTRACKER_H
#define TSWPTEXTKNOBTRACKER_H

@class NSTimer;


#import "TSDKnobTracker.h"
#import "TSWPTextMagnifierRanged.h"
#import "TSWPEditingController.h"

@interface TSWPTextKnobTracker : TSDKnobTracker {
    _NSRange _rangeAtStart;
    int _selectionType;
    NSUInteger _headCharAtStart;
    NSUInteger _tailCharAtStart;
    BOOL _multiTap;
    NSTimer *_textMagnifierTimer;
    TSWPTextMagnifierRanged *_magnifier;
    BOOL _doneTracking;
    BOOL _knobMoved;
}


@property (readonly, nonatomic) BOOL didShowMagnifier; // ivar: _didShowMagnifier
@property (retain, nonatomic) TSWPEditingController *editingController; // ivar: _editingController
@property (nonatomic) BOOL ignoreNextCall; // ivar: _ignoreNextCall


+(*void)p_lineFragmentForCharIndex:(NSUInteger)arg0 knobTag:(NSUInteger)arg1 selectionType:(int)arg2 rep:(id)arg3 ;
-(BOOL)fixupWordSelection;
-(BOOL)p_isMagnifyingVerticalText;
-(BOOL)p_newHeadCharIndex:(NSUInteger)arg0 isPastTailCharIndex:(NSUInteger)arg1 rep:(id)arg2 ;
-(BOOL)p_newTailCharIndex:(NSUInteger)arg0 isPastHeadCharIndex:(NSUInteger)arg1 rep:(id)arg2 ;
-(BOOL)shouldHideOtherKnobs;
-(CGFloat)delay;
-(CGFloat)unscaledStartAutoscrollThreshold;
-(NSUInteger)p_charIndexForKnob:(NSUInteger)arg0 selection:(id)arg1 ;
-(id)icc;
-(id)initWithRep:(id)arg0 knob:(id)arg1 ;
-(id)p_rangedMagnifier;
-(struct _NSRange )adjustSelectionRange:(struct _NSRange )arg0 forStorage:(id)arg1 ;
-(void)autoscrollWillNotStart;
-(void)dealloc;
-(void)endMovingKnob;
-(void)moveKnobToCanvasPosition:(struct CGPoint )arg0 ;
-(void)p_cleanupWhenDone;
-(void)p_fixUpWordSelection;
-(void)p_magnifyWithTarget:(id)arg0 magnificationPoint:(struct CGPoint )arg1 offset:(struct CGPoint )arg2 animated:(BOOL)arg3 delayed:(BOOL)arg4 ;
-(void)p_setSelectionFromPoint:(struct CGPoint )arg0 ;
-(void)p_startMagnifying;
-(void)p_stopMagnifyingWithAnimation:(BOOL)arg0 ;
-(void)updateAfterAutoscroll:(id)arg0 ;
-(void)updateAfterAutoscroll:(id)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif