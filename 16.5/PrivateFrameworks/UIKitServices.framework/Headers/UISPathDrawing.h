// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISPATHDRAWING_H
#define UISPATHDRAWING_H

@class NSString;
@protocol UISDrawing;

#import <Foundation/Foundation.h>


@interface UISPathDrawing : NSObject <UISDrawing>

 {
    NSInteger _type;
    *CGPath _path;
    CGSize _size;
    *CGColor _fillColor;
}


@property (readonly, nonatomic) CGRect alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEllipseSize:(struct CGSize )arg0 fillColor:(struct CGColor *)arg1 ;
-(id)initWithPath:(struct CGPath *)arg0 size:(struct CGSize )arg1 fillColor:(struct CGColor *)arg2 ;
-(id)initWithRectSize:(struct CGSize )arg0 fillColor:(struct CGColor *)arg1 ;
-(id)initWithRoundedRectSize:(struct CGSize )arg0 cornerRadii:(CGFloat)arg1 fillColor:(struct CGColor *)arg2 ;
-(id)initWithType:(NSInteger)arg0 path:(struct CGPath *)arg1 size:(struct CGSize )arg2 fillColor:(struct CGColor *)arg3 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif