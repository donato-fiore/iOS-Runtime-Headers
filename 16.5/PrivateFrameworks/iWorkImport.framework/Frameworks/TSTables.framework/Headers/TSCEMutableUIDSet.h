// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEMUTABLEUIDSET_H
#define TSCEMUTABLEUIDSET_H



#import "TSCEUIDSet.h"

@interface TSCEMutableUIDSet : TSCEUIDSet



-(BOOL)addUUID:(struct TSKUIDStruct )arg0 ;
-(BOOL)removeUUID:(struct TSKUIDStruct )arg0 ;
-(BOOL)removeUuidsFromSet:(id)arg0 ;
-(id)addUuidsFromSetReturningAdded:(id)arg0 ;
-(id)removeUuidsFromSetReturningRemoved:(id)arg0 ;
-(void)addUUIDs:(*void)arg0 ;
-(void)addUuidsFromSet:(id)arg0 ;
-(void)addUuidsFromVector:(*void)arg0 ;
-(void)remapWithMap:(*void)arg0 ;
-(void)removeAllUuids;
-(void)removeUUIDs:(*void)arg0 ;
-(void)removeUuidsFromVector:(*void)arg0 ;
-(void)reserve:(NSUInteger)arg0 ;


@end


#endif