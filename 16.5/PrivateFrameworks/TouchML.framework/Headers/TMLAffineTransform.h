// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLAFFINETRANSFORM_H
#define TMLAFFINETRANSFORM_H

@protocol TMLAffineTransformJSExports;

#import <Foundation/Foundation.h>


@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports>



@property (readonly, nonatomic) CGFloat a;
@property (readonly, nonatomic) CGFloat b;
@property (readonly, nonatomic) CGFloat c;
@property (readonly, nonatomic) CGFloat d;
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic) CGFloat tx;
@property (readonly, nonatomic) CGFloat ty;


+(void)initializeJSContext:(id)arg0 ;
-(id)initWithAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif