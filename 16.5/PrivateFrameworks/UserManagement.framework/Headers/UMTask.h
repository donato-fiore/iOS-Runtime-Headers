// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UMTASK_H
#define UMTASK_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface UMTask : NSObject

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int pid; // ivar: _pid
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)taskWithName:(id)arg0 reason:(id)arg1 ;
+(id)taskWithName:(id)arg0 reason:(id)arg1 forBundleID:(id)arg2 ;
-(id)description;
-(id)init;
-(void)begin;
-(void)end;


@end


#endif