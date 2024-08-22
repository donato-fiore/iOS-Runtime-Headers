// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKNETWORKREQUESTREAUTHCOORDINATOR_H
#define WLKNETWORKREQUESTREAUTHCOORDINATOR_H

@class NSLock;
@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking>

 {
    NSLock *_lock;
}


@property BOOL sessionPrompt; // ivar: _sessionPrompt


+(id)coordinator;
-(BOOL)didPrompt;
-(id)_init;
-(void)dealloc;
-(void)lock;
-(void)markPrompt;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)unlock;


@end


#endif