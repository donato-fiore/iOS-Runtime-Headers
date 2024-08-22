// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMPOUNDOBJECTMAP_H
#define _UICOMPOUNDOBJECTMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary *_mapTable;
}


@property (readonly, nonatomic) NSUInteger count;


+(id)compoundObjectMap;
-(id)deepCopy;
-(id)description;
-(id)init;
-(id)valueForObject:(id)arg0 andProperty:(id)arg1 ;
-(void)addEntriesFromCompoundObjectMap:(id)arg0 keepingCurrentValues:(BOOL)arg1 ;
-(void)performWithEach:(id)arg0 ;
-(void)removeAllMappings;
-(void)setValue:(id)arg0 forObject:(id)arg1 andProperty:(id)arg2 ;


@end


#endif