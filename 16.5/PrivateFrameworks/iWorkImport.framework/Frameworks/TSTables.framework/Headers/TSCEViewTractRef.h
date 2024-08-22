// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEVIEWTRACTREF_H
#define TSCEVIEWTRACTREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCEUndoTract.h"

@interface TSCEViewTractRef : NSObject <NSCopying>



@property (nonatomic) unsigned short aggregateIndexLevel; // ivar: _aggregateIndexLevel
@property (nonatomic) unsigned char columnGroupLevel; // ivar: _columnGroupLevel
@property (readonly, nonatomic) BOOL isFixedAtZeroRef;
@property (readonly, nonatomic) BOOL isValidOrSpanning;
@property (nonatomic) TSUPreserveFlags preserveFlags; // ivar: _preserveFlags
@property (nonatomic) unsigned char rowGroupLevel; // ivar: _rowGroupLevel
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID
@property (retain, nonatomic) TSCEUndoTract *tract; // ivar: _tract


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 ;
-(id)initWithTract:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 preserveFlags:(struct TSUPreserveFlags )arg2 ;
-(id)initWithTract:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 preserveFlags:(struct TSUPreserveFlags )arg2 columnGroupLevel:(unsigned char)arg3 rowGroupLevel:(unsigned char)arg4 aggrIndexLevel:(unsigned short)arg5 ;


@end


#endif