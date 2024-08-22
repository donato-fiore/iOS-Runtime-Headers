// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLTESTPARAMETERS_H
#define UISCROLLTESTPARAMETERS_H

@class CADisplayLink, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIScrollTestParameters : NSObject <NSCopying>



@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat delta; // ivar: _delta
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat endOffset;
@property (copy, nonatomic) id *extraResultsBlock; // ivar: _extraResultsBlock
@property (nonatomic) NSInteger iterations; // ivar: _iterations
@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) CGFloat startOffset; // ivar: _startOffset
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif