// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTEXTLINEDRAWING_H
#define UISTEXTLINEDRAWING_H

@class NSString;
@protocol UISDrawing;

#import <Foundation/Foundation.h>


@interface UISTextLineDrawing : NSObject <UISDrawing>

 {
    *__CTLine _line;
    CGSize _size;
    CGVector _offset;
    CGFloat _baseline;
}


@property (readonly, nonatomic) CGRect alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (readonly, nonatomic) BOOL hasLineBreak; // ivar: _hasLineBreak
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttributedString:(struct __CFAttributedString *)arg0 lineBreakMode:(unsigned char)arg1 textAlignment:(unsigned char)arg2 width:(CGFloat)arg3 scale:(CGFloat)arg4 ;
-(id)initWithNonretainedLine:(struct __CTLine *)arg0 lineBreakMode:(unsigned char)arg1 textAlignment:(unsigned char)arg2 width:(CGFloat)arg3 scale:(CGFloat)arg4 ;
-(id)initWithString:(struct __CFString *)arg0 attributes:(struct __CFDictionary *)arg1 lineBreakMode:(unsigned char)arg2 textAlignment:(unsigned char)arg3 width:(CGFloat)arg4 scale:(CGFloat)arg5 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif