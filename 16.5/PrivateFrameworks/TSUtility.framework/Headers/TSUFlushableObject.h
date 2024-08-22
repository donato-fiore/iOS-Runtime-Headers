// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUFLUSHABLEOBJECT_H
#define TSUFLUSHABLEOBJECT_H

@class NSString;
@protocol TSUFlushable, NSLocking;

#import <Foundation/Foundation.h>

#import "TSUFlushingManager.h"

@interface TSUFlushableObject : NSObject <TSUFlushable>

 {
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)hasFlushableContent;
-(NSUInteger)retainCount;
-(id)init;
-(id)ownerAutoreleasedAccess;
-(id)ownerRetain;
-(id)retain;
-(void)addOwner;
-(void)dealloc;
-(void)flush;
-(void)ownerDidAccess;
-(void)ownerRelease;
-(void)ownerWillAccess;
-(void)release;
-(void)unload;


@end


#endif