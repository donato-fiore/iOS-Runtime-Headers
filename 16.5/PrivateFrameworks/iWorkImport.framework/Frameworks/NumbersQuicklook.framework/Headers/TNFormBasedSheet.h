// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TNFORMBASEDSHEET_H
#define TNFORMBASEDSHEET_H

@class NSString, TSTTableInfo;


#import "TNSheet.h"

@interface TNFormBasedSheet : TNSheet

@property (readonly, nonatomic) BOOL hasValidTableInfoForBuildingForm; // ivar: _hasValidTableInfoForBuildingForm
@property (readonly, nonatomic) BOOL hasValidTableInfoForViewingForm; // ivar: _hasValidTableInfoForViewingForm
@property (retain, nonatomic) NSString *importedTargetName; // ivar: _importedTargetName
@property (retain, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID


-(BOOL)isForm;
-(BOOL)isPrintable;
-(BOOL)shouldBeDisplayed;
-(CGFloat)contentScale;
-(id)initWithContext:(id)arg0 importedTargetName:(id)arg1 ;
-(void)clearTableInfoCache;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)resolveImportedTargetNameInDocumentRoot:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif