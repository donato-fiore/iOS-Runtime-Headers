// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCMIGRATIONSTATS_H
#define BRCMIGRATIONSTATS_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCMigrationStats : NSObject <NSSecureCoding>



@property NSUInteger bouncedDocumentsFolders; // ivar: bouncedDocumentsFolders
@property NSUInteger bouncedItems; // ivar: bouncedItems
@property NSUInteger clonedAppLibraries; // ivar: clonedAppLibraries
@property NSUInteger clonedFiles; // ivar: clonedFiles
@property NSUInteger clonedFolders; // ivar: clonedFolders
@property NSUInteger clonedSideFaults; // ivar: clonedSideFaults
@property CGFloat cloningDuration; // ivar: cloningDuration
@property NSUInteger cloningFailures; // ivar: cloningFailures
@property NSUInteger datalessItems; // ivar: datalessItems
@property NSUInteger documentsFoldersWithoutItemID; // ivar: documentsFoldersWithoutItemID
@property CGFloat duration; // ivar: duration
@property NSUInteger expectedMigrations; // ivar: expectedMigrations
@property NSUInteger ignoredContentProtectedItems; // ivar: ignoredContentProtectedItems
@property CGFloat importDuration; // ivar: importDuration
@property NSUInteger itemsChangedDuringCloning; // ivar: itemsChangedDuringCloning
@property NSUInteger itemsNotFoundInDB; // ivar: itemsNotFoundInDB
@property NSUInteger materialisedInCloudDocs; // ivar: materialisedInCloudDocs
@property NSUInteger materializedInFPFS; // ivar: materializedInFPFS
@property NSUInteger migratedSideFaults; // ivar: migratedSideFaults
@property NSUInteger nonMigratedItems; // ivar: nonMigratedItems
@property NSUInteger packagesWithoutBundleBit; // ivar: packagesWithoutBundleBit
@property NSUInteger reconciledItems; // ivar: reconciledItems
@property NSUInteger reconciliationFailures; // ivar: reconciliationFailures
@property NSUInteger sideFaultsCount; // ivar: sideFaultsCount
@property NSUInteger symlinkedDocumentsFolders; // ivar: symlinkedDocumentsFolders
@property NSUInteger totalItemCount; // ivar: totalItemCount
@property NSInteger unexpectedCreations; // ivar: unexpectedCreations
@property (retain) NSUUID *uuid; // ivar: uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif