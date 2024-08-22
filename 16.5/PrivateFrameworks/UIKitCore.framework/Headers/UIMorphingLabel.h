// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMORPHINGLABEL_H
#define UIMORPHINGLABEL_H

@class NSMutableArray, UIFont, NSString;


#import "UIView.h"
#import "UIMorphingLabelGlyphSet.h"
#import "_UIViewAnimationAttributes.h"
#import "UIColor.h"

@interface UIMorphingLabel : UIView {
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    NSUInteger _alignmentSrc;
    NSUInteger _alignmentDst;
    BOOL _alignmentIsEqual;
    NSUInteger _alignmentSize;
    CGFloat _alignmentDelays;
    _UIViewAnimationAttributes *_textAnimationAttributes;
    CGFloat _lastUpdateTime;
    CGFloat _slowdown;
    CGFloat _rippleFactor;
    CGFloat _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
}


@property (nonatomic) BOOL enableAnimation; // ivar: _enableAnimation
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat glyphScaleAnimationSpeed; // ivar: _glyphScaleAnimationSpeed
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (nonatomic) CGFloat rippleDuration; // ivar: _rippleDuration
@property (nonatomic) BOOL suppressLayoutSubviews; // ivar: _suppressLayoutSubviews
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


+(id)preferredFontWithSize:(CGFloat)arg0 ;
-(BOOL)_isRTL;
-(BOOL)canFitText:(id)arg0 ;
-(CGFloat)_rippleDurationForEndInsertion:(BOOL)arg0 ;
-(CGFloat)alphaForFrame:(struct CGRect )arg0 ;
-(CGFloat)changeInWidthDueToAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(CGFloat)currentMediaTime;
-(CGFloat)flushAmount;
-(CGFloat)requiredWidthForText:(id)arg0 ;
-(CGFloat)totalLeftOffsetForAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(CGFloat)totalRightOffsetForAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)calculateHardAlignmentAtIndex:(NSUInteger)arg0 fromGlyphsInRange:(struct _NSRange )arg1 toGlyphsInRange:(struct _NSRange )arg2 ;
-(id)attributedString;
-(id)attributedStringForText:(id)arg0 ;
-(id)glyphViewWithImage:(id)arg0 isColorGlyph:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)uniqueString;
-(struct _NSRange )dstRangeOfAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )srcRangeOfAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateDeletionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateGlyph:(id)arg0 toAlpha:(CGFloat)arg1 duration:(CGFloat)arg2 delay:(CGFloat)arg3 ;
-(void)animateGlyph:(id)arg0 toPosition:(struct CGPoint )arg1 delay:(CGFloat)arg2 ;
-(void)animateGlyph:(id)arg0 toScale:(CGFloat)arg1 delay:(CGFloat)arg2 ;
-(void)animateGlyphs;
-(void)animateGlyphsInRange:(struct _NSRange )arg0 ofGlyphSet:(id)arg1 byOffset:(CGFloat)arg2 delay:(CGFloat)arg3 ;
-(void)animateHideGlyph:(id)arg0 alphaDuration:(CGFloat)arg1 delay:(CGFloat)arg2 ;
-(void)animateInsertionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateMovementAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)animateShowGlyph:(id)arg0 alpha:(CGFloat)arg1 alphaDuration:(CGFloat)arg2 delay:(CGFloat)arg3 ;
-(void)animateShowGlyph:(id)arg0 alphaDuration:(CGFloat)arg1 delay:(CGFloat)arg2 ;
-(void)animateSubstitutionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)baseInit;
-(void)calculateGlyphAlignment;
-(void)contentSizeDidChange:(id)arg0 ;
-(void)copyStateFromGlyph:(id)arg0 toGlyph:(id)arg1 ;
-(void)hideGlyph:(id)arg0 ;
-(void)initAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)initDeletionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)initInsertionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)initMovementAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)initSubstitutionAlignmentHunkAtIndex:(NSUInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif