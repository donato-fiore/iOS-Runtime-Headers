// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCENEEVENTRESPONDER_H
#define _UISCENEEVENTRESPONDER_H


#import <Foundation/Foundation.h>

#import "_UISceneEventResponse.h"

@interface _UISceneEventResponder : NSObject {
    os_unfair_lock_s _sendLock;
    os_unfair_lock_s _dataLock;
    _UISceneEventResponse *_dataLock_first;
    _UISceneEventResponse *_dataLock_last;
}




-(id)init;
-(void)enqueuePostCommitResponse:(id)arg0 ;
-(void)enqueuePostSynchronizeResponse:(id)arg0 ;


@end


#endif