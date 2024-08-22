// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQAPPSSYNCINGTODRIVECACHE_H
#define ICQAPPSSYNCINGTODRIVECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICQAppsSyncingToDriveCache : NSObject {
    NSMutableDictionary *_hashMap;
    os_unfair_lock_s _cacheLock;
}




+(id)sharedInstance;
-(id)appsSyncingToDriveforAltDSID:(id)arg0 ;
-(id)init;
-(void)setAppsSyncingToDrive:(id)arg0 forAltDSID:(id)arg1 ;


@end


#endif