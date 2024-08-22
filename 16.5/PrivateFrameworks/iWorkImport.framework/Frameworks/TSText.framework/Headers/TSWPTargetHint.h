// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTARGETHINT_H
#define TSWPTARGETHINT_H

@class NSString;
@protocol TSWPOffscreenColumn, NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>



@property (nonatomic) _NSRange anchoredRange; // ivar: _anchoredRange
@property (nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL endOfLayout; // ivar: _endOfLayout
@property (nonatomic) CGRect frameBounds; // ivar: _frameBounds
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastLineIsEmptyAndHasListLabel; // ivar: _lastLineIsEmptyAndHasListLabel
@property (nonatomic) NSUInteger lineFragmentCount; // ivar: _lineFragmentCount
@property (nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // ivar: _nextWidowPullsDownFromCharIndex
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly) Class superclass;
@property (nonatomic) BOOL terminatedByBreak; // ivar: _terminatedByBreak
@property (nonatomic) BOOL textIsVertical; // ivar: _textIsVertical
@property (nonatomic) BOOL usedParagraphHeights; // ivar: _usedParagraphHeights


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 removeFootnoteReferenceCount:(NSUInteger)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3 ;


@end


#endif