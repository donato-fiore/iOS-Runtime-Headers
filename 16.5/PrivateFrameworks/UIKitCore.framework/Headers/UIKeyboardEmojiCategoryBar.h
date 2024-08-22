// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDEMOJICATEGORYBAR_H
#define UIKEYBOARDEMOJICATEGORYBAR_H

@class UIResponder<UIKBEmojiHitTestResponder>;


#import "UIKeyboardEmojiKeyView.h"
#import "UIKeyboardEmojiGraphicsTraits.h"
#import "UIView.h"

@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView {
    BOOL _isScrubbing;
    CGFloat _scrubStartXLocation;
}


@property (retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // ivar: _emojiGraphicsTraits
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // ivar: _hitTestResponder
@property (retain, nonatomic) UIView *scrubView; // ivar: _scrubView
@property NSUInteger selectedIndex; // ivar: _selectedIndex


+(BOOL)wantsScreenTraits;
-(NSUInteger)flippedIndexForIndex:(NSUInteger)arg0 ;
-(NSUInteger)selectedIndexForTouches:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 screenTraits:(id)arg3 ;
-(struct CGRect )categorySelectedCircleRect:(NSInteger)arg0 ;
-(struct CGRect )frameForDivider:(int)arg0 ;
-(void)animateScrubberToRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)dimKeys:(id)arg0 ;
-(void)prepareForDisplay;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateCategory;
-(void)updateCategoryOnBar:(NSUInteger)arg0 ;
-(void)updateToCategory:(NSInteger)arg0 ;


@end


#endif