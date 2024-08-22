// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBBOOKMARKSYNCDATA_H
#define WBBOOKMARKSYNCDATA_H

@class NSMutableDictionary, NSDictionary, NSArray, NSData, CKRecordID, WBSCRDTPosition, CKRecord, CKShare;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBookmarkSyncData : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_generations;
    NSMutableDictionary *_auxiliaryRecords;
    NSDictionary *_extraPositionData;
}


@property (readonly, copy, nonatomic) NSArray *auxiliaryRecordIDs;
@property (readonly, copy, nonatomic) NSData *encodedBookmarkSyncData;
@property (nonatomic) BOOL isDeletingRecordZone; // ivar: _isDeletingRecordZone
@property (nonatomic) NSUInteger minimumAPIVersion; // ivar: _minimumAPIVersion
@property (nonatomic) NSUInteger modifiedAttributeMask; // ivar: _modifiedAttributeMask
@property (copy, nonatomic) CKRecordID *parentRecordID; // ivar: _parentRecordID
@property (retain, nonatomic) WBSCRDTPosition *position; // ivar: _position
@property (copy, nonatomic) NSDictionary *positionDictionaryRepresentation;
@property (copy, nonatomic) CKRecord *record; // ivar: _record
@property (copy, nonatomic) CKShare *shareRecord; // ivar: _shareRecord
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
+(id)positionFromContentsOfData:(id)arg0 ;
+(id)syncDataWithContentsOfData:(id)arg0 ;
-(BOOL)hasGenerationForKey:(id)arg0 ;
-(id)auxiliaryRecordForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generationForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clearAllCKRecords;
-(void)clearAllGenerationsExceptState;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementGenerationForKey:(id)arg0 withDeviceIdentifier:(id)arg1 ;
-(void)setAuxiliaryRecord:(id)arg0 forKey:(id)arg1 ;
-(void)setGeneration:(id)arg0 forKey:(id)arg1 ;


@end


#endif