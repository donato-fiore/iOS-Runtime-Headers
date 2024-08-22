// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSDISPLAYIDENTIFIERSCACHE_H
#define _SBSDISPLAYIDENTIFIERSCACHE_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SBSDisplayIdentifiersCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    id *_changedBlock;
}




+(id)sharedInstance;
-(id)displayIdentifiers;
-(id)init;
-(void)_queue_noteChanged;
-(void)dealloc;
-(void)registerChangedBlock:(id)arg0 ;


@end


#endif