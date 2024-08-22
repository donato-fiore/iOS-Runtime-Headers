// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCOMPONENTDATAREFERENCEMAP_H
#define TSPCOMPONENTDATAREFERENCEMAP_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence15TSPReferenceMap.h"

@interface TSPComponentDataReferenceMap : NSObject {
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence15TSPReferenceMap *_objectToDataReferenceMap;
    NSIndexSet *_objectIdentifiersWithoutUUID;
}


@property (readonly, nonatomic) NSUInteger dataCount;
@property (readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *dataToObjectReferenceMap;
@property (readonly, nonatomic) NSUInteger objectCount;
@property (readonly, nonatomic) NSIndexSet *objectIdentifiersWithoutUUID;
@property (readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *objectToDataReferenceMap;


-(id)description;
-(id)init;
-(id)initFromMessage:(*void)arg0 componentObjectUUIDMap:(id)arg1 needsUpgrade:(*BOOL)arg2 ;
-(id)initWithDataToObjectReferenceMap:(id)arg0 objectToDataReferenceMap:(id)arg1 objectIdentifiersWithoutUUID:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif