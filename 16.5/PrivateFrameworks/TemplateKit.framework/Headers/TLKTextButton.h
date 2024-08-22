// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKTEXTBUTTON_H
#define TLKTEXTBUTTON_H

@class UIButton, UIFont, NSString;


#import "TLKRichText.h"
#import "TLKImage.h"
#import "TLKImageView.h"

@interface TLKTextButton : UIButton

@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL attributedTitleExplicitlySet; // ivar: _attributedTitleExplicitlySet
@property (retain, nonatomic) UIFont *font;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize; // ivar: _matchesHeightForAlignmentRectWithIntrinsicContentSize
@property (nonatomic) NSUInteger prominence; // ivar: _prominence
@property (copy, nonatomic) TLKRichText *richTitle; // ivar: _richTitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) TLKImage *tlkImage; // ivar: _tlkImage
@property (retain, nonatomic) TLKImageView *tlkImageView; // ivar: _tlkImageView


-(BOOL)allowsVibrancy;
-(BOOL)hasTemplateUIImage;
-(BOOL)isImageMode;
-(id)init;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )maximumLayoutSize;
-(struct CGSize )minimumLayoutSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMaximumLayoutSize:(struct CGSize )arg0 ;
-(void)setMinimumLayoutSize:(struct CGSize )arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateAttributedTitle;


@end


#endif