// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVINFOCELLVIEW_H
#define _TVINFOCELLVIEW_H

@class UIView, NSArray, NSString;
@protocol TVAppTemplateImpressionable;



@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable>



@property (retain, nonatomic) NSArray *dataViews; // ivar: _dataViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerContentView; // ivar: _headerContentView
@property (nonatomic) UIEdgeInsets headerMargin; // ivar: _headerMargin
@property (nonatomic) CGFloat headerMaxWidth; // ivar: _headerMaxWidth
@property (nonatomic) CGFloat headerMinWidth; // ivar: _headerMinWidth
@property (nonatomic) BOOL headerOnLeading; // ivar: _headerOnLeading
@property (nonatomic) CGFloat headerWidth; // ivar: _headerWidth
@property (nonatomic) CGFloat normalizedHeaderWidth; // ivar: _normalizedHeaderWidth
@property (readonly) Class superclass;


+(id)infoCellViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(CGFloat)minimumHeaderWidth;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 withHeaderWidth:(CGFloat)arg1 ;
-(void)layoutSubviews;


@end


#endif