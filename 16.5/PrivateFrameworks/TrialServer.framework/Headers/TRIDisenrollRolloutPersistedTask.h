// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIDISENROLLROLLOUTPERSISTEDTASK_H
#define TRIDISENROLLROLLOUTPERSISTEDTASK_H

@class TRIPBMessage, NSString;



@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) BOOL hasTriggerEvent;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) int triggerEvent;


+(id)descriptor;


@end


#endif