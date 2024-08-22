// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCELLLAYOUTMANAGER_H
#define UITABLEVIEWCELLLAYOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface UITableViewCellLayoutManager : NSObject



+(BOOL)requiresLegacyLayout;
+(id)_externalDetailTextColor;
+(id)_externalTextColor;
+(id)layoutManagerForTableViewCellStyle:(NSInteger)arg0 ;
+(id)sharedLayoutManager;
+(void)initialize;
-(BOOL)_editControlOnSameSideAsReorderControlForCell:(id)arg0 ;
-(BOOL)accessoryShouldAppearForCell:(id)arg0 ;
-(BOOL)accessoryShouldFadeForCell:(id)arg0 ;
-(BOOL)editControlShouldAppearForCell:(id)arg0 ;
-(BOOL)editControlShouldFadeForCell:(id)arg0 ;
-(BOOL)editingAccessoryShouldAppearForCell:(id)arg0 ;
-(BOOL)editingAccessoryShouldFadeForCell:(id)arg0 ;
-(BOOL)reorderControlShouldAppearForCell:(id)arg0 ;
-(BOOL)reorderControlShouldFadeForCell:(id)arg0 ;
-(BOOL)reorderSeparatorShouldAppearForCell:(id)arg0 ;
-(BOOL)reorderSeparatorShouldFadeForCell:(id)arg0 ;
-(BOOL)shouldApplyAccessibilityLargeTextLayoutForCell:(id)arg0 ;
-(BOOL)shouldIncreaseMarginForImageViewInCell:(id)arg0 ;
-(BOOL)shouldStackAccessoryViewVerticallyForCell:(id)arg0 editing:(BOOL)arg1 ;
-(CGFloat)_contentRectLeadingOffsetForCell:(id)arg0 editingState:(BOOL)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)contentIndentationForCell:(id)arg0 ;
-(CGFloat)defaultDetailTextLabelFontSizeForCell:(id)arg0 ;
-(CGFloat)defaultTextLabelFontSizeForCell:(id)arg0 ;
-(CGFloat)requiredIndentationForFirstLineOfCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(CGFloat)requiredIndentationForFirstLineOfCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;
-(id)badgeForCell:(id)arg0 ;
-(id)customAccessoryViewForCell:(id)arg0 editing:(BOOL)arg1 ;
-(id)defaultBadgeForCell:(id)arg0 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg0 ;
-(id)defaultEditableTextFieldForCell:(id)arg0 ;
-(id)defaultImageViewForCell:(id)arg0 ;
-(id)defaultLabelForCell:(id)arg0 ;
-(id)defaultLabelForCell:(id)arg0 ofClass:(Class)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg0 ;
-(id)detailTextLabelForCell:(id)arg0 ;
-(id)editableTextFieldForCell:(id)arg0 ;
-(id)imageViewForCell:(id)arg0 ;
-(id)textLabelForCell:(id)arg0 ;
-(struct CGRect )_accessoryRectForCell:(id)arg0 offscreen:(BOOL)arg1 ;
-(struct CGRect )_accessoryRectForCell:(id)arg0 offscreen:(BOOL)arg1 rowWidth:(CGFloat)arg2 ;
-(struct CGRect )_adjustedBackgroundContentRectForCell:(id)arg0 ;
-(struct CGRect )_adjustedBackgroundContentRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(struct CGRect )_adjustedBackgroundRectForCell:(id)arg0 ;
-(struct CGRect )_adjustedBackgroundRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(struct CGRect )_backgroundRectForCell:(id)arg0 ;
-(struct CGRect )_backgroundRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(struct CGRect )_contentRectForCell:(id)arg0 forEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )_contentRectForCell:(id)arg0 forEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 rowWidth:(CGFloat)arg3 ;
-(struct CGRect )_editControlRectForCell:(id)arg0 offscreen:(BOOL)arg1 ;
-(struct CGRect )_editingAccessoryRectForCell:(id)arg0 offscreen:(BOOL)arg1 ;
-(struct CGRect )_legacy_contentRectForCell:(id)arg0 forEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 rowWidth:(CGFloat)arg3 ;
-(struct CGRect )_reorderControlRectForCell:(id)arg0 offscreen:(BOOL)arg1 ;
-(struct CGRect )_reorderSeparatorRectForCell:(id)arg0 offscreen:(BOOL)arg1 ;
-(struct CGRect )accessoryEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )accessoryStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )backgroundEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )backgroundStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )contentEndingRectForCell:(id)arg0 forDisplayOfDeleteConfirmation:(BOOL)arg1 ;
-(struct CGRect )contentEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )contentRectForCell:(id)arg0 forState:(NSUInteger)arg1 ;
-(struct CGRect )contentRectForCell:(id)arg0 forState:(NSUInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(struct CGRect )contentStartingRectForCell:(id)arg0 forDisplayOfDeleteConfirmation:(BOOL)arg1 ;
-(struct CGRect )contentStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editControlEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editControlStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editingAccessoryEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )editingAccessoryStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )reorderControlEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )reorderControlStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )reorderSeparatorEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )reorderSeparatorStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )selectedBackgroundEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )standardLayoutImageViewFrameForCell:(id)arg0 forSizing:(BOOL)arg1 ;
-(struct CGRect )textRectForCell:(id)arg0 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;
-(struct CGSize )intrinsicContentSizeForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(struct CGSize )optimumSizeForLabel:(id)arg0 inTotalTextRect:(struct CGRect )arg1 minimizeWidthOnVerticalOverflow:(BOOL)arg2 preferSingleLineWidth:(BOOL)arg3 ;
-(void)_layoutFocusGuidesForCell:(id)arg0 ;
-(void)_legacy_cell:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)_legacy_cell:(id)arg0 willTransitionToState:(NSUInteger)arg1 ;
-(void)_legacy_layoutSubviewsOfCell:(id)arg0 ;
-(void)_modern_cell:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)_modern_layoutSubviewsOfCell:(id)arg0 ;
-(void)_reconfigureCell:(id)arg0 ;
-(void)_resetTextLabelDefaultFontInCell:(id)arg0 ;
-(void)_updateFocusGuidesForCell:(id)arg0 editing:(BOOL)arg1 ;
-(void)cell:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)cell:(id)arg0 willTransitionToState:(NSUInteger)arg1 ;
-(void)getTextLabelRect:(struct CGRect *)arg0 detailTextLabelRect:(struct CGRect *)arg1 forCell:(id)arg2 rowWidth:(CGFloat)arg3 forSizing:(BOOL)arg4 ;
-(void)layoutSubviewsOfCell:(id)arg0 ;
-(void)prepareCellForReuse:(id)arg0 ;


@end


#endif