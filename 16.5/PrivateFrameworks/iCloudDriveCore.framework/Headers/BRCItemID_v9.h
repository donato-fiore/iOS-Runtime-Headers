// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCITEMID_V9_H
#define BRCITEMID_V9_H

@class NSString;
@protocol PQLValuable;

#import <Foundation/Foundation.h>

#import "BRCALRowID.h"

@interface BRCItemID_v9 : NSObject <PQLValuable>

 {
    BRCALRowID *_appLibraryRowID;
    unsigned char _kind;
    unsigned char _uuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
-(id)_initAsLibraryRootWithAppLibraryRowID:(id)arg0 enclosureUUID:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRootObject:(struct RootItemObject *)arg0 ;
-(id)initWithUUID:(char *)arg0 ;
-(id)initWithUUIDObject:(struct _UUIDItemObject_OLD *)arg0 ;
-(id)itemIDString;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif