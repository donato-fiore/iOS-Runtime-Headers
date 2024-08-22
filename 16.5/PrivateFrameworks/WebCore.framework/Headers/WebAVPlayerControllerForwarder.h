// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAVPLAYERCONTROLLERFORWARDER_H
#define WEBAVPLAYERCONTROLLERFORWARDER_H


#import <Foundation/Foundation.h>


@interface WebAVPlayerControllerForwarder : NSObject {
    RetainPtr<WebAVPlayerController> _playerController;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_forwardingTargetForKeyPath:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;


@end


#endif