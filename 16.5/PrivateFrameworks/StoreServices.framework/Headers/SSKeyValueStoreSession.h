// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSKEYVALUESTORESESSION_H
#define SSKEYVALUESTORESESSION_H


#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSKeyValueStoreSession : NSObject

@property (readonly, nonatomic) SSSQLiteDatabase *database; // ivar: _database


-(id)copyAccountDictionaryForDomain:(id)arg0 ;
-(id)copyDataForDomain:(id)arg0 key:(id)arg1 ;
-(id)copyValueForDomain:(id)arg0 key:(id)arg1 ;
-(id)existingEntityForDomain:(id)arg0 key:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg0 usedDomain:(*id)arg1 ;
-(id)initWithDatabase:(id)arg0 ;
-(void)dealloc;


@end


#endif