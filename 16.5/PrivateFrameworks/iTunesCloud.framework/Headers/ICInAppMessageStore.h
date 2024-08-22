// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINAPPMESSAGESTORE_H
#define ICINAPPMESSAGESTORE_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICInAppMessageStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}




-(id)_defaultStoreFilePath;
-(id)init;
-(id)initWithFilePath:(id)arg0 ;
-(void)_commit;
-(void)_load;
-(void)addMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)addPendingMessageEvent:(id)arg0 completion:(id)arg1 ;
-(void)allApplicationStorePropertiesWithCompletion:(id)arg0 ;
-(void)allStorePropertiesWithCompletion:(id)arg0 ;
-(void)getAllMessageEntriesForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAllMessageEntriesForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)getAllMessageEntriesWithCompletion:(id)arg0 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAllMetadataForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)getMessageEntryWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getMetadataForMessageIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getStorePropertyForKey:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getStorePropertyForKey:(id)arg0 completion:(id)arg1 ;
-(void)pendingMessageEventsWithCompletion:(id)arg0 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeAllMetadataForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)removeMessageEntryWithIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)removeMetadataForMessageIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)removePendingMessageEventWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetStoreWithCompletion:(id)arg0 ;
-(void)updateMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)updateMetadata:(id)arg0 messageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)updateStoreProperty:(id)arg0 forKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)updateStoreProperty:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif