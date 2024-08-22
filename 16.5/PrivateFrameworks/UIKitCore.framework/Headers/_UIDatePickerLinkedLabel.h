// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERLINKEDLABEL_H
#define _UIDATEPICKERLINKEDLABEL_H

@class NSMapTable, NSLayoutConstraint, NSString, UIFont, NSDictionary, NSArray;
@protocol UIContentSizeCategoryAdjusting;


#import "UIView.h"
#import "UILabel.h"
#import "UILayoutGuide.h"
#import "_UIDatePickerLinkedLabelStorage.h"
#import "UIColor.h"

@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting>

 {
    ? _flags;
    UILabel *_renderingLabel;
    CGSize _lastSize;
    NSMapTable *_longestPossibleTitle;
    NSMapTable *_longestPossibleWidth;
    NSLayoutConstraint *_renderLabelXConstraint;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // ivar: _contentLayoutGuide
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (retain, nonatomic) NSDictionary *overrideAttributes; // ivar: _overrideAttributes
@property (retain, nonatomic) NSArray *possibleTitles; // ivar: _possibleTitles
@property (retain, nonatomic) _UIDatePickerLinkedLabelStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (retain, nonatomic) NSArray *titles; // ivar: _titles


-(NSInteger)_renderPriorityForContainerWidth:(CGFloat)arg0 initialPriority:(NSInteger)arg1 ;
-(id)_longestPossibleTitleForPriority:(NSUInteger)arg0 width:(*CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidatePossibleTitleCaches;
-(void)_setNeedsStorageSync;
-(void)_storageSyncIfNecessaryWithContainerSize:(struct CGSize )arg0 ;
-(void)_storageSyncWithContainerSize:(struct CGSize )arg0 ;
-(void)_updateAlignmentConstraint;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentCompressionResistancePriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setContentHuggingPriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif