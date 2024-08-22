// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMEDIASOCIALADMINSTATUSOPERATION_H
#define SSVMEDIASOCIALADMINSTATUSOPERATION_H

@class NSLock;


#import "SSVComplexOperation.h"

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock *_lock;
    id *_outputBlock;
}


@property (copy) id *outputBlock;


-(id)init;
-(void)main;


@end


#endif