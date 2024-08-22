// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKLABELITEM_H
#define TLKLABELITEM_H

@class NSString, NUISizeCache;
@protocol TLKGridArrangementItem;

#import <Foundation/Foundation.h>

#import "TLKRichText.h"

@interface TLKLabelItem : NSObject <TLKGridArrangementItem>



@property (nonatomic) _NSRange columnRange; // ivar: columnRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame; // ivar: frame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalCompressionResistance; // ivar: horizontalCompressionResistance
@property (nonatomic) CGFloat horizontalHuggingPriority; // ivar: horizontalHuggingPriority
@property (retain, nonatomic) TLKRichText *richText; // ivar: _richText
@property (nonatomic) NSUInteger row; // ivar: row
@property (retain, nonatomic) NUISizeCache *sizeCache; // ivar: sizeCache
@property (readonly) Class superclass;


+(CGFloat)minimumWidthForLabelItem;
+(id)font;
+(void)initialize;
+(void)setFontValues;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGFloat)effectiveBaselineOffsetFromContentBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromContentTop;
-(float)contentCompressionResistancePriorityForAxis:(NSInteger)arg0 ;
-(float)contentHuggingPriorityForAxis:(NSInteger)arg0 ;
-(id)attributedString;
-(id)init;
-(struct CGSize )sizeForTargetSize:(struct CGSize )arg0 ;


@end


#endif