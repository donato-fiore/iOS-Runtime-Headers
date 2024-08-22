// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKPKMUTABLESTROKE_H
#define TSKPKMUTABLESTROKE_H

@class PKStroke, PKMutableStroke;


#import "TSKPKStroke.h"

@interface TSKPKMutableStroke : TSKPKStroke

@property (retain, nonatomic) PKStroke *peaceMutableStroke; // ivar: _peaceMutableStroke
@property (retain, nonatomic) PKMutableStroke *yukonMutableStroke; // ivar: _yukonMutableStroke


-(id)initWithPKStroke:(id)arg0 pencilAnnotationDrawingScale:(CGFloat)arg1 ;
-(id)internalPencilKitStroke;
-(struct CGPoint )locationAtIndex:(NSUInteger)arg0 ;
-(void)setLocation:(struct CGPoint )arg0 atIndex:(NSUInteger)arg1 ;
-(void)transformWithTransform:(struct CGAffineTransform )arg0 ;


@end


#endif