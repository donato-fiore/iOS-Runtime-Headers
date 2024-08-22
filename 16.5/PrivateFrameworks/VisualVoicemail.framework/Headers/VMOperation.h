// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMOPERATION_H
#define VMOPERATION_H

@class NSOperation, NSProgress;
@protocol OS_dispatch_queue;



@interface VMOperation : NSOperation

@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)configureProgressWithUnitCount:(NSInteger)arg0 ;
-(void)performSynchronousBlock:(id)arg0 ;


@end


#endif