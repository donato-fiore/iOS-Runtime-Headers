// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISUNIQUEOPERATIONMANAGER_H
#define ISUNIQUEOPERATIONMANAGER_H

@class NSMutableArray, NSLock, NSMutableDictionary, NSString;
@protocol ISSingleton;

#import <Foundation/Foundation.h>

#import "ISUniqueOperationContext.h"

@interface ISUniqueOperationManager : NSObject <ISSingleton>

 {
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_lockPool;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)_activeContext;
-(id)_contextForOperation:(id)arg0 ;
-(id)init;
-(id)lockWithIdentifier:(id)arg0 ;
-(id)predecessorForKey:(id)arg0 operation:(id)arg1 ;
-(void)checkInOperation:(id)arg0 ;
-(void)checkOutOperation:(id)arg0 ;
-(void)dealloc;
-(void)setPredecessorIfNeeded:(id)arg0 forKey:(id)arg1 ;
-(void)uniqueOperationFinished:(id)arg0 forKey:(id)arg1 ;


@end


#endif