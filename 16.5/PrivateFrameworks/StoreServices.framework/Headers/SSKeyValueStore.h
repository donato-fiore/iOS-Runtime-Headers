// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSKEYVALUESTORE_H
#define SSKEYVALUESTORE_H


#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSKeyValueStoreDatabase.h"

@interface SSKeyValueStore : NSObject {
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}


@property (readonly, getter=isLocalReadable) BOOL localReadable;
@property (readonly, getter=isLocalWritable) BOOL localWritable;


-(id)accountDictionaries;
-(id)copyAccounts;
-(id)iTunesValueForKey:(id)arg0 usedDomain:(*id)arg1 ;
-(id)init;
-(void)_loadDatabaseIfNecessary;
-(void)dealloc;
-(void)getValueForDomain:(id)arg0 key:(id)arg1 usingBlock:(id)arg2 ;
-(void)getValuesForDomain:(id)arg0 keys:(*id)arg1 count:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)modifyUsingTransactionBlock:(id)arg0 ;
-(void)readUsingSessionBlock:(id)arg0 ;
-(void)removeAccountDictionaries;
-(void)removeAccountFromDomain:(id)arg0 ;
-(void)removeAllValuesForDomain:(id)arg0 ;
-(void)removeAllValuesForDomain:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeAllValuesWithCompletionBlock:(id)arg0 ;
-(void)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 completionBlock:(id)arg3 ;
-(void)setValuesWithDictionary:(id)arg0 forDomain:(id)arg1 ;
-(void)setValuesWithDictionary:(id)arg0 forDomain:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif