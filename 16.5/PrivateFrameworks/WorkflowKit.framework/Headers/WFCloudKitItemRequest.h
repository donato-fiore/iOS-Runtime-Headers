// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITITEMREQUEST_H
#define WFCLOUDKITITEMREQUEST_H

@class CKContainer, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface WFCloudKitItemRequest : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationWaitingQueue; // ivar: _operationWaitingQueue
@property (nonatomic) BOOL performExpensiveFetchOperations; // ivar: _performExpensiveFetchOperations
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // ivar: _xpcActivity


+(id)createRecordFromItem:(id)arg0 zoneID:(id)arg1 ;
+(id)createRecordIDWithName:(id)arg0 zoneID:(id)arg1 ;
+(id)desiredKeysFromProperties:(id)arg0 itemType:(Class)arg1 ;
+(id)itemValueForRecordValue:(id)arg0 item:(id)arg1 property:(id)arg2 resolvedReferences:(id)arg3 ;
+(id)recordValueForItemValue:(id)arg0 item:(id)arg1 property:(id)arg2 recordKey:(id)arg3 zoneID:(id)arg4 ;
+(void)assignRecordValue:(id)arg0 toItem:(id)arg1 withProperty:(id)arg2 resolvedReferences:(id)arg3 ;
+(void)hydrateItem:(id)arg0 withRecord:(id)arg1 resolvedReferences:(id)arg2 setNilValues:(BOOL)arg3 ;
+(void)hydrateItem:(id)arg0 withRecord:(id)arg1 setNilValues:(BOOL)arg2 ;
-(id)createTaskCancelledError;
-(id)deleteItem:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchConfigurationAssetWithType:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchConfigurationAssetWithType:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(id)fetchItemWithID:(id)arg0 itemType:(Class)arg1 groupName:(id)arg2 properties:(id)arg3 completionHandler:(id)arg4 ;
-(id)fetchItemsWithPredicate:(id)arg0 itemType:(Class)arg1 groupName:(id)arg2 properties:(id)arg3 completionHandler:(id)arg4 ;
-(id)fetchItemsWithPredicate:(id)arg0 itemType:(Class)arg1 groupName:(id)arg2 properties:(id)arg3 sortDescriptors:(id)arg4 resultsLimit:(NSUInteger)arg5 completionHandler:(id)arg6 ;
-(id)fetchItemsWithPredicate:(id)arg0 itemType:(Class)arg1 groupName:(id)arg2 properties:(id)arg3 sortDescriptors:(id)arg4 resultsLimit:(NSUInteger)arg5 qualityOfService:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(id)fetchRecordIDs:(id)arg0 desiredKeys:(id)arg1 operationGroup:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithContainer:(id)arg0 database:(id)arg1 ;
-(id)updateItems:(id)arg0 setNilValues:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)updateItems:(id)arg0 setNilValues:(BOOL)arg1 qualityOfService:(NSInteger)arg2 timeoutIntervalForRequest:(CGFloat)arg3 completionHandler:(id)arg4 ;


@end


#endif