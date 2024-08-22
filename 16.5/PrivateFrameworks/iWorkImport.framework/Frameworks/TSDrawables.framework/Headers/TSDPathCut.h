// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDPATHCUT_H
#define TSDPATHCUT_H


#import <Foundation/Foundation.h>


@interface TSDPathCut : NSObject

@property (readonly, nonatomic) NSInteger segment; // ivar: mSegment
@property (readonly, nonatomic) CGFloat skew; // ivar: mSkew
@property (readonly, nonatomic) CGFloat t; // ivar: mT


-(id)initWithSegment:(NSInteger)arg0 atT:(CGFloat)arg1 withSkew:(CGFloat)arg2 ;


@end


#endif