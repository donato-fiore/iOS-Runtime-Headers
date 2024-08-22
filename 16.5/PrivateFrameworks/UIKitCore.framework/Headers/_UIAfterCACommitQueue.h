// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIAFTERCACOMMITQUEUE_H
#define _UIAFTERCACOMMITQUEUE_H


#import <Foundation/Foundation.h>

#import "_UIAfterCACommitBlock.h"

@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}




-(BOOL)flush;
-(id)init;
-(void)enqueuePostCommitBlock:(id)arg0 ;
-(void)enqueuePostSynchronizeBlock:(id)arg0 ;


@end


#endif