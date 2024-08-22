// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEMORYCONTENTKEYSTORE_H
#define ICMEMORYCONTENTKEYSTORE_H

@class NSMutableDictionary;
@protocol ICContentKeyStoreProtocol;

#import <Foundation/Foundation.h>


@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol>

 {
    NSMutableDictionary *_keyEntries;
}




-(BOOL)containsKeyForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)incrementFailureCountForKeyWithIdentifier:(id)arg0 ;
-(id)init;
-(id)loadKeyForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)removeAllKeys;
-(id)removeKeyForIdentifier:(id)arg0 ;
-(id)saveKey:(id)arg0 forIdentifier:(id)arg1 adamID:(id)arg2 withRenewalDate:(id)arg3 accountDSID:(id)arg4 keyServerProtocolType:(NSInteger)arg5 ;
-(id)saveKeyEntry:(id)arg0 ;
-(void)enumerateKeyEntriesUsingBlock:(id)arg0 ;


@end


#endif