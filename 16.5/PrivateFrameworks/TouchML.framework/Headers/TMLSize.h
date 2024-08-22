// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLSIZE_H
#define TMLSIZE_H

@protocol TMLSizeJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLSize : NSObject <TMLSizeJSExports, NSCopying>



@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGFloat width;


+(void)initializeJSContext:(id)arg0 ;
-(id)CGSizeValue;
-(id)asRect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extend:(CGFloat)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)max:(CGFloat)arg0 ;
-(id)min:(CGFloat)arg0 ;
-(id)scale:(CGFloat)arg0 ;


@end


#endif