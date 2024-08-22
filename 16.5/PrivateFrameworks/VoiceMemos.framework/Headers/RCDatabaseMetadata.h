// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCDATABASEMETADATA_H
#define RCDATABASEMETADATA_H

@class NSPersistentStore, NSPersistentStoreCoordinator, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface RCDatabaseMetadata : NSObject {
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableDictionary *_metadata;
}


@property (readonly) BOOL dirty; // ivar: _dirty


-(id)initWithPersistentStore:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)migrate:(id)arg0 ;
-(void)save;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif