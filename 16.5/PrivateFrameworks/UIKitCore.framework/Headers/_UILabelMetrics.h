// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILABELMETRICS_H
#define _UILABELMETRICS_H

@class NSStringDrawingContext, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UILabelSynthesizedContent.h"
#import "_UILabelScaledMetrics.h"
#import "_UILabelConfiguration.h"

@interface _UILabelMetrics : NSObject <NSCopying, NSSecureCoding>

 {
    NSStringDrawingContext *_stringDrawingContext;
    CGRect _sourceRect;
    _UILabelSynthesizedContent *_synthesizedContent;
    _UILabelScaledMetrics *_scaledMetrics;
    CGFloat _firstBaselineOffset;
    CGFloat _lastBaselineOffset;
    CGRect _drawingRect;
    CGRect _bounds;
    CGRect _idealBounds;
    NSInteger _numberOfLines;
    CGFloat _scaleFactor;
    id *_textToUse;
    NSDictionary *_attributesToUse;
    id *_layout;
    _UILabelScaledMetrics *_associatedScaledMetrics;
    ? _metricsFlags;
}


@property (readonly, nonatomic) CGSize _intrinsicBaselineSize;
@property (readonly, nonatomic) ? _intrinsicSizeBaselineInfo;
@property (readonly, nonatomic) CGFloat _lastLineBaselineOffsetFromTop;
@property (readonly, nonatomic) CGRect _sourceRect;
@property (readonly, nonatomic) NSStringDrawingContext *_stringDrawingContext;
@property (readonly, nonatomic) _UILabelSynthesizedContent *_synthesizedContent;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) _UILabelConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CGRect drawingBounds;
@property (readonly, nonatomic) CGFloat firstLineBaselineOffsetFromTop;
@property (readonly, nonatomic) CGRect intrinsicBounds;
@property (readonly, nonatomic) CGFloat lastLineBaselineOffsetFromBottom;
@property (readonly, nonatomic) NSInteger numberOfLines;
@property (readonly, nonatomic) CGFloat scaleFactor;


+(BOOL)supportsSecureCoding;
+(id)intrinsicMetricsWithConfiguration:(id)arg0 ;
+(id)metricsWithConfiguration:(id)arg0 ;
-(BOOL)_hyphenationPossiblyDisabledIfURLsDetected;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_lineSpacing;
-(NSUInteger)hash;
-(id)_initWithConfiguration:(id)arg0 sourceRect:(struct CGRect )arg1 synthesizedContent:(id)arg2 associatedScaledMetrics:(id)arg3 ;
-(id)_synthesizedAttributedText;
-(id)_synthesizedAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_calculateScaledMetricsUsingSize:(struct CGSize )arg0 ;
-(void)_calculatedSynthesizedContentIfNeeded;
-(void)_ensureSynthesizedContent;
-(void)draw;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif