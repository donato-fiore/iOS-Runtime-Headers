// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCMIGRATION_H
#define RCMIGRATION_H

@class NSManagedObject, NSDate, NSNumber, NSString;



@interface RCMigration : NSManagedObject

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *flags;
@property (readonly, nonatomic) BOOL hasEncryptedFields;
@property (readonly, nonatomic) NSString *jsonDescription;
@property (nonatomic) NSUInteger migrationFlags;
@property (readonly, nonatomic) int migrationReason;


+(id)createEncryptedFieldsMigration:(int)arg0 context:(id)arg1 ;
-(id)_descriptionDictionary;
-(id)_initWithFlags:(NSUInteger)arg0 context:(id)arg1 ;
-(id)description;


@end


#endif