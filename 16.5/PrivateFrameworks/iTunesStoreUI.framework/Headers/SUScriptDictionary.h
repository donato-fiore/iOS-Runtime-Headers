// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTDICTIONARY_H
#define SUSCRIPTDICTIONARY_H

@class NSArray, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUScriptDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_stringKeys;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
}


@property (readonly) NSDictionary *dictionary; // ivar: _dictionary


+(BOOL)isKeyExcludedFromWebScript:(char *)arg0 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)attributeKeys;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)stringRepresentation;
-(id)valueForKey:(id)arg0 ;
-(id)valueForNotNativelySupportedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif