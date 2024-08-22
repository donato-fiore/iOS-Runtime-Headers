// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISWIPEACTIONBUTTON_H
#define UISWIPEACTIONBUTTON_H

@protocol _UISwipeActionButtonDelegate, UISwipeActionVisualStyle;


#import "UIButton.h"
#import "UIView.h"
#import "UIColor.h"

@interface UISwipeActionButton : UIButton

@property (nonatomic) BOOL autosizes; // ivar: _autosizes
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) CGFloat buttonWidth;
@property (retain, nonatomic) UIColor *defaultBackgroundColor; // ivar: _defaultBackgroundColor
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (readonly, nonatomic) UIView *sourceView;
@property (weak, nonatomic) NSObject<_UISwipeActionButtonDelegate> *swipeActionButtonDelegate; // ivar: _swipeActionButtonDelegate
@property (retain, nonatomic) NSObject<UISwipeActionVisualStyle> *visualStyle; // ivar: _visualStyle


-(BOOL)_heightDemandsCompactLayout;
-(CGFloat)_horizontalPaddingForCurrentIdiom;
-(CGFloat)_maxFontSizeForCurrentIdiom;
-(CGFloat)_minFontSizeForCurrentIdiom;
-(CGFloat)_minScaleFactorForFont:(id)arg0 ;
-(CGFloat)_titleFontWeightForCurrentIdiom;
-(CGFloat)defaultButtonWidth;
-(NSInteger)_numberOfLinesForTitle:(id)arg0 ;
-(NSUInteger)_defaultLayoutForHeight:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleFont;
-(id)titleFontOfSize:(CGFloat)arg0 ;
-(struct CGRect )_allowableContentRectForContentRect:(struct CGRect )arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif