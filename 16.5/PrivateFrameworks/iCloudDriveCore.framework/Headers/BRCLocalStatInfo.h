// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCLOCALSTATINFO_H
#define BRCLOCALSTATINFO_H

@class NSString, NSNumber;


#import "BRCStatInfo.h"
#import "BRFieldStructureSignature.h"

@interface BRCLocalStatInfo : BRCStatInfo

@property (readonly, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *fpCreationItemIdentifier; // ivar: _fpCreationItemIdentifier
@property (nonatomic) unsigned char itemScope; // ivar: _itemScope
@property (readonly, nonatomic) NSUInteger localChangeCount;
@property (readonly, nonatomic) NSUInteger localChangeCount; // ivar: _localChangeCount
@property (readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (readonly, nonatomic) NSString *oldVersionIdentifier; // ivar: _oldVersionIdentifier
@property (readonly, nonatomic) NSNumber *processingStamp; // ivar: _processingStamp
@property (retain, nonatomic) NSString *rawBouncedLogicalName; // ivar: _bouncedLogicalName
@property (readonly, nonatomic) BRFieldStructureSignature *versionSignature;


+(char)modeFromImportObject:(id)arg0 isPackageFault:(BOOL)arg1 ;
+(id)_finderTagsFromImportObject:(id)arg0 ;
-(BOOL)checkStateWithItemID:(id)arg0 logToFile:(struct __sFILE *)arg1 ;
-(NSUInteger)diffAgainstLocalInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 origName:(id)arg1 ;
-(id)initAsShareAcceptFaultWithName:(id)arg0 mode:(char)arg1 isDirectory:(BOOL)arg2 ;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithImportObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalStatInfo:(id)arg0 ;
-(id)logicalName;
-(void)_clearBouncedName;
-(void)_markChildPropagationComplete;
-(void)_markDead;
-(void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg0 ;
-(void)_markNeedsPropertiesPropagatedToChildren;
-(void)_markZombieForCrossZoneMove;
-(void)_moveItemAsideWithUUIDString;
-(void)_setCKInfo:(id)arg0 ;
-(void)_updateStatAliasMeta:(id)arg0 ;
-(void)_updateStatMeta:(id)arg0 ;
-(void)_updateStatMetaFromServer:(id)arg0 ;
-(void)bumpLocalChangeCount;
-(void)clearCKInfo;
-(void)updateFromImportObject:(id)arg0 onlyContentDependentProperties:(BOOL)arg1 ;
-(void)updateWithFileSystemFlags:(NSUInteger)arg0 ignoreExecutable:(BOOL)arg1 ;


@end


#endif