// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGEDATANOTIFIER_H
#define STSTORAGEDATANOTIFIER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface STStorageDataNotifier : NSObject {
    os_unfair_lock_s _changesLock;
    NSMutableDictionary *_changes;
}




+(id)sharedNotifier;
-(id)init;
-(void)_notify:(id)arg0 ;
-(void)notify:(id)arg0 ;
-(void)notify:(id)arg0 forBundleIDs:(id)arg1 ;
-(void)postAppSizesChanged:(id)arg0 ;
-(void)postAppsAdded:(id)arg0 ;
-(void)postAppsRemoved:(id)arg0 ;
-(void)postAppsStateChanged:(id)arg0 ;
-(void)postLoadingComplete;
-(void)postMediaSizesChanged;
-(void)postTipsChanged;


@end


#endif