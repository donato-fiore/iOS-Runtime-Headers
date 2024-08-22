// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXTWRAPPER_H
#define TSWPTEXTWRAPPER_H


#import <Foundation/Foundation.h>


@interface TSWPTextWrapper : NSObject



+(CGFloat)unobstructedSpanForPath:(id)arg0 startingSpan:(struct CGRect )arg1 columnBounds:(struct CGRect )arg2 ;
+(unsigned int)p_wrappedSubrectsForRectGPC:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 polygon:(id)arg2 type:(int)arg3 skipHint:(*CGFloat)arg4 ;
+(unsigned int)p_wrappedSubrectsForRectOptimized:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 polygon:(id)arg2 type:(int)arg3 skipHint:(*CGFloat)arg4 ;
+(unsigned int)splitLine:(struct CGRect )arg0 lineSegmentRects:(struct CGRect )arg1 polygon:(id)arg2 type:(int)arg3 skipHint:(*CGFloat)arg4 ;


@end


#endif