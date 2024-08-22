// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSOPTIMALLINEBREAKER_H
#define _NSOPTIMALLINEBREAKER_H

@class NSMutableSet, NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "UIFont.h"
#import "NSParagraphStyle.h"
#import "_NSLineBreakerNodePool.h"
#import "_NSLineMetrics.h"

@interface _NSOptimalLineBreaker : NSObject {
    BOOL _lineBreaksValid;
    BOOL _wrappingValid;
    BOOL _linesValid;
    CGFloat _tolerance;
    *? _lineBreaks;
    NSUInteger _lineBreakCount;
    NSUInteger _lineBreakCapacity;
    *__CFArray _lines;
    *? _lineInfos;
    *__CFStringTokenizer _wordTokenizer;
    *__CFStringTokenizer _wordBoundaryTokenizer;
    UIFont *_cachedHyphenFont;
    _NSRange _cachedHyphenFontRange;
    CGFloat _cachedHyphenWidth;
    *__CFLocale _locale;
    NSParagraphStyle *_paragraphStyle;
    NSInteger _alignment;
    CGFloat _firstLineMaxWidth;
    CGFloat _nonFirstLineMaxWidth;
    NSMutableSet *_consumedNBSPRanges;
    _NSLineBreakerNodePool *_nodePool;
    *? _chosenLineBreaks;
    NSUInteger _chosenLineBreakCount;
    CGFloat _justifiedHyphenPenalty;
    CGFloat _nonJustifiedHyphenPenalty;
    CGFloat _hyphenationFactorHyphenPenalty;
    CGFloat _twoHyphenPenalty;
    CGFloat _stretchClassMismatchPenalty;
    CGFloat _riverPenalty;
    NSUInteger _minNonRuntLength;
    CGFloat _runtPenalty;
    CGFloat _expansionPower;
    CGFloat _expansionWeight;
    CGFloat _maxContract;
    CGFloat _maxExpand;
    CGFloat _nonJustifiedStretchFactor;
    CGFloat _maxGlyphContract;
    CGFloat _maxGlyphExpand;
    NSUInteger _minPreHyphenLength;
    NSUInteger _minPostHyphenLength;
    _NSLineMetrics *_lineMetrics;
    BOOL _lineMetricsValid;
}


@property (nonatomic) BOOL allowsHyphenation; // ivar: _allowsHyphenation
@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) BOOL avoidsRivers; // ivar: _avoidsRivers
@property (nonatomic) BOOL compressesLeftAlignedText; // ivar: _compressesLeftAlignedText
@property (readonly, nonatomic) NSString *debugString;
@property (nonatomic) BOOL expandsGlyphs; // ivar: _expandsGlyphs
@property (nonatomic) CGFloat hyphenationFactor; // ivar: _hyphenationFactor
@property (copy, nonatomic) NSString *lineBreakAlgorithm; // ivar: _lineBreakAlgorithm
@property (nonatomic) NSUInteger lineBreakStrategy; // ivar: _lineBreakStrategy
@property (nonatomic) NSInteger lineCountAdjustment; // ivar: _lineCountAdjustment
@property (nonatomic) *__CFLocale locale;
@property (nonatomic) CGFloat minimumLastLineLength; // ivar: _minimumLastLineLength
@property (nonatomic) *__CTLine paragraphLine; // ivar: _paragraphLine
@property (nonatomic) _NSRange paragraphRange; // ivar: _paragraphRange
@property (nonatomic) BOOL shouldFillLastLine; // ivar: _shouldFillLastLine
@property (nonatomic) CGFloat textContainerWidth; // ivar: _textContainerWidth
@property (nonatomic) BOOL usesHangingPunctuation; // ivar: _usesHangingPunctuation
@property (nonatomic) BOOL usesStretchClasses; // ivar: _usesStretchClasses


-(NSUInteger)lineCount;
-(id)init;
-(struct ? )lineBreakAtIndex:(NSUInteger)arg0 ;
-(struct ? )lineInfoAtIndex:(NSUInteger)arg0 ;
-(struct __CTLine *)lineAtIndex:(NSUInteger)arg0 lineInfo:(struct ? *)arg1 ;
-(void)dealloc;
-(void)enumerateLineBreaksInRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(void)invalidateWrapping;
-(void)layout;
-(void)setOptions:(id)arg0 ;


@end


#endif