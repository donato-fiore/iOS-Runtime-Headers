// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPDROPCAPADORNMENT_H
#define TSWPDROPCAPADORNMENT_H

@class TSDFill, NSString, NSArray, TSUBezierPath, TSDWrapSegments;
@protocol TSWPTextAdornment, TSWPTextAdornmentRenderer, TSWPTextSource;

#import <Foundation/Foundation.h>

#import "TSWPDropCapCharacterMetrics.h"
#import "TSWPCharacterStyle.h"
#import "TSWPDropCap.h"
#import "TSWPDropCapStyle.h"
#import "TSWPParagraphStyle.h"

@interface TSWPDropCapAdornment : NSObject <TSWPTextAdornment, TSWPTextAdornmentRenderer>



@property (nonatomic) CGFloat advance; // ivar: _advance
@property (readonly, nonatomic) CGFloat baselineShift;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) TSDFill *characterFill;
@property (nonatomic) CGRect characterFillRect; // ivar: _characterFillRect
@property (readonly, nonatomic) BOOL characterFillShouldFillTextContainer;
@property (retain, nonatomic) TSWPDropCapCharacterMetrics *characterMetrics; // ivar: _characterMetrics
@property (retain, nonatomic) TSWPCharacterStyle *characterStyle; // ivar: _characterStyle
@property (retain, nonatomic) NSString *coreTextString; // ivar: _coreTextString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSWPDropCap *dropCap; // ivar: _dropCap
@property (nonatomic) CGRect dropCapFrame; // ivar: _dropCapFrame
@property (retain, nonatomic) TSWPDropCapStyle *dropCapStyle; // ivar: _dropCapStyle
@property (readonly, nonatomic) CGFloat dynamicPadding;
@property (readonly, nonatomic) CGRect erasableBounds;
@property (copy, nonatomic) NSString *fontPostScriptName; // ivar: _fontPostScriptName
@property (nonatomic) CGFloat fontScaleFactor; // ivar: _fontScaleFactor
@property (retain, nonatomic) NSArray *glyphAuthorColors; // ivar: _glyphAuthorColors
@property (readonly, nonatomic) CGRect glyphBounds;
@property (nonatomic) CGPoint glyphOffset; // ivar: _glyphOffset
@property (retain, nonatomic) NSArray *glyphPaths; // ivar: _glyphPaths
@property (nonatomic) BOOL hasChangeTracking; // ivar: _hasChangeTracking
@property (readonly) NSUInteger hash;
@property (nonatomic) TSWPFontHeightInfo heightInfo; // ivar: _heightInfo
@property (nonatomic) CGRect insetTextFrame; // ivar: _insetTextFrame
@property (readonly, nonatomic) BOOL isRightToLeft; // ivar: _isRightToLeft
@property (readonly, nonatomic) BOOL isVertical; // ivar: _isVertical
@property (nonatomic) CGFloat lineSpacingAmount; // ivar: _lineSpacingAmount
@property (nonatomic) NSInteger lineSpacingMode; // ivar: _lineSpacingMode
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic) CGFloat outdentInPoints;
@property (readonly, nonatomic) CGRect outermostPathRawBounds;
@property (retain, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (retain, nonatomic) TSUBezierPath *pathForExteriorWrap; // ivar: _pathForExteriorWrap
@property (nonatomic) CGRect rectAllocatedForUnderline; // ivar: _rectAllocatedForUnderline
@property (retain, nonatomic) TSUBezierPath *shapePath; // ivar: _shapePath
@property (nonatomic) CGFloat singleLineHeight; // ivar: _singleLineHeight
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressLineFragmentTextRendering;
@property (retain, nonatomic) NSObject<TSWPTextSource> *text; // ivar: _text
@property (nonatomic) CGRect textFrame; // ivar: _textFrame
@property (readonly, nonatomic) CGRect trailingCaretBounds;
@property (nonatomic) CGFloat underlineOffsetFromBaseline; // ivar: _underlineOffsetFromBaseline
@property (retain, nonatomic) TSUBezierPath *underlineWrapPath; // ivar: _underlineWrapPath
@property (nonatomic) TSWPFontHeightInfo unscaledFontHeightInfo; // ivar: _unscaledFontHeightInfo
@property (nonatomic) CGFloat unscaledFontSize; // ivar: _unscaledFontSize
@property (nonatomic) CGFloat wrapPadding; // ivar: _wrapPadding
@property (retain, nonatomic) TSDWrapSegments *wrapSegments; // ivar: _wrapSegments


+(NSUInteger)convertPointsToConvexHull:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
+(struct CGRect )boundsOfMinimumCircleEnclosingPath:(id)arg0 ;
-(BOOL)p_calculateMetrics;
-(CGFloat)scaledFontSize;
-(CGFloat)widthForCharacterAtIndex:(NSUInteger)arg0 ;
-(id)adornmentRenderer;
-(id)initWithDropCapStyle:(id)arg0 characterStyle:(id)arg1 paragraphStyle:(id)arg2 text:(id)arg3 rightToLeft:(BOOL)arg4 vertical:(BOOL)arg5 fontHeightInfo:(struct TSWPFontHeightInfo )arg6 lineSpacingMode:(NSInteger)arg7 lineSpacingAmount:(CGFloat)arg8 ;
-(id)p_createWrapSegments;
-(id)p_paddedPathForExteriorWrap;
-(id)p_styleArray;
-(id)p_styleArrayWithFontSize:(CGFloat)arg0 ;
-(id)paddedPathForExteriorWrap;
-(id)splitLine:(struct CGRect )arg0 skipHint:(*CGFloat)arg1 ;
-(id)styleArray;
-(id)styleArrayWithFontSize:(CGFloat)arg0 ;
-(struct CGPoint )glyphOriginIncludingOutdent;
-(struct CGRect )p_imageBoundsIncludingShadow:(BOOL)arg0 ;
-(void)drawAdornment:(id)arg0 inContext:(struct CGContext *)arg1 viewScale:(CGFloat)arg2 flipShadows:(BOOL)arg3 blackAndWhite:(BOOL)arg4 ;
-(void)offsetBy:(struct CGSize )arg0 ;


@end


#endif