// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPMERGEFIELDTYPE_H
#define TSWPMERGEFIELDTYPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPMergeFieldType : NSObject <NSCopying>



@property (copy, nonatomic) NSString *contactsKey; // ivar: _contactsKey
@property (copy, nonatomic) NSString *contactsLabel; // ivar: _contactsLabel
@property (copy, nonatomic) NSString *contactsProperty; // ivar: _contactsProperty
@property (readonly, nonatomic) BOOL isFromContacts;
@property (readonly, nonatomic) BOOL isFromTable;
@property (readonly, nonatomic) BOOL isSkipType;
@property (copy, nonatomic) NSString *tableKey; // ivar: _tableKey


+(id)skipMergeFieldType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithContactsProperty:(id)arg0 key:(id)arg1 label:(id)arg2 ;
-(id)initWithContactsProperty:(id)arg0 key:(id)arg1 label:(id)arg2 tableKey:(id)arg3 ;
-(id)initWithTableKey:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif