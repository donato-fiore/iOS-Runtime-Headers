// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSOPERATIONPROGRESS_H
#define SSOPERATIONPROGRESS_H

@class NSMutableArray, NSString;
@protocol SSXPCCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying>

 {
    BOOL _canPause;
    CGFloat _changeRate;
    NSInteger _currentValue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CGFloat _estimatedTimeRemaining;
    NSInteger _maxValue;
    NSInteger _normalizedCurrentValue;
    NSInteger _normalizedMaxValue;
    NSInteger _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    NSInteger _units;
}


@property BOOL canPause;
@property CGFloat changeRate;
@property NSInteger currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat estimatedTimeRemaining;
@property (readonly) NSUInteger hash;
@property NSInteger maxValue;
@property NSInteger normalizedCurrentValue;
@property NSInteger normalizedMaxValue;
@property NSInteger operationType;
@property (readonly) Class superclass;
@property NSInteger units;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_updateStatisticsFromSnapshots;
-(void)dealloc;
-(void)resetSnapshots;
-(void)snapshot;


@end


#endif