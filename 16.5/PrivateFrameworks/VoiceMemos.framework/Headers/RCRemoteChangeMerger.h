// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCREMOTECHANGEMERGER_H
#define RCREMOTECHANGEMERGER_H

@class NSMutableDictionary, NSHashTable, NSManagedObjectContext, NSString;
@protocol RCStoreChangeMergerDelegate;

#import <Foundation/Foundation.h>


@interface RCRemoteChangeMerger : NSObject <RCStoreChangeMergerDelegate>

 {
    NSMutableDictionary *storeMergers;
    NSHashTable *_backgroundContexts;
    NSManagedObjectContext *_viewContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)backgroundContexts;
-(id)initWithStores:(id)arg0 viewContext:(id)arg1 transactionAuthorToObserve:(id)arg2 ;
-(void)_handleRemoteChangeNotification:(id)arg0 ;
-(void)addContextToMergeChangesInto:(id)arg0 ;


@end


#endif