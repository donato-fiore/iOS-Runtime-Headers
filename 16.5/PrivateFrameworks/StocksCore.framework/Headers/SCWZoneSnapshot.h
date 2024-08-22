// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWZONESNAPSHOT_H
#define SCWZONESNAPSHOT_H

@class NSArray;
@protocol SCWZoneReading;

#import <Foundation/Foundation.h>

#import "SCWZoneSchema.h"

@interface SCWZoneSnapshot : NSObject <SCWZoneReading>



@property (readonly, copy, nonatomic) NSArray *allRecords;
@property (copy, nonatomic) NSArray *records; // ivar: _records
@property (retain, nonatomic) SCWZoneSchema *zoneSchema; // ivar: _zoneSchema


-(BOOL)isEqualToSnapshot:(id)arg0 ;
-(id)descriptionOfContents;
-(id)initWithZoneSchema:(id)arg0 records:(id)arg1 ;
-(id)recordOfType:(id)arg0 ;
-(id)recordOfType:(id)arg0 passingTest:(id)arg1 ;
-(id)recordWithName:(id)arg0 ;
-(id)recordsOfType:(id)arg0 ;


@end


#endif