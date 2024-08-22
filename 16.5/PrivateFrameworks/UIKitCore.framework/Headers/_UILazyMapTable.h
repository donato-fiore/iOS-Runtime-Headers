// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILAZYMAPTABLE_H
#define _UILAZYMAPTABLE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _UILazyMapTable : NSObject {
    id *_mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}




-(BOOL)hasCachedObjectForKey:(id)arg0 ;
-(NSUInteger)count;
-(id)cachedObjectEnumerable;
-(id)cachedObjects;
-(id)description;
-(id)initWithMappingBlock:(id)arg0 ;
-(id)keyEnumerable;
-(id)keys;
-(id)objectForKey:(id)arg0 ;
-(void)registerClient:(id)arg0 ofObjectForKey:(id)arg1 ;
-(void)unregisterClient:(id)arg0 ofObjectForKey:(id)arg1 ;


@end


#endif